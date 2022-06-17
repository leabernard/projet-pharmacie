#include "ClientTCP.h"

ClientTCP::ClientTCP(QObject *parent)
	: QObject(parent)
{
	qDebug() << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	socket = new QTcpSocket(this);
	connect(socket, SIGNAL(readyRead()), this, SLOT(messageRecu()));
	connect(socket, SIGNAL(connected()), this, SLOT(socketConnected()));

	socket->connectToHost("192.168.65.104", 777);
	if (socket->waitForConnected()) {
		//quand c'est connecter
		qDebug() << "ok";
	}
	else {
		qDebug() << socket->error();
		qDebug() << socket->state();
	}
}

ClientTCP::~ClientTCP()
{
}

void ClientTCP::envoiMessage(QString requete)
{
	qDebug() << "test";
	QJsonDocument message;
	QJsonObject objetMessage;
	objetMessage.insert("Type", "Request");
	objetMessage.insert("Content", requete);
	message.setObject(objetMessage);
	socket->write(message.toJson());
}

QTcpSocket * ClientTCP::getSocket()
{
	return socket;
}

bool ClientTCP::getConnected()
{
	return connected;
}

void ClientTCP::socketConnected()
{
	connected = true;
}

void ClientTCP::messageRecu() {
	QByteArray data = socket->readAll();
	QJsonDocument reponse = QJsonDocument::fromJson(data);
	QJsonObject object = reponse.object();
	QJsonValue type = object.value("Type");
	QJsonValue content = object.value("Content");
	if(type == "State"){
		if (content == "OK") {
			qDebug() << "Le Tapis est fonctionnel";
		}
		else {
			qDebug() << "Le tapis rencontre un problème";
		}
			

	}
	/*QList<QVariant> list = reponse.toVariant().toList();
	QMap<QString, QVariant> map = list[0].toMap();
	QMap<QString, QVariant> map2 = list[1].toMap();
	qDebug() << map["idmedicament"].toString();
	qDebug() << map2["idmedicament"].toString();*/
}