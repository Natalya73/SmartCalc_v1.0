/// \file
#ifndef FORM_CREDIT_CALC_H
#define FORM_CREDIT_CALC_H

#include <QWidget>
//#include "mainwindow.h"


#ifdef __cplusplus
extern "C" {
#endif
#include "../../Smart_calc.h"
#ifdef __cplusplus
}
#endif


namespace Ui {
class Form_Credit_Calc;
}

class Form_Credit_Calc : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Credit_Calc(QWidget *parent = nullptr);
    ~Form_Credit_Calc();

private:
    Ui::Form_Credit_Calc *ui;

 private slots:

    void CALCULATE_pressed();
};

#endif // FORM_CREDIT_CALC_H
