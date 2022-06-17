/********************************************************************************
** Form generated from reading UI file 'Reader.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ReaderClass)
    {
        if (ReaderClass->objectName().isEmpty())
            ReaderClass->setObjectName(QString::fromUtf8("ReaderClass"));
        ReaderClass->resize(600, 400);
        menuBar = new QMenuBar(ReaderClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ReaderClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ReaderClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ReaderClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ReaderClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ReaderClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ReaderClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ReaderClass->setStatusBar(statusBar);

        retranslateUi(ReaderClass);

        QMetaObject::connectSlotsByName(ReaderClass);
    } // setupUi

    void retranslateUi(QMainWindow *ReaderClass)
    {
        ReaderClass->setWindowTitle(QCoreApplication::translate("ReaderClass", "Reader", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReaderClass: public Ui_ReaderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
