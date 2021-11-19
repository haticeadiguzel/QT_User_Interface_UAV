#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_doubleSpinBoxAirSpeed_valueChanged(double arg1);

    void on_doubleSpinBoxPitch_valueChanged(double arg1);

    void on_doubleSpinBoxRoll_valueChanged(double arg1);

    void on_doubleSpinBoxAltitude_valueChanged(double arg1);

    void on_doubleSpinBoxSetTurnRate_valueChanged(double arg1);

    void on_doubleSpinBoxSetSlidSkip_valueChanged(double arg1);

    void on_doubleSpinBoxYaw_valueChanged(double arg1);

    void on_doubleSpinBoxClimbRate_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
