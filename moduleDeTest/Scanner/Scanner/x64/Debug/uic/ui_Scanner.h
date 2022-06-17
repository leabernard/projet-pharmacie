/********************************************************************************
** Form generated from reading UI file 'Scanner.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANNER_H
#define UI_SCANNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScannerClass
{
public:
    QWidget *centralWidget;
    QLabel *codeBarLabel;
    QLineEdit *codeBarreEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScannerClass)
    {
        if (ScannerClass->objectName().isEmpty())
            ScannerClass->setObjectName(QString::fromUtf8("ScannerClass"));
        ScannerClass->resize(596, 400);
        centralWidget = new QWidget(ScannerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        codeBarLabel = new QLabel(centralWidget);
        codeBarLabel->setObjectName(QString::fromUtf8("codeBarLabel"));
        codeBarLabel->setGeometry(QRect(60, 30, 81, 16));
        codeBarreEdit = new QLineEdit(centralWidget);
        codeBarreEdit->setObjectName(QString::fromUtf8("codeBarreEdit"));
        codeBarreEdit->setGeometry(QRect(150, 30, 113, 20));
        codeBarreEdit->setReadOnly(true);
        ScannerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScannerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 21));
        ScannerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScannerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ScannerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScannerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ScannerClass->setStatusBar(statusBar);

        retranslateUi(ScannerClass);

        QMetaObject::connectSlotsByName(ScannerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScannerClass)
    {
        ScannerClass->setWindowTitle(QCoreApplication::translate("ScannerClass", "Scanner", nullptr));
        codeBarLabel->setText(QCoreApplication::translate("ScannerClass", "Code barre : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScannerClass: public Ui_ScannerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANNER_H
