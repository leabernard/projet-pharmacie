#include <QtCore/QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "database.h"
#include <qdebug.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
	Database* db = new Database();
	qDebug() << "a";
	db->start();

    return a.exec();



}
