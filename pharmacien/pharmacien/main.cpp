#include "pharmacien.h"
#include <QtWidgets/QApplication>
#include "bilanCommande.h"
#include "bilanFinancier.h"
#include "ajoutmedicament.h"
#include "ClientTCP.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	ClientTCP client;
    pharmacien w(&client);
	bilanCommande z(&w);
	bilanFinancier y(&w);
	ajoutmedicament s(&w, &client);
	
	w.setBilanCommande(&z);
	w.setBilanFinancier(&y);
	w.setajoutmedicament(&s);
    w.show();
    return a.exec();
}
