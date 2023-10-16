/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button8;
    QLineEdit *Display;
    QPushButton *Button6;
    QPushButton *Modulo;
    QPushButton *EnterX;
    QPushButton *BackSpace;
    QPushButton *Button2;
    QPushButton *Sinus;
    QPushButton *Name_to_XMIN;
    QPushButton *Clear;
    QPushButton *Ln;
    QPushButton *Logarithm;
    QPushButton *Cosinus;
    QPushButton *ButtonAdd;
    QPushButton *CloseBracket;
    QPushButton *pushButton_3;
    QLineEdit *X_MIN;
    QPushButton *Button0;
    QPushButton *ButtonDot;
    QPushButton *Button3;
    QLineEdit *X_MAX;
    QPushButton *X_button;
    QPushButton *Button9;
    QPushButton *Subtract;
    QPushButton *Divide;
    QLineEdit *ValueX_2;
    QPushButton *Equals;
    QPushButton *Button5;
    QPushButton *ChangeSign;
    QCustomPlot *FieldForGraph;
    QLineEdit *Step_2;
    QPushButton *Credit;
    QPushButton *ButtonACOS;
    QPushButton *Tangence;
    QPushButton *Name_to_YMIN;
    QPushButton *Button1;
    QPushButton *Name_to_YMAX;
    QLabel *Y_MAX;
    QPushButton *Name_to_XMAX;
    QPushButton *Multiply;
    QPushButton *ButtonATAN;
    QPushButton *Button7;
    QPushButton *ButtonAsin;
    QLabel *Result;
    QPushButton *OpenBracket;
    QPushButton *SquareRoot;
    QPushButton *Button4;
    QPushButton *Step;
    QLineEdit *Y_MIN;
    QPushButton *Power;
    QLineEdit *Y_MAX_2;
    QPushButton *Graph;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(921, 944);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(2);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(24);
        font.setBold(false);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        Display->setMaxLength(255);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Modulo = new QPushButton(centralwidget);
        Modulo->setObjectName(QString::fromUtf8("Modulo"));
        sizePolicy.setHeightForWidth(Modulo->sizePolicy().hasHeightForWidth());
        Modulo->setSizePolicy(sizePolicy);
        Modulo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Modulo, 4, 3, 1, 1);

        EnterX = new QPushButton(centralwidget);
        EnterX->setObjectName(QString::fromUtf8("EnterX"));
        EnterX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(EnterX, 10, 3, 1, 1);

        BackSpace = new QPushButton(centralwidget);
        BackSpace->setObjectName(QString::fromUtf8("BackSpace"));
        BackSpace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A52A2A;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(BackSpace, 5, 0, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Sinus = new QPushButton(centralwidget);
        Sinus->setObjectName(QString::fromUtf8("Sinus"));
        sizePolicy.setHeightForWidth(Sinus->sizePolicy().hasHeightForWidth());
        Sinus->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(false);
        Sinus->setFont(font1);
        Sinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Sinus, 7, 1, 1, 1);

        Name_to_XMIN = new QPushButton(centralwidget);
        Name_to_XMIN->setObjectName(QString::fromUtf8("Name_to_XMIN"));
        Name_to_XMIN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Name_to_XMIN, 12, 3, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A52A2A;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Clear->setAutoDefault(false);

        gridLayout->addWidget(Clear, 9, 0, 1, 1);

        Ln = new QPushButton(centralwidget);
        Ln->setObjectName(QString::fromUtf8("Ln"));
        sizePolicy.setHeightForWidth(Ln->sizePolicy().hasHeightForWidth());
        Ln->setSizePolicy(sizePolicy);
        Ln->setFont(font1);
        Ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Ln, 8, 2, 1, 1);

        Logarithm = new QPushButton(centralwidget);
        Logarithm->setObjectName(QString::fromUtf8("Logarithm"));
        sizePolicy.setHeightForWidth(Logarithm->sizePolicy().hasHeightForWidth());
        Logarithm->setSizePolicy(sizePolicy);
        Logarithm->setFont(font1);
        Logarithm->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Logarithm, 8, 3, 1, 1);

        Cosinus = new QPushButton(centralwidget);
        Cosinus->setObjectName(QString::fromUtf8("Cosinus"));
        sizePolicy.setHeightForWidth(Cosinus->sizePolicy().hasHeightForWidth());
        Cosinus->setSizePolicy(sizePolicy);
        Cosinus->setFont(font1);
        Cosinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Cosinus, 7, 0, 1, 1);

        ButtonAdd = new QPushButton(centralwidget);
        ButtonAdd->setObjectName(QString::fromUtf8("ButtonAdd"));
        sizePolicy.setHeightForWidth(ButtonAdd->sizePolicy().hasHeightForWidth());
        ButtonAdd->setSizePolicy(sizePolicy);
        ButtonAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAdd, 3, 3, 1, 1);

        CloseBracket = new QPushButton(centralwidget);
        CloseBracket->setObjectName(QString::fromUtf8("CloseBracket"));
        sizePolicy.setHeightForWidth(CloseBracket->sizePolicy().hasHeightForWidth());
        CloseBracket->setSizePolicy(sizePolicy);
        CloseBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(CloseBracket, 5, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(24);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_3, 17, 4, 1, 1);

        X_MIN = new QLineEdit(centralwidget);
        X_MIN->setObjectName(QString::fromUtf8("X_MIN"));

        gridLayout->addWidget(X_MIN, 12, 4, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        ButtonDot = new QPushButton(centralwidget);
        ButtonDot->setObjectName(QString::fromUtf8("ButtonDot"));
        ButtonDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonDot, 7, 4, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        X_MAX = new QLineEdit(centralwidget);
        X_MAX->setObjectName(QString::fromUtf8("X_MAX"));

        gridLayout->addWidget(X_MAX, 13, 4, 1, 1);

        X_button = new QPushButton(centralwidget);
        X_button->setObjectName(QString::fromUtf8("X_button"));
        sizePolicy.setHeightForWidth(X_button->sizePolicy().hasHeightForWidth());
        X_button->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(18);
        X_button->setFont(font3);
        X_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(X_button, 9, 1, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Subtract, 3, 4, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        ValueX_2 = new QLineEdit(centralwidget);
        ValueX_2->setObjectName(QString::fromUtf8("ValueX_2"));

        gridLayout->addWidget(ValueX_2, 10, 4, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setFont(font1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Equals, 9, 4, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        sizePolicy.setHeightForWidth(ChangeSign->sizePolicy().hasHeightForWidth());
        ChangeSign->setSizePolicy(sizePolicy);
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        FieldForGraph = new QCustomPlot(centralwidget);
        FieldForGraph->setObjectName(QString::fromUtf8("FieldForGraph"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(FieldForGraph->sizePolicy().hasHeightForWidth());
        FieldForGraph->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(FieldForGraph, 12, 0, 6, 3);

        Step_2 = new QLineEdit(centralwidget);
        Step_2->setObjectName(QString::fromUtf8("Step_2"));

        gridLayout->addWidget(Step_2, 16, 4, 1, 1);

        Credit = new QPushButton(centralwidget);
        Credit->setObjectName(QString::fromUtf8("Credit"));
        sizePolicy.setHeightForWidth(Credit->sizePolicy().hasHeightForWidth());
        Credit->setSizePolicy(sizePolicy);
        Credit->setFont(font2);
        Credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(Credit, 17, 3, 1, 1);

        ButtonACOS = new QPushButton(centralwidget);
        ButtonACOS->setObjectName(QString::fromUtf8("ButtonACOS"));
        sizePolicy.setHeightForWidth(ButtonACOS->sizePolicy().hasHeightForWidth());
        ButtonACOS->setSizePolicy(sizePolicy);
        ButtonACOS->setFont(font1);
        ButtonACOS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonACOS, 7, 3, 1, 1);

        Tangence = new QPushButton(centralwidget);
        Tangence->setObjectName(QString::fromUtf8("Tangence"));
        sizePolicy.setHeightForWidth(Tangence->sizePolicy().hasHeightForWidth());
        Tangence->setSizePolicy(sizePolicy);
        Tangence->setFont(font1);
        Tangence->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Tangence, 7, 2, 1, 1);

        Name_to_YMIN = new QPushButton(centralwidget);
        Name_to_YMIN->setObjectName(QString::fromUtf8("Name_to_YMIN"));
        Name_to_YMIN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Name_to_YMIN, 14, 3, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setMouseTracking(false);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Name_to_YMAX = new QPushButton(centralwidget);
        Name_to_YMAX->setObjectName(QString::fromUtf8("Name_to_YMAX"));
        Name_to_YMAX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Name_to_YMAX, 15, 3, 1, 1);

        Y_MAX = new QLabel(centralwidget);
        Y_MAX->setObjectName(QString::fromUtf8("Y_MAX"));

        gridLayout->addWidget(Y_MAX, 29, 2, 1, 1);

        Name_to_XMAX = new QPushButton(centralwidget);
        Name_to_XMAX->setObjectName(QString::fromUtf8("Name_to_XMAX"));
        Name_to_XMAX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Name_to_XMAX, 13, 3, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Multiply, 2, 4, 1, 1);

        ButtonATAN = new QPushButton(centralwidget);
        ButtonATAN->setObjectName(QString::fromUtf8("ButtonATAN"));
        sizePolicy.setHeightForWidth(ButtonATAN->sizePolicy().hasHeightForWidth());
        ButtonATAN->setSizePolicy(sizePolicy);
        ButtonATAN->setFont(font1);
        ButtonATAN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonATAN, 8, 0, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        ButtonAsin = new QPushButton(centralwidget);
        ButtonAsin->setObjectName(QString::fromUtf8("ButtonAsin"));
        sizePolicy.setHeightForWidth(ButtonAsin->sizePolicy().hasHeightForWidth());
        ButtonAsin->setSizePolicy(sizePolicy);
        ButtonAsin->setFont(font1);
        ButtonAsin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ButtonAsin, 8, 4, 1, 1);

        Result = new QLabel(centralwidget);
        Result->setObjectName(QString::fromUtf8("Result"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(2);
        sizePolicy3.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy3);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(24);
        Result->setFont(font4);
        Result->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;;\n"
"}"));
        Result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Result, 1, 0, 1, 5);

        OpenBracket = new QPushButton(centralwidget);
        OpenBracket->setObjectName(QString::fromUtf8("OpenBracket"));
        sizePolicy.setHeightForWidth(OpenBracket->sizePolicy().hasHeightForWidth());
        OpenBracket->setSizePolicy(sizePolicy);
        OpenBracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(OpenBracket, 4, 4, 1, 1);

        SquareRoot = new QPushButton(centralwidget);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setFont(font1);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #A0522D;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #800000;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 8, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Step = new QPushButton(centralwidget);
        Step->setObjectName(QString::fromUtf8("Step"));
        Step->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Step, 16, 3, 1, 1);

        Y_MIN = new QLineEdit(centralwidget);
        Y_MIN->setObjectName(QString::fromUtf8("Y_MIN"));

        gridLayout->addWidget(Y_MIN, 14, 4, 1, 1);

        Power = new QPushButton(centralwidget);
        Power->setObjectName(QString::fromUtf8("Power"));
        sizePolicy.setHeightForWidth(Power->sizePolicy().hasHeightForWidth());
        Power->setSizePolicy(sizePolicy);
        Power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #008B8B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #00FFFF;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Power, 5, 4, 1, 1);

        Y_MAX_2 = new QLineEdit(centralwidget);
        Y_MAX_2->setObjectName(QString::fromUtf8("Y_MAX_2"));

        gridLayout->addWidget(Y_MAX_2, 15, 4, 1, 1);

        Graph = new QPushButton(centralwidget);
        Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #00008B;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Graph, 9, 2, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 921, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Display->setText(QString());
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Modulo->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        EnterX->setText(QCoreApplication::translate("MainWindow", "Enter your X value:", nullptr));
        BackSpace->setText(QCoreApplication::translate("MainWindow", "<<<<", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Sinus->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        Name_to_XMIN->setText(QCoreApplication::translate("MainWindow", "X min:", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        Logarithm->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        Cosinus->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        ButtonAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        CloseBracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ButtonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        X_button->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        ChangeSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Step_2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        Credit->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        ButtonACOS->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        Tangence->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        Name_to_YMIN->setText(QCoreApplication::translate("MainWindow", "Y  min:", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Name_to_YMAX->setText(QCoreApplication::translate("MainWindow", "Y max:", nullptr));
        Y_MAX->setText(QString());
        Name_to_XMAX->setText(QCoreApplication::translate("MainWindow", "X max:", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        ButtonATAN->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        ButtonAsin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        Result->setText(QString());
        OpenBracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        SquareRoot->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Step->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        Power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        Graph->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
