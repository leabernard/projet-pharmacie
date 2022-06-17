#pragma once

#include <QObject>
#include <qtcpsocket.h> 
#include <qjsondocument.h>
#include <qjsonarray.h>
#include <qjsonobject.h>
#include <qjsonvalue.h>

class ClientTCP : public QObject
{
	Q_OBJECT
private:
	QTcpSocket * socket;
	bool connected = false;
public:
	ClientTCP(QObject *parent= Q_NULLPTR);
	~ClientTCP();
	void envoiMessage(QString Requete);
	QTcpSocket * getSocket();
	bool getConnected();

signals:
	void socketIsConnected();

public slots:
	void messageRecu();
	void socketConnected();

};
