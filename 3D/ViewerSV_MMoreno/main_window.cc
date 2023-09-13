// Author: Marc Comino 2018

#include <main_window.h>

#include <QFileDialog>
#include <QMessageBox>
#include <QWidget>
#include <QVBoxLayout>
#include <iostream>

#include "./ui_main_window.h"

namespace gui {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui_(new Ui::MainWindow) {
  ui_->setupUi(this);
  histogram = std::vector< double> ();

  QWidget* rHisto = new QWidget( parent );
  QWidget* gHisto = new QWidget( parent );
  QWidget* bHisto = new QWidget( parent );
  ui_->Configuration->addWidget( rHisto );
  ui_->Configuration->addWidget( gHisto );
  ui_->Configuration->addWidget( bHisto );


  // add base plots and histograms to attach to
  myPlot1 = new QwtPlot( rHisto );
  myPlot2 = new QwtPlot( gHisto );
  myPlot3 = new QwtPlot( bHisto );

  histoR = new QwtPlotHistogram( "Red" );
  histoG = new QwtPlotHistogram( "Green" );
  histoB = new QwtPlotHistogram( "Blue" );

  histoR->attach( myPlot1 );
  histoG->attach( myPlot2 );
  histoB->attach( myPlot3 );

  myPlot1->setFixedSize(330, 120);
  myPlot1->setAxisScale( 0,  0, 1);  // Y axis in [0 .. 1]
  myPlot1->setAxisScale( 2,  0, 0 ); // X axis in [0 .. |Histogram|]

  myPlot2->setFixedSize(330, 120);
  myPlot2->setAxisScale( 0,  0, 1);
  myPlot2->setAxisScale( 2,  0, 0 );

  myPlot3->setFixedSize(330, 120);
  myPlot3->setAxisScale( 0,  0, 1);
  myPlot3->setAxisScale( 2,  0, 0 );


  // finally, refresh the plot
  myPlot1->replot();
  myPlot2->replot();
  myPlot3->replot();
  myPlot1->setAutoReplot( true );
  myPlot2->setAutoReplot( true );
  myPlot3->setAutoReplot( true );
}

MainWindow::~MainWindow() { delete ui_; }

void MainWindow::show() {
    QMainWindow::show();
}

void MainWindow::on_actionQuit_triggered() { close(); }


void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // RED
        if (52 <= event->x() && event->x() <= 335  && 37 <= event->y()  && event->y() <= 119 )
        {
            int X    = ( double (event->x()) - 52.0 / (283.0) ) * histogram.size();
            double Y = ( double (event->y()) - 37.0 / ( 82.0) ) ;

            QwtPlotMarker* m = new QwtPlotMarker();
            m->setValue( QPointF( double(X), Y ) );
            m->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 10, 10 ) ) );
            m->attach( myPlot1 );
            setPointsR.insert( std::make_pair( X, Y ) );
        }

        // GREEN
        if (52 <= event->x() && event->x() <= 335  && 176 <= event->y()  && event->y() <= 258 )
        {
            int X    = ( double (event->x()) - 52.0 / (283.0) ) * histogram.size();
            double Y = ( double (event->y()) - 176.0 / ( 82.0) ) ;

            QwtPlotMarker* m = new QwtPlotMarker();
            m->setValue( QPointF( double(X), Y ) );
            m->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::green, Qt::NoPen, QSize( 10, 10 ) ) );
            m->attach( myPlot2 );
            setPointsG.insert( std::make_pair( X, Y ) );
        }

        // BLUE
        if (52 <= event->x() && event->x() <= 335  && 314 <= event->y()  && event->y() <= 396 )
        {
            int X    = ( double (event->x()) - 52.0 / (283.0) ) * histogram.size();
            double Y = ( double (event->y()) - 314.0 / ( 82.0) ) ;

            QwtPlotMarker* m = new QwtPlotMarker();
            m->setValue( QPointF( double(X), Y ) );
            m->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::blue, Qt::NoPen, QSize( 10, 10 ) ) );
            m->attach( myPlot3 );
            setPointsB.insert( std::make_pair( X, Y ) );
        }

        myPlot1->replot();
        myPlot2->replot();
        myPlot3->replot();
        setHistogramToWidget();
    }
}

void MainWindow::setHistogramToWidget()
{
    std::vector< double > R( histogram.size() - 2 );
    std::vector< double > G( histogram.size() - 2 );
    std::vector< double > B( histogram.size() - 2 );

    std::set< std::pair< int, double > >::iterator it1 = setPointsR.begin();
    std::set< std::pair< int, double > >::iterator it2 = ++it1;
    double step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first );
    double tmp = 0.0;
    for( int i = 0; i < R.size(); ++i )
    {
        R[i] = tmp;
        tmp += step;
        if ( i == (*it2).first )
        {
            it2 = ++it2;
            it1 = ++it1;
            step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first );
            tmp = 0.0;
        }
    }

    it1 = setPointsG.begin();
    it2 = ++it1;
     step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first );
     tmp = 0.0;
    for( int i = 0; i < G.size(); ++i )
    {
        G[i] = tmp;
        tmp += step;
        if ( i == (*it2).first )
        {
            it2 = ++it2;
            it1 = ++it1;
            step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first );
            tmp = 0.0;
        }
    }

    it1 = setPointsB.begin();
    it2 = ++it1;
     step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first ) ;
     tmp = 0.0;
    for( int i = 0; i < B.size(); ++i )
    {
        B[i] = tmp;
        tmp += step;
        if ( i == (*it2).first )
        {
            it2 = ++it2;
            it1 = ++it1;
            step = double( (*it1).second - (*it1).second ) / double( (*it2).first - (*it2).first );
            tmp = 0.0;
        }
    }



    ui_->glwidget->setNewHistogram( R, G, B );
}

void MainWindow::on_actionLoad_triggered() {
    QString filename = QFileDialog::getExistingDirectory(
        this, "Choose a directory.", ".", QFileDialog::Option::ShowDirsOnly);
    if (!filename.isNull()) {
        if (!ui_->glwidget->LoadVolume(filename)){
            QMessageBox::warning(this, tr("Error"), tr("The selected volume could not be opened."));
        }
        else
        {
           histogram = *ui_->glwidget->getHistogram();
           QVector< QwtIntervalSample > samples( histogram.size() - 2 );
           for (int i = 1; i < histogram.size() - 1; ++i)
           {
               samples[ i-1 ] = QwtIntervalSample( histogram[i], i-1, i );
           }
           histoR->setSamples( samples );
           histoG->setSamples( samples );
           histoB->setSamples( samples );


           QwtPlotMarker* mIni = new QwtPlotMarker();
           mIni->setValue( QPointF( 0, 0 ) );
           mIni->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 10, 10 ) ) );
           mIni->attach( myPlot1 );
           QwtPlotMarker* mEnd = new QwtPlotMarker();
           mEnd->setValue( QPointF( histogram.size() - 1, 1.0 ) );
           mEnd->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::red, Qt::NoPen, QSize( 10, 10 ) ) );
           mEnd->attach( myPlot1 );
           setPointsR.insert( std::make_pair( 0, 0.0 ) );
           setPointsR.insert( std::make_pair( histogram.size() - 1, 1.0 ) );

           mIni = new QwtPlotMarker();
           mIni->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::green, Qt::NoPen, QSize( 10, 10 ) ) );
           mIni->attach( myPlot2 );
           mEnd = new QwtPlotMarker();
           mEnd->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::green, Qt::NoPen, QSize( 10, 10 ) ) );
           mEnd->attach( myPlot2 );
           setPointsG.insert( std::make_pair( 0, 0.0 ) );
           setPointsG.insert( std::make_pair( histogram.size() - 1, 1.0 ) );

           mIni = new QwtPlotMarker();
           mIni->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::blue, Qt::NoPen, QSize( 10, 10 ) ) );
           mIni->attach( myPlot3 );
           mEnd = new QwtPlotMarker();
           mEnd->setSymbol( new QwtSymbol( QwtSymbol::Diamond, Qt::blue, Qt::NoPen, QSize( 10, 10 ) ) );
           mEnd->attach( myPlot3 );
           setPointsB.insert( std::make_pair( 0, 0.0 ) );
           setPointsB.insert( std::make_pair( histogram.size() - 1, 1.0 ) );

           myPlot1->setAxisScale( 2,  0, samples.size() );
           myPlot2->setAxisScale( 2,  0, samples.size() );
           myPlot3->setAxisScale( 2,  0, samples.size() );

           myPlot1->replot();
           myPlot2->replot();
           myPlot3->replot();
        }
  }
}

}  //  namespace gui
