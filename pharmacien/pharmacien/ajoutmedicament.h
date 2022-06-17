#pragma once
#include <QApplication>
#include <qsqldatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QtDebug>
#include <QtWidgets/QMainWindow>
#include <QDebug>
#include"Scanner.h"
#include"Reader.h"


class pharmacien;


class ajoutmedicament : public QObject
{


	Q_OBJECT

		pharmacien * pharmacienUi;
	ClientTCP * client;

public:
	ajoutmedicament(pharmacien * pharmacienUi, ClientTCP * client, QWidget *parent = Q_NULLPTR);
	void ajoutMedoc();
	

	QString Nom;
	QString hauteur;
	QString longeur;
	QString code_barre;
	QString prix_vente;
	QString prix_achat;
	QString individuel;
	QString largeur;
	QString poids;
	
	void recuperation();

public slots:
	//void medicament();
	

};












