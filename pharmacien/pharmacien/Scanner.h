#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_pharmacien.h"
#include "Reader.h"
#include "pharmacien.h"

class Scanner : public QMainWindow
{
	Q_OBJECT

public:
	Scanner(QWidget *parent = Q_NULLPTR);

private:
	Ui::pharmacienClass ui;
	Reader * reader;

private slots:
	void surMedicamentLu(QString code);
};
