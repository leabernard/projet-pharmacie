#include <QtCore/QCoreApplication>
#include <qjsondocument.h>
#include <qjsonobject.h>
#include <qdebug.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

	QJsonObject object;
	QJsonDocument data;
	QString message;
	
	object.insert("Type", "State");
	object.insert("Content", true);

	data.setObject(object);
	message = data.toJson();

    return a.exec();
}
