/********************************************************************************
** Form generated from reading UI file 'form_credit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CREDIT_CALC_H
#define UI_FORM_CREDIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Credit_Calc
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QRadioButton *Annuity;
    QRadioButton *Differential;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *CALCULATE;
    QLineEdit *Calc_option;
    QLineEdit *Monthly_pay_first;
    QLineEdit *Overpay;
    QLineEdit *Total_Repay;
    QLineEdit *Monthly_pay_last;
    QDoubleSpinBox *Credit_amount_2;
    QSpinBox *Credit_term_2;
    QDoubleSpinBox *Credit_rate_2;

    void setupUi(QWidget *Form_Credit_Calc)
    {
        if (Form_Credit_Calc->objectName().isEmpty())
            Form_Credit_Calc->setObjectName(QString::fromUtf8("Form_Credit_Calc"));
        Form_Credit_Calc->resize(737, 821);
        Form_Credit_Calc->setStyleSheet(QString::fromUtf8("background: grey"));
        label = new QLabel(Form_Credit_Calc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 221, 52));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(Form_Credit_Calc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 110, 191, 41));
        label_2->setFont(font);
        label_3 = new QLabel(Form_Credit_Calc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 190, 191, 31));
        label_3->setFont(font);
        label_4 = new QLabel(Form_Credit_Calc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 270, 181, 31));
        label_4->setFont(font);
        label_5 = new QLabel(Form_Credit_Calc);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 350, 161, 41));
        label_5->setFont(font);
        Annuity = new QRadioButton(Form_Credit_Calc);
        Annuity->setObjectName(QString::fromUtf8("Annuity"));
        Annuity->setGeometry(QRect(360, 360, 99, 20));
        Differential = new QRadioButton(Form_Credit_Calc);
        Differential->setObjectName(QString::fromUtf8("Differential"));
        Differential->setGeometry(QRect(360, 440, 99, 20));
        label_6 = new QLabel(Form_Credit_Calc);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 550, 201, 31));
        label_6->setFont(font);
        label_7 = new QLabel(Form_Credit_Calc);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 630, 131, 31));
        label_7->setFont(font);
        label_8 = new QLabel(Form_Credit_Calc);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 740, 191, 51));
        label_8->setFont(font);
        CALCULATE = new QPushButton(Form_Credit_Calc);
        CALCULATE->setObjectName(QString::fromUtf8("CALCULATE"));
        CALCULATE->setGeometry(QRect(360, 480, 331, 51));
        QFont font1;
        font1.setPointSize(18);
        CALCULATE->setFont(font1);
        CALCULATE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #4682B4;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #1E90FF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Calc_option = new QLineEdit(Form_Credit_Calc);
        Calc_option->setObjectName(QString::fromUtf8("Calc_option"));
        Calc_option->setGeometry(QRect(360, 30, 331, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(128, 128, 128, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        Calc_option->setPalette(palette);
        QFont font2;
        font2.setPointSize(24);
        Calc_option->setFont(font2);
        Calc_option->setStyleSheet(QString::fromUtf8("background: grey"));
        Calc_option->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Monthly_pay_first = new QLineEdit(Form_Credit_Calc);
        Monthly_pay_first->setObjectName(QString::fromUtf8("Monthly_pay_first"));
        Monthly_pay_first->setEnabled(false);
        Monthly_pay_first->setGeometry(QRect(360, 550, 151, 41));
        Monthly_pay_first->setFont(font2);
        Monthly_pay_first->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color:  blue\n"
"}"));
        Monthly_pay_first->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Overpay = new QLineEdit(Form_Credit_Calc);
        Overpay->setObjectName(QString::fromUtf8("Overpay"));
        Overpay->setEnabled(false);
        Overpay->setGeometry(QRect(360, 620, 331, 41));
        Overpay->setFont(font2);
        Overpay->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        Overpay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Total_Repay = new QLineEdit(Form_Credit_Calc);
        Total_Repay->setObjectName(QString::fromUtf8("Total_Repay"));
        Total_Repay->setEnabled(false);
        Total_Repay->setGeometry(QRect(360, 740, 331, 41));
        Total_Repay->setFont(font2);
        Total_Repay->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        Total_Repay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Monthly_pay_last = new QLineEdit(Form_Credit_Calc);
        Monthly_pay_last->setObjectName(QString::fromUtf8("Monthly_pay_last"));
        Monthly_pay_last->setEnabled(false);
        Monthly_pay_last->setGeometry(QRect(540, 550, 151, 41));
        Monthly_pay_last->setFont(font2);
        Monthly_pay_last->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Credit_amount_2 = new QDoubleSpinBox(Form_Credit_Calc);
        Credit_amount_2->setObjectName(QString::fromUtf8("Credit_amount_2"));
        Credit_amount_2->setGeometry(QRect(360, 120, 331, 41));
        Credit_amount_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Credit_amount_2->setMaximum(900000000.000000000000000);
        Credit_term_2 = new QSpinBox(Form_Credit_Calc);
        Credit_term_2->setObjectName(QString::fromUtf8("Credit_term_2"));
        Credit_term_2->setGeometry(QRect(360, 190, 331, 41));
        Credit_term_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Credit_term_2->setMaximum(600);
        Credit_rate_2 = new QDoubleSpinBox(Form_Credit_Calc);
        Credit_rate_2->setObjectName(QString::fromUtf8("Credit_rate_2"));
        Credit_rate_2->setGeometry(QRect(360, 270, 331, 41));
        Credit_rate_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Credit_rate_2->setMaximum(100.000000000000000);

        retranslateUi(Form_Credit_Calc);

        QMetaObject::connectSlotsByName(Form_Credit_Calc);
    } // setupUi

    void retranslateUi(QWidget *Form_Credit_Calc)
    {
        Form_Credit_Calc->setWindowTitle(QCoreApplication::translate("Form_Credit_Calc", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form_Credit_Calc", "Calculation option:", nullptr));
        label_2->setText(QCoreApplication::translate("Form_Credit_Calc", "Credit amount:", nullptr));
        label_3->setText(QCoreApplication::translate("Form_Credit_Calc", "Credit term:", nullptr));
        label_4->setText(QCoreApplication::translate("Form_Credit_Calc", "Credit rate: ", nullptr));
        label_5->setText(QCoreApplication::translate("Form_Credit_Calc", "Payments:", nullptr));
        Annuity->setText(QCoreApplication::translate("Form_Credit_Calc", "Annuity", nullptr));
        Differential->setText(QCoreApplication::translate("Form_Credit_Calc", "Differential", nullptr));
        label_6->setText(QCoreApplication::translate("Form_Credit_Calc", "Monthly payment:", nullptr));
        label_7->setText(QCoreApplication::translate("Form_Credit_Calc", "Overpay:", nullptr));
        label_8->setText(QCoreApplication::translate("Form_Credit_Calc", "Total repayment:", nullptr));
        CALCULATE->setText(QCoreApplication::translate("Form_Credit_Calc", "CALCULATE", nullptr));
        Calc_option->setText(QCoreApplication::translate("Form_Credit_Calc", "MONTHLY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_Credit_Calc: public Ui_Form_Credit_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CREDIT_CALC_H
