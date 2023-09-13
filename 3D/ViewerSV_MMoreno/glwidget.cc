// Author: Marc Comino 2019

#include <glwidget.h>

#include <fstream>
#include <iostream>
#include <memory>
#include <string>

#include "./volume.h"
#include "./volume_io.h"

namespace {

const float kFieldOfView = 60;
const float kZNear = 0.1;
const float kZFar = 10;

const char kVertexShaderFile[] = "../shaders/raycast.vert";
const char kFragmentShaderFile[] = "../shaders/raycast.frag";


const int kVertexAttributeIdx = 0;
const int kNormalAttributeIdx = 1;

bool ReadFile(const std::string filename, std::string *shader_source) {
  std::ifstream infile(filename.c_str());

  if (!infile.is_open() || !infile.good()) {
    std::cerr << "Error " + filename + " not found." << std::endl;
    return false;
  }

  std::stringstream stream;
  stream << infile.rdbuf();
  infile.close();

  *shader_source = stream.str();
  return true;
}

}  // namespace

GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(parent), initialized_(false), width_(0.0), height_(0.0) {
  setFocusPolicy(Qt::StrongFocus);
  K = 100;
  numStep = 0;
  usePhong = 0;
  basicTF = 1;
  useHAS = 0;

   lightCol = Eigen::Vector3f( 1.0f, 1.0f, 1.0f );
   lightPos = Eigen::Vector3f( 0.0f, 1.0f, 0.0f );

}

GLWidget::~GLWidget() {}

bool GLWidget::LoadVolume(const QString &path) {
  std::unique_ptr<data_representation::Volume> vol =
      std::make_unique<data_representation::Volume>();

  if (data_representation::ReadFromDicom(path.toUtf8().constData(),
                                         vol.get())) {
    vol_.reset(vol.release());
    camera_.UpdateModel(cube_->min_, cube_->max_);

    // Simple transfer function texture
    texTF = vol_->GetTextureId() + 1;
    glGenTextures(1, &texTF);
    glBindTexture(GL_TEXTURE_1D, texTF);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glTexImage1D(GL_TEXTURE_1D, 0, GL_RGBA, vol_->histogram_.size(), 0, GL_RGBA, GL_FLOAT, &vol_->histogram_[0]);

    numStep = vol_->histogram_.size();

    return true;
  }

  return false;
}

std::vector< double >*  GLWidget::getHistogram()
{
    if (vol_ != nullptr)
        return & vol_->histogram_;
    return nullptr;
}

void GLWidget::initializeGL() {
  glewInit();

  glEnable(GL_NORMALIZE);
  glEnable(GL_CULL_FACE);
  glCullFace(GL_BACK);
  glEnable(GL_DEPTH_TEST);

  std::string vertex_shader, fragment_shader;
  bool res = ReadFile(kVertexShaderFile, &vertex_shader) &&
             ReadFile(kFragmentShaderFile, &fragment_shader);

  if (!res) exit(0);

  cube_ = std::make_unique<data_representation::Cube>();
  program_ = std::make_unique<QOpenGLShaderProgram>();
  program_->addShaderFromSourceCode(QOpenGLShader::Vertex,
                                    vertex_shader.c_str());
  program_->addShaderFromSourceCode(QOpenGLShader::Fragment,
                                    fragment_shader.c_str());
  program_->bindAttributeLocation("vertex", kVertexAttributeIdx);
  program_->bindAttributeLocation("normal", kNormalAttributeIdx);
  program_->link();

  initialized_ = true;
}

void GLWidget::resizeGL(int w, int h) {
  if (h == 0) h = 1;
  width_ = w;
  height_ = h;

  camera_.SetViewport(0, 0, w, h);
  camera_.SetProjection(kFieldOfView, kZNear, kZFar);
}

void GLWidget::mousePressEvent(QMouseEvent *event) {
  if (event->button() == Qt::LeftButton) {
    camera_.StartRotating(event->x(), event->y());
  }
  if (event->button() == Qt::RightButton) {
    camera_.StartZooming(event->x(), event->y());
  }
  updateGL();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event) {
  camera_.SetRotationX(event->y());
  camera_.SetRotationY(event->x());
  camera_.SafeZoom(event->y());
  updateGL();
}

void GLWidget::mouseReleaseEvent(QMouseEvent *event) {
  if (event->button() == Qt::LeftButton) {
    camera_.StopRotating(event->x(), event->y());
  }
  if (event->button() == Qt::RightButton) {
    camera_.StopZooming(event->x(), event->y());
  }
  updateGL();
}

void GLWidget::keyPressEvent(QKeyEvent *event) {
  if (event->key() == Qt::Key_Up) camera_.Zoom(-1);
  if (event->key() == Qt::Key_Down) camera_.Zoom(1);

  if (event->key() == Qt::Key_Left) camera_.Rotate(-1);
  if (event->key() == Qt::Key_Right) camera_.Rotate(1);

  if (event->key() == Qt::Key_W) camera_.Zoom(-1);
  if (event->key() == Qt::Key_S) camera_.Zoom(1);

  if (event->key() == Qt::Key_A) camera_.Rotate(-1);
  if (event->key() == Qt::Key_D) camera_.Rotate(1);

  if (event->key() == Qt::Key_R) {
    std::string vertex_shader, fragment_shader;
    bool res = ReadFile(kVertexShaderFile, &vertex_shader) &&
               ReadFile(kFragmentShaderFile, &fragment_shader);

    if (!res) exit(0);

    program_ = std::make_unique<QOpenGLShaderProgram>();
    program_->addShaderFromSourceCode(QOpenGLShader::Vertex,
                                      vertex_shader.c_str());
    program_->addShaderFromSourceCode(QOpenGLShader::Fragment,
                                      fragment_shader.c_str());
    program_->bindAttributeLocation("vertex", kVertexAttributeIdx);
    program_->bindAttributeLocation("normal", kNormalAttributeIdx);
    program_->link();
  }

  updateGL();
}

void GLWidget::paintGL() {
  glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  if (initialized_) {
    camera_.SetViewport();

    Eigen::Matrix4f projection = camera_.SetProjection();
    Eigen::Matrix4f view = camera_.SetView();
    Eigen::Matrix4f model = camera_.SetModel();

    program_->bind();
    GLuint projection_location = program_->uniformLocation("projection");
    glUniformMatrix4fv(projection_location, 1, GL_FALSE, projection.data());

    GLuint view_location = program_->uniformLocation("view");
    glUniformMatrix4fv(view_location, 1, GL_FALSE, view.data());

    GLuint model_location = program_->uniformLocation("model");
    glUniformMatrix4fv(model_location, 1, GL_FALSE, model.data());

    if (vol_ != nullptr) {
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_3D, vol_->GetTextureId());

        GLint volume = program_->uniformLocation("volume");
        glUniform1i(volume, 0);

        // Extra shader uniforms and textures ADD MORE IF NEEDED
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_1D, texTF);

        GLint transferFunc = program_->uniformLocation("transferFunc");
        glUniform1i(transferFunc, 1);


        glActiveTexture(GL_TEXTURE2);
        glBindTexture(GL_TEXTURE_1D, texTF);

        GLint transferFunc2 = program_->uniformLocation("transferFunc2");
        glUniform1i(transferFunc2, 2);

        GLint cam = program_->uniformLocation("cam");
        glUniform3f(cam, 0.0f, 0.0f, 0.0f);

        // Toggles
        GLint basicTF_ID = program_->uniformLocation("basicTF");
        glUniform1i(basicTF_ID, basicTF);
        GLint usePhongID = program_->uniformLocation("usePhong");
        glUniform1i(usePhongID, usePhong);
        GLint useHAS_ID = program_->uniformLocation("useHAS");
        glUniform1i(useHAS_ID, useHAS);

        GLint lPosID = program_->uniformLocation("lightPos");
        glUniform3f(lPosID, lightPos[0], lightPos[1], lightPos[2]);

        GLint lColID = program_->uniformLocation("lightCol");
        glUniform3f(lColID, lightCol[0], lightCol[1], lightCol[2]);

        // Alpha parameter
        GLint numkID = program_->uniformLocation("K");
        glUniform1f(numkID, float(K) / 1000.0f );

        if ( numStep == 0 ) numStep = 1;
        GLint numStepID = program_->uniformLocation( "ITER" );
        glUniform1f(numStepID, numStep * 1.732f);
    }

    cube_->Render();

    glDisable(GL_BLEND);
  }
}


void GLWidget::setNewHistogram( std::vector<double> &R, std::vector<double> &G, std::vector<double> &B )
{
    histoTF_R = R;
    histoTF_G = G;
    histoTF_B = B;

    std::vector< double > histoMerge( 4 * R.size() ); // RGBA
    for (int i = 0; i < R.size(); ++i)
    {
        histoMerge[ 4*i + 0 ] = R[i];
        histoMerge[ 4*i + 1 ] = G[i];
        histoMerge[ 4*i + 2 ] = B[i];
        histoMerge[ 4*i + 3 ] = 1.0;
    }



    texTF = vol_->GetTextureId() + 2;
    glGenTextures(2, &texTF);
    glBindTexture(GL_TEXTURE_1D, texTF);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_1D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

    glTexImage1D(GL_TEXTURE_1D, 0, GL_RGBA, histoMerge.size(), 0, GL_RGBA, GL_FLOAT, &histoMerge[0]);

}


// INTERACTION


void GLWidget::SetK(int val)
{
    K = val;
    updateGL();
}


void GLWidget::SetBasicTF(bool val)
{
    basicTF = val;
    updateGL();
}

void GLWidget::SetPhong(bool val)
{
    usePhong = val;
    updateGL();
}

void GLWidget::SetHAS(bool val)
{
    useHAS = val;
    updateGL();
}





void GLWidget::SetColourR(int val)
{
    lightCol[0] = (float)val / 255.0;
    updateGL();
}
void GLWidget::SetColourG(int val)
{
    lightCol[1] = (float)val / 255.0;
    updateGL();
}
void GLWidget::SetColourB(int val)
{
    lightCol[2] = (float)val / 255.0;
    updateGL();
}



void GLWidget::SetPosX(double val)
{
    lightPos[0] = val;
    updateGL();
}
void GLWidget::SetPosY(double val)
{
    lightPos[1] = val;
    updateGL();
}
void GLWidget::SetPosZ(double val)
{
    lightPos[2] = val;
    updateGL();
}
