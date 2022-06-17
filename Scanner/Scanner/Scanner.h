#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Scanner.h"
#include "Reader.h"

class Scanner : public QMainWindow
{
    Q_OBJECT

public:
    Scanner(QWidget *parent = Q_NULLPTR);

private:
    Ui::ScannerClass ui;
	Reader * reader;

private slots:
	void surMedicamentLu(QString code);
};
