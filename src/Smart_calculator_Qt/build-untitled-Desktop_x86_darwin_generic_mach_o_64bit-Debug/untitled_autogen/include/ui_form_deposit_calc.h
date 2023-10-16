/********************************************************************************
** Form generated from reading UI file 'form_deposit_calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_DEPOSIT_CALC_H
#define UI_FORM_DEPOSIT_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_form_deposit_calc
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *CapitalizationEndOfTerm;
    QDoubleSpinBox *Placements_2;
    QLabel *labelWithdrawals;
    QLabel *label_3;
    QLineEdit *TaxAmount;
    QComboBox *ComboboxPlacements;
    QLineEdit *DepositClosingAmount;
    QRadioButton *CapitalizationQuarter;
    QLabel *DepoCloseAmount;
    QLabel *label;
    QLabel *LabelPlacements;
    QLabel *label_5;
    QComboBox *Payment_frequency;
    QLabel *TotalInterests;
    QLabel *Tax_Amount;
    QPushButton *CALCULATE;
    QLabel *label_4;
    QRadioButton *CapitalizationMonth;
    QLineEdit *AccruedInterests;
    QLabel *label_2;
    QComboBox *comboBoxWithdrawals;
    QRadioButton *CapitalizationHalfYear;
    QLabel *Capitalization;
    QDoubleSpinBox *Withdrawals_2;
    QDoubleSpinBox *Tax_rate_2;
    QDoubleSpinBox *Deposit_percent_2;
    QSpinBox *Deposit_term_2;
    QDoubleSpinBox *Deposit_amount_2;

    void setupUi(QWidget *form_deposit_calc)
    {
        if (form_deposit_calc->objectName().isEmpty())
            form_deposit_calc->setObjectName(QString::fromUtf8("form_deposit_calc"));
        form_deposit_calc->resize(588, 631);
        form_deposit_calc->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: white;;\n"
"}\n"
"QWidget  {\n"
"	background-color: blue;\n"
"}\n"
"QDoubleSpinBox {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: white;;\n"
"}\n"
"QSpinBox {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: white;;\n"
"}"));
        layoutWidget = new QWidget(form_deposit_calc);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 532, 561));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        CapitalizationEndOfTerm = new QRadioButton(layoutWidget);
        CapitalizationEndOfTerm->setObjectName(QString::fromUtf8("CapitalizationEndOfTerm"));

        gridLayout->addWidget(CapitalizationEndOfTerm, 8, 2, 1, 2);

        Placements_2 = new QDoubleSpinBox(layoutWidget);
        Placements_2->setObjectName(QString::fromUtf8("Placements_2"));
        Placements_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Placements_2->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(Placements_2, 10, 3, 1, 1);

        labelWithdrawals = new QLabel(layoutWidget);
        labelWithdrawals->setObjectName(QString::fromUtf8("labelWithdrawals"));

        gridLayout->addWidget(labelWithdrawals, 11, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        TaxAmount = new QLineEdit(layoutWidget);
        TaxAmount->setObjectName(QString::fromUtf8("TaxAmount"));
        TaxAmount->setEnabled(false);
        TaxAmount->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        TaxAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(TaxAmount, 16, 3, 1, 1);

        ComboboxPlacements = new QComboBox(layoutWidget);
        ComboboxPlacements->addItem(QString());
        ComboboxPlacements->addItem(QString());
        ComboboxPlacements->addItem(QString());
        ComboboxPlacements->addItem(QString());
        ComboboxPlacements->setObjectName(QString::fromUtf8("ComboboxPlacements"));

        gridLayout->addWidget(ComboboxPlacements, 9, 3, 1, 1);

        DepositClosingAmount = new QLineEdit(layoutWidget);
        DepositClosingAmount->setObjectName(QString::fromUtf8("DepositClosingAmount"));
        DepositClosingAmount->setEnabled(false);
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
        DepositClosingAmount->setPalette(palette);
        DepositClosingAmount->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        DepositClosingAmount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(DepositClosingAmount, 17, 3, 1, 1);

        CapitalizationQuarter = new QRadioButton(layoutWidget);
        CapitalizationQuarter->setObjectName(QString::fromUtf8("CapitalizationQuarter"));

        gridLayout->addWidget(CapitalizationQuarter, 6, 2, 1, 2);

        DepoCloseAmount = new QLabel(layoutWidget);
        DepoCloseAmount->setObjectName(QString::fromUtf8("DepoCloseAmount"));
        QFont font;
        font.setPointSize(18);
        DepoCloseAmount->setFont(font);
        DepoCloseAmount->setTextFormat(Qt::PlainText);
        DepoCloseAmount->setAlignment(Qt::AlignJustify|Qt::AlignTop);

        gridLayout->addWidget(DepoCloseAmount, 17, 0, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        LabelPlacements = new QLabel(layoutWidget);
        LabelPlacements->setObjectName(QString::fromUtf8("LabelPlacements"));

        gridLayout->addWidget(LabelPlacements, 9, 0, 1, 2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 2);

        Payment_frequency = new QComboBox(layoutWidget);
        Payment_frequency->addItem(QString());
        Payment_frequency->addItem(QString());
        Payment_frequency->setObjectName(QString::fromUtf8("Payment_frequency"));
        Payment_frequency->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	Background: green;\n"
"	border: 1px green;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(Payment_frequency, 4, 3, 1, 1);

        TotalInterests = new QLabel(layoutWidget);
        TotalInterests->setObjectName(QString::fromUtf8("TotalInterests"));
        TotalInterests->setFont(font);

        gridLayout->addWidget(TotalInterests, 15, 0, 1, 2);

        Tax_Amount = new QLabel(layoutWidget);
        Tax_Amount->setObjectName(QString::fromUtf8("Tax_Amount"));
        Tax_Amount->setFont(font);

        gridLayout->addWidget(Tax_Amount, 16, 0, 1, 2);

        CALCULATE = new QPushButton(layoutWidget);
        CALCULATE->setObjectName(QString::fromUtf8("CALCULATE"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(24);
        CALCULATE->setFont(font1);
        CALCULATE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #006400;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #008000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(CALCULATE, 14, 1, 1, 3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 2);

        CapitalizationMonth = new QRadioButton(layoutWidget);
        CapitalizationMonth->setObjectName(QString::fromUtf8("CapitalizationMonth"));

        gridLayout->addWidget(CapitalizationMonth, 5, 2, 1, 2);

        AccruedInterests = new QLineEdit(layoutWidget);
        AccruedInterests->setObjectName(QString::fromUtf8("AccruedInterests"));
        AccruedInterests->setEnabled(false);
        AccruedInterests->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        AccruedInterests->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(AccruedInterests, 15, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        comboBoxWithdrawals = new QComboBox(layoutWidget);
        comboBoxWithdrawals->addItem(QString());
        comboBoxWithdrawals->addItem(QString());
        comboBoxWithdrawals->addItem(QString());
        comboBoxWithdrawals->addItem(QString());
        comboBoxWithdrawals->setObjectName(QString::fromUtf8("comboBoxWithdrawals"));
        comboBoxWithdrawals->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	Background: green;\n"
"	border: 1px green;\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(comboBoxWithdrawals, 11, 3, 1, 1);

        CapitalizationHalfYear = new QRadioButton(layoutWidget);
        CapitalizationHalfYear->setObjectName(QString::fromUtf8("CapitalizationHalfYear"));

        gridLayout->addWidget(CapitalizationHalfYear, 7, 2, 1, 2);

        Capitalization = new QLabel(layoutWidget);
        Capitalization->setObjectName(QString::fromUtf8("Capitalization"));

        gridLayout->addWidget(Capitalization, 5, 0, 1, 2);

        Withdrawals_2 = new QDoubleSpinBox(layoutWidget);
        Withdrawals_2->setObjectName(QString::fromUtf8("Withdrawals_2"));
        Withdrawals_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Withdrawals_2->setMaximum(1000000.000000000000000);

        gridLayout->addWidget(Withdrawals_2, 12, 3, 1, 1);

        Tax_rate_2 = new QDoubleSpinBox(layoutWidget);
        Tax_rate_2->setObjectName(QString::fromUtf8("Tax_rate_2"));
        Tax_rate_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Tax_rate_2->setMaximum(100.000000000000000);

        gridLayout->addWidget(Tax_rate_2, 3, 3, 1, 1);

        Deposit_percent_2 = new QDoubleSpinBox(layoutWidget);
        Deposit_percent_2->setObjectName(QString::fromUtf8("Deposit_percent_2"));
        Deposit_percent_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Deposit_percent_2->setMaximum(999.000000000000000);

        gridLayout->addWidget(Deposit_percent_2, 2, 3, 1, 1);

        Deposit_term_2 = new QSpinBox(layoutWidget);
        Deposit_term_2->setObjectName(QString::fromUtf8("Deposit_term_2"));
        Deposit_term_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Deposit_term_2->setMaximum(600);

        gridLayout->addWidget(Deposit_term_2, 1, 3, 1, 1);

        Deposit_amount_2 = new QDoubleSpinBox(layoutWidget);
        Deposit_amount_2->setObjectName(QString::fromUtf8("Deposit_amount_2"));
        Deposit_amount_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Deposit_amount_2->setMaximum(90000000.000000000000000);

        gridLayout->addWidget(Deposit_amount_2, 0, 3, 1, 1);


        retranslateUi(form_deposit_calc);

        QMetaObject::connectSlotsByName(form_deposit_calc);
    } // setupUi

    void retranslateUi(QWidget *form_deposit_calc)
    {
        form_deposit_calc->setWindowTitle(QCoreApplication::translate("form_deposit_calc", "Form", nullptr));
        CapitalizationEndOfTerm->setText(QCoreApplication::translate("form_deposit_calc", "end of term", nullptr));
        labelWithdrawals->setText(QCoreApplication::translate("form_deposit_calc", "Withdrawals:", nullptr));
        label_3->setText(QCoreApplication::translate("form_deposit_calc", "Deposit percent:", nullptr));
        ComboboxPlacements->setItemText(0, QCoreApplication::translate("form_deposit_calc", "monthly", nullptr));
        ComboboxPlacements->setItemText(1, QCoreApplication::translate("form_deposit_calc", "quarterly", nullptr));
        ComboboxPlacements->setItemText(2, QCoreApplication::translate("form_deposit_calc", "once in 6 months", nullptr));
        ComboboxPlacements->setItemText(3, QCoreApplication::translate("form_deposit_calc", "yearly", nullptr));

        ComboboxPlacements->setStyleSheet(QCoreApplication::translate("form_deposit_calc", "QComboBox{\n"
"	Background: green;\n"
"	border: 1px green;\n"
"}\n"
"\n"
"", nullptr));
        CapitalizationQuarter->setText(QCoreApplication::translate("form_deposit_calc", "quarterly", nullptr));
        DepoCloseAmount->setText(QCoreApplication::translate("form_deposit_calc", "Deposit closing amount: ", nullptr));
        label->setText(QCoreApplication::translate("form_deposit_calc", "Deposit amount:", nullptr));
        LabelPlacements->setText(QCoreApplication::translate("form_deposit_calc", "Placements:", nullptr));
        label_5->setText(QCoreApplication::translate("form_deposit_calc", "Payment frequency:", nullptr));
        Payment_frequency->setItemText(0, QCoreApplication::translate("form_deposit_calc", "Monthly", nullptr));
        Payment_frequency->setItemText(1, QCoreApplication::translate("form_deposit_calc", "End of term", nullptr));

        TotalInterests->setText(QCoreApplication::translate("form_deposit_calc", "Accumulated interests:", nullptr));
        Tax_Amount->setText(QCoreApplication::translate("form_deposit_calc", "Tax amount:", nullptr));
        CALCULATE->setText(QCoreApplication::translate("form_deposit_calc", "CALCULATE", nullptr));
        label_4->setText(QCoreApplication::translate("form_deposit_calc", "Tax rate:", nullptr));
        CapitalizationMonth->setText(QCoreApplication::translate("form_deposit_calc", "monthly", nullptr));
        label_2->setText(QCoreApplication::translate("form_deposit_calc", "Deposit term:", nullptr));
        comboBoxWithdrawals->setItemText(0, QCoreApplication::translate("form_deposit_calc", "monthly", nullptr));
        comboBoxWithdrawals->setItemText(1, QCoreApplication::translate("form_deposit_calc", "quarterly", nullptr));
        comboBoxWithdrawals->setItemText(2, QCoreApplication::translate("form_deposit_calc", "once  in 6 months", nullptr));
        comboBoxWithdrawals->setItemText(3, QCoreApplication::translate("form_deposit_calc", "yearly", nullptr));

        CapitalizationHalfYear->setText(QCoreApplication::translate("form_deposit_calc", "half a year", nullptr));
        Capitalization->setText(QCoreApplication::translate("form_deposit_calc", "Capitalization: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_deposit_calc: public Ui_form_deposit_calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_DEPOSIT_CALC_H
