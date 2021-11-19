#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_doubleSpinBoxAirSpeed_valueChanged(double arg1)
{
    ui -> graphicsASI -> setAirspeed(arg1);
    ui -> graphicsASI -> redraw();
}


void MainWindow::on_doubleSpinBoxPitch_valueChanged(double arg1)
{
    ui -> graphicsAI -> setPitch(arg1);
    ui -> graphicsAI -> redraw();
}


void MainWindow::on_doubleSpinBoxRoll_valueChanged(double arg1)
{
    ui -> graphicsAI -> setRoll(arg1);
    ui -> graphicsAI -> redraw();
}


void MainWindow::on_doubleSpinBoxAltitude_valueChanged(double arg1)
{
    ui -> graphicsALT -> setAltitude(arg1);
    ui -> graphicsALT -> redraw();
}


void MainWindow::on_doubleSpinBoxSetTurnRate_valueChanged(double arg1)
{
    ui -> graphicsTC -> setTurnRate(arg1);
    ui -> graphicsTC -> redraw();
}


void MainWindow::on_doubleSpinBoxSetSlidSkip_valueChanged(double arg1)
{
    ui -> graphicsTC -> setSlipSkid(arg1);
    ui -> graphicsTC -> redraw();
}


void MainWindow::on_doubleSpinBoxYaw_valueChanged(double arg1)
{
    ui -> graphicsHI -> setHeading(arg1);
    ui -> graphicsHI -> redraw();
}


void MainWindow::on_doubleSpinBoxClimbRate_valueChanged(double arg1)
{
    ui -> graphicsVSI -> setClimbRate(arg1);
    ui -> graphicsVSI -> redraw();
}

