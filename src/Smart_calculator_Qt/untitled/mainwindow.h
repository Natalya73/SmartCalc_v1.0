/// \file
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpression>
 #include <QByteArray>
#include <QDoubleSpinBox>
#include <QtMath>
#include <iostream>
#include <stdbool.h>
#include "form_credit_calc.h"
#include "form_deposit_calc.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#ifdef __cplusplus
extern "C" {
#endif
#include "../../Smart_calc.h"
#ifdef __cplusplus
}
#endif



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Form_Credit_Calc form_credit_calc;
    form_deposit_calc form_deposit_calc;  //создали объект только что подключенного класса
//    QVector<double> x,y;

private slots: // we define our slots that will be executed whenever a signal is submitted
    void NumPressed(); // if any of my number buttons are ever pressed the function NumPressed is gonna be called and executed
    void EqualButton();       //
    void ChangeNumberSign();   //
    void Clear();
    void BackSpace();
    void on_Graph_clicked();
//    void on_pushButton_6_clicked();
    void on_Credit_clicked();
    void on_pushButton_3_clicked();
};
#endif // MAINWINDOW_H
