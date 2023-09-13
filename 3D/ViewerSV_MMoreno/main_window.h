// Author: Marc Comino 2019

#ifndef MAIN_WINDOW_H_
#define MAIN_WINDOW_H_

#include <QMainWindow>
#include <QMouseEvent>

#include <qwt/qwt.h>
#include <set>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_marker.h>
#include <qwt_symbol.h>
#include <qwt_legend.h>
#include <qwt/qwt_plot_histogram.h>

namespace Ui {
class MainWindow;
}

namespace gui {

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  virtual void show();

 private slots:
  /**
   * @brief on_actionQuit_triggered Closes the application.
   */
  void on_actionQuit_triggered();

  /**
   * @brief on_actionLoad_triggered Opens a file dialog to load a PLY mesh.
   */
  void on_actionLoad_triggered();

 private:
  void mousePressEvent(QMouseEvent *event);
  void setHistogramToWidget();

  Ui::MainWindow *ui_;

  // Histogram data
  QwtPlot *myPlot1;          // container
  QwtPlot *myPlot2;          // container
  QwtPlot *myPlot3;          // container

  QwtPlotHistogram *histoR; // Histogram: 1 per colour
  QwtPlotHistogram *histoG;
  QwtPlotHistogram *histoB;

  // Pair = < Xpos, Yval >
  std::set< std::pair< int, double > > setPointsR;
  std::set< std::pair< int, double > > setPointsG;
  std::set< std::pair< int, double > > setPointsB;

  std::vector< double > histogram;

  QMouseEvent *qme;


};

}  //  namespace gui

#endif  //  MAIN_WINDOW_H_
