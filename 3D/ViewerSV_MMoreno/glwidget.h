// Author: Marc Comino 2019

#ifndef GLWIDGET_H_
#define GLWIDGET_H_

#include <GL/glew.h>
#include <QGLWidget>
#include <QWidget>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include <QString>

#include <qwt/qwt.h>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_legend.h>
#include <qwt/qwt_plot_histogram.h>

#include <memory>

#include "./camera.h"
#include "./cube.h"
#include "./volume.h"

class GLWidget : public QGLWidget {
  Q_OBJECT

 public:
  explicit GLWidget(QWidget *parent = 0);
  ~GLWidget();

  /**
   * @brief LoadVolume Loads a volume model from the input path.
   * @param filename Path to the stack of images composing the volume model.
   * @return Whether it was able to load the volume.
   */
  bool LoadVolume(const QString &filename);
  std::vector< double > * getHistogram();
  void setNewHistogram( std::vector<double> &R, std::vector<double> &G, std::vector<double> &B );

 protected:
  /**
   * @brief initializeGL Initializes OpenGL variables and loads, compiles and
   * links shaders.
   */
  void initializeGL();

  /**
   * @brief resizeGL Resizes the viewport.
   * @param w New viewport width.
   * @param h New viewport height.
   */
  void resizeGL(int w, int h);

  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void mouseReleaseEvent(QMouseEvent *event);
  void keyPressEvent(QKeyEvent *event);


 private:
  /**
   * @brief program_ A basic shader program.
   */
  std::unique_ptr<QOpenGLShaderProgram> program_;

  /**
   * @brief camera_ Class that computes the multiple camera transform matrices.
   */
  data_visualization::Camera camera_;

  /**
   * @brief cube_ A cubic mesh used to render the colume.
   */
  std::unique_ptr<data_representation::Cube> cube_;

  /**
   * @brief mesh_ Data structure representing a volume.
   */
  std::unique_ptr<data_representation::Volume> vol_;

  /**
   * @brief texTF Index of the Transfer Function texture (basic version).
   */
  GLuint texTF;

  /**
   * @brief initialized_ Whether the widget has finished initializations.
   */
  bool initialized_;

  /**
   * @brief width_ Viewport current width.
   */
  float width_;

  /**
   * @brief height_ Viewport current height.
   */
  float height_;

// Interactive data
  int K;
  float numStep;
  Eigen::Vector3f lightCol;
  Eigen::Vector3f lightPos;
  int usePhong;
  int basicTF;
  int useHAS; // Half angle slicing
  std::vector< double > histoTF_R;
  std::vector< double > histoTF_G;
  std::vector< double > histoTF_B;

 protected slots:
  /**
   * @brief paintGL Function that handles rendering the scene.
   */
  void paintGL();

  void SetK(int val);
  void SetBasicTF(bool val);
  void SetPhong(bool val);
  void SetHAS(bool val);

  void SetColourR(int val);
  void SetColourG(int val);
  void SetColourB(int val);

  void SetPosX(double val);
  void SetPosY(double val);
  void SetPosZ(double val);
};

#endif  //  GLWIDGET_H_
