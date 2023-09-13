/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionLoad;
    QWidget *Widget;
    GLWidget *glwidget;
    QGroupBox *TreeOptions;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_2;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_5;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QSlider *horizontalSlider_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_4;
    QCheckBox *checkBox_3;
    QSlider *horizontalSlider_4;
    QFrame *line;
    QCheckBox *checkBox;
    QLabel *label_6;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider;
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *Configuration;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1028, 700);
        MainWindow->setMinimumSize(QSize(827, 618));
        MainWindow->setBaseSize(QSize(600, 600));
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        Widget = new QWidget(MainWindow);
        Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setMinimumSize(QSize(827, 0));
        Widget->setBaseSize(QSize(600, 600));
        glwidget = new GLWidget(Widget);
        glwidget->setObjectName(QString::fromUtf8("glwidget"));
        glwidget->setGeometry(QRect(339, 10, 631, 661));
        glwidget->setMinimumSize(QSize(600, 600));
        glwidget->setMaximumSize(QSize(16777215, 16777215));
        glwidget->setBaseSize(QSize(600, 600));
        TreeOptions = new QGroupBox(Widget);
        TreeOptions->setObjectName(QString::fromUtf8("TreeOptions"));
        TreeOptions->setGeometry(QRect(10, 420, 330, 250));
        TreeOptions->setMinimumSize(QSize(330, 250));
        TreeOptions->setMaximumSize(QSize(330, 250));
        TreeOptions->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        gridLayout_3 = new QGridLayout(TreeOptions);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBox_2 = new QCheckBox(TreeOptions);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setLayoutDirection(Qt::LeftToRight);
        checkBox_2->setAutoRepeat(false);

        gridLayout_3->addWidget(checkBox_2, 9, 0, 1, 4);

        label_7 = new QLabel(TreeOptions);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 8, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(TreeOptions);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(-100.000000000000000);
        doubleSpinBox_2->setMaximum(100.000000000000000);
        doubleSpinBox_2->setSingleStep(0.010000000000000);
        doubleSpinBox_2->setValue(1.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_2, 8, 2, 1, 1);

        label_5 = new QLabel(TreeOptions);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 7, 0, 1, 1);

        label_3 = new QLabel(TreeOptions);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 5, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(TreeOptions);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(-100.000000000000000);
        doubleSpinBox->setMaximum(100.000000000000000);
        doubleSpinBox->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(doubleSpinBox, 8, 1, 1, 1);

        horizontalSlider_2 = new QSlider(TreeOptions);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(255);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_2, 5, 1, 1, 5);

        doubleSpinBox_3 = new QDoubleSpinBox(TreeOptions);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimum(-100.000000000000000);
        doubleSpinBox_3->setMaximum(100.000000000000000);
        doubleSpinBox_3->setSingleStep(0.010000000000000);

        gridLayout_3->addWidget(doubleSpinBox_3, 8, 4, 1, 1);

        label_4 = new QLabel(TreeOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 6, 0, 1, 1);

        checkBox_3 = new QCheckBox(TreeOptions);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setLayoutDirection(Qt::LeftToRight);
        checkBox_3->setChecked(true);
        checkBox_3->setAutoRepeat(false);

        gridLayout_3->addWidget(checkBox_3, 0, 0, 1, 2);

        horizontalSlider_4 = new QSlider(TreeOptions);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setMinimum(0);
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setPageStep(11);
        horizontalSlider_4->setValue(255);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_4, 7, 1, 1, 5);

        line = new QFrame(TreeOptions);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 2, 0, 1, 6);

        checkBox = new QCheckBox(TreeOptions);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setLayoutDirection(Qt::LeftToRight);
        checkBox->setAutoRepeat(false);

        gridLayout_3->addWidget(checkBox, 3, 0, 1, 5);

        label_6 = new QLabel(TreeOptions);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);

        gridLayout_3->addWidget(label_6, 4, 0, 1, 6);

        horizontalSlider_3 = new QSlider(TreeOptions);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setValue(255);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_3, 6, 1, 1, 5);

        horizontalSlider = new QSlider(TreeOptions);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(1000);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 0, 3, 1, 3);

        label_8 = new QLabel(TreeOptions);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 331, 411));
        Configuration = new QVBoxLayout(widget);
        Configuration->setSpacing(6);
        Configuration->setContentsMargins(11, 11, 11, 11);
        Configuration->setObjectName(QString::fromUtf8("Configuration"));
        Configuration->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(Widget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1028, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        menuFile->addAction(actionLoad);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), glwidget, SLOT(SetColourR(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), glwidget, SLOT(SetBasicTF(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), glwidget, SLOT(SetColourG(int)));
        QObject::connect(doubleSpinBox_3, SIGNAL(valueChanged(double)), glwidget, SLOT(SetPosZ(double)));
        QObject::connect(doubleSpinBox, SIGNAL(valueChanged(double)), glwidget, SLOT(SetPosX(double)));
        QObject::connect(doubleSpinBox_2, SIGNAL(valueChanged(double)), glwidget, SLOT(SetPosY(double)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), glwidget, SLOT(SetHAS(bool)));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), glwidget, SLOT(SetPhong(bool)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), glwidget, SLOT(SetColourB(int)));
        QObject::connect(checkBox_3, SIGNAL(toggled(bool)), glwidget, SLOT(SetTF(bool)));
        QObject::connect(checkBox_3, SIGNAL(toggled(bool)), glwidget, SLOT(SetBasicTF(bool)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), glwidget, SLOT(SetK(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionLoad->setText(QApplication::translate("MainWindow", "Load Texture Set Folder", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLoad->setToolTip(QApplication::translate("MainWindow", "Load a Folder containing a set of Textures, such as DICOM formatted ones", nullptr));
#endif // QT_NO_TOOLTIP
        TreeOptions->setTitle(QApplication::translate("MainWindow", "Options", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Use Half-Angle Slicing", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Pos.", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Red", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Green", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Use Basic T.F.", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Use Phong shading", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Light properties:", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Alpha", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
