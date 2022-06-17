#pragma once
#include <QApplication>
#include <qsqldatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QtDebug>
#include <QtWidgets/QMainWindow>
#include "ui_pharmacien.h"
#include <QDebug>
#include <qdir.h>
#include "Reader.h"
#include "Scanner.h"
#include "ClientTCP.h"
#include <qtimer.h>

class bilanCommande;
class bilanFinancier;
class ajoutmedicament;

class pharmacien : public QMainWindow
{
    Q_OBJECT

public:
    pharmacien(ClientTCP * client, QWidget *parent = Q_NULLPTR);
	QSqlDatabase db;
	void medicament();
	QString Nom;
	QString idCaisse;
	QString idOrdonnance;
	Ui::pharmacienClass * getUI();
	void setBilanCommande(bilanCommande * bilanPtr);
	void setBilanFinancier(bilanFinancier * bilanfins);
	void setajoutmedicament(ajoutmedicament * ajoutmedoc);

private:
    Ui::pharmacienClass ui;
	bilanCommande * bilanPtr;
	bilanFinancier * bilanFins;
	ajoutmedicament * ajoutmedoc;
	ClientTCP * client;
	QTimer * timer;
	
public slots:
	void patient();
	void commande();
	void switchFenetre();
	void Finance();
	void ajoutMedoc();
	void recuperation();

};
