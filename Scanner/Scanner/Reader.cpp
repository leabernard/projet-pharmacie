#include "Reader.h"
#include <qdebug.h>


Reader::Reader(QObject *parent)
	: QObject(parent)
{
	scanner = new QSerialPort();
	scanner->setPortName("COM1");
	scanner->setBaudRate(115200);
	if (scanner->open(QIODevice::ReadWrite)) {

		connect(scanner, SIGNAL(readyRead()), this, SLOT(receiveMessage()));
	}
}

void Reader::receiveMessage() {

	if (scanner->canReadLine())
	{
		QByteArray data = scanner->readLine();
		result = QString(data).remove("\r").remove("\n");

		qDebug() << result;
		emit onDataRead(result);
	}
}
Reader::~Reader()
{
}

QString Reader::getresult() {
	return result;
}


