/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *forResult;
    QPushButton *minusBtn;
    QPushButton *multBtn;
    QPushButton *plusBtn;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label;
    QLabel *resultLabel;
    QPushButton *divideBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(688, 504);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(360, 70, 160, 223));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        forResult = new QLabel(gridLayoutWidget);
        forResult->setObjectName("forResult");

        gridLayout->addWidget(forResult, 2, 2, 1, 1);

        minusBtn = new QPushButton(gridLayoutWidget);
        minusBtn->setObjectName("minusBtn");

        gridLayout->addWidget(minusBtn, 4, 1, 1, 1);

        multBtn = new QPushButton(gridLayoutWidget);
        multBtn->setObjectName("multBtn");

        gridLayout->addWidget(multBtn, 5, 1, 1, 1);

        plusBtn = new QPushButton(gridLayoutWidget);
        plusBtn->setObjectName("plusBtn");

        gridLayout->addWidget(plusBtn, 3, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        resultLabel = new QLabel(gridLayoutWidget);
        resultLabel->setObjectName("resultLabel");

        gridLayout->addWidget(resultLabel, 2, 1, 1, 1);

        divideBtn = new QPushButton(gridLayoutWidget);
        divideBtn->setObjectName("divideBtn");

        gridLayout->addWidget(divideBtn, 6, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 688, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        forResult->setText(QString());
        minusBtn->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multBtn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        plusBtn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        divideBtn->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
