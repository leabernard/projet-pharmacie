/********************************************************************************
** Form generated from reading UI file 'pharmacien.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHARMACIEN_H
#define UI_PHARMACIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pharmacienClass
{
public:
    QAction *actionbilan_financier;
    QAction *actionbilan_commande;
    QAction *actionajout_de_medicament;
    QWidget *centralWidget;
    QCommandLinkButton *validerCommande;
    QSpinBox *quantite;
    QLabel *labelQuantite;
    QComboBox *listeDeMedoc;
    QLabel *image;
    QLineEdit *lineEditNom;
    QLabel *labelStatue;
    QPushButton *boutonPatient;
    QLabel *label;
    QLineEdit *lineEditIDCaisse;
    QLabel *label_2;
    QLabel *label_3;
    QTableView *tableCommande;
    QTableView *tableFinancier;
    QCommandLinkButton *ajoutmedoc;
    QLineEdit *nom;
    QLineEdit *codebarre;
    QLineEdit *prixvente;
    QLineEdit *prixachat;
    QLineEdit *individual;
    QLineEdit *largeur;
    QLabel *labelNom;
    QLabel *labelHauteur;
    QLabel *labelLongueur;
    QLabel *labelCodebarre;
    QLabel *labelprixVente;
    QLabel *labelPrixAchat;
    QLabel *labelIndividual;
    QLabel *label_4;
    QLabel *labelPoid;
    QLineEdit *poids;
    QLineEdit *hauteur;
    QLineEdit *longueur;
    QMenuBar *menuBar;
    QMenu *menubilan_des_commande;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *pharmacienClass)
    {
        if (pharmacienClass->objectName().isEmpty())
            pharmacienClass->setObjectName(QString::fromUtf8("pharmacienClass"));
        pharmacienClass->resize(671, 414);
        actionbilan_financier = new QAction(pharmacienClass);
        actionbilan_financier->setObjectName(QString::fromUtf8("actionbilan_financier"));
        actionbilan_commande = new QAction(pharmacienClass);
        actionbilan_commande->setObjectName(QString::fromUtf8("actionbilan_commande"));
        actionajout_de_medicament = new QAction(pharmacienClass);
        actionajout_de_medicament->setObjectName(QString::fromUtf8("actionajout_de_medicament"));
        centralWidget = new QWidget(pharmacienClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        validerCommande = new QCommandLinkButton(centralWidget);
        validerCommande->setObjectName(QString::fromUtf8("validerCommande"));
        validerCommande->setGeometry(QRect(10, 270, 185, 41));
        quantite = new QSpinBox(centralWidget);
        quantite->setObjectName(QString::fromUtf8("quantite"));
        quantite->setGeometry(QRect(220, 130, 42, 22));
        labelQuantite = new QLabel(centralWidget);
        labelQuantite->setObjectName(QString::fromUtf8("labelQuantite"));
        labelQuantite->setGeometry(QRect(280, 130, 71, 31));
        listeDeMedoc = new QComboBox(centralWidget);
        listeDeMedoc->setObjectName(QString::fromUtf8("listeDeMedoc"));
        listeDeMedoc->setGeometry(QRect(40, 130, 121, 21));
        image = new QLabel(centralWidget);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(440, 20, 141, 121));
        image->setPixmap(QPixmap(QString::fromUtf8(":/pharmacien/pharmacie.png")));
        image->setScaledContents(true);
        lineEditNom = new QLineEdit(centralWidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(20, 20, 113, 20));
        labelStatue = new QLabel(centralWidget);
        labelStatue->setObjectName(QString::fromUtf8("labelStatue"));
        labelStatue->setGeometry(QRect(260, 250, 331, 51));
        boutonPatient = new QPushButton(centralWidget);
        boutonPatient->setObjectName(QString::fromUtf8("boutonPatient"));
        boutonPatient->setGeometry(QRect(290, 20, 131, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 140, 71, 21));
        lineEditIDCaisse = new QLineEdit(centralWidget);
        lineEditIDCaisse->setObjectName(QString::fromUtf8("lineEditIDCaisse"));
        lineEditIDCaisse->setGeometry(QRect(160, 20, 113, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 40, 71, 16));
        tableCommande = new QTableView(centralWidget);
        tableCommande->setObjectName(QString::fromUtf8("tableCommande"));
        tableCommande->setGeometry(QRect(40, 0, 561, 321));
        tableFinancier = new QTableView(centralWidget);
        tableFinancier->setObjectName(QString::fromUtf8("tableFinancier"));
        tableFinancier->setGeometry(QRect(0, -10, 591, 341));
        ajoutmedoc = new QCommandLinkButton(centralWidget);
        ajoutmedoc->setObjectName(QString::fromUtf8("ajoutmedoc"));
        ajoutmedoc->setGeometry(QRect(280, 270, 111, 41));
        nom = new QLineEdit(centralWidget);
        nom->setObjectName(QString::fromUtf8("nom"));
        nom->setGeometry(QRect(40, 30, 113, 20));
        codebarre = new QLineEdit(centralWidget);
        codebarre->setObjectName(QString::fromUtf8("codebarre"));
        codebarre->setGeometry(QRect(40, 180, 113, 20));
        prixvente = new QLineEdit(centralWidget);
        prixvente->setObjectName(QString::fromUtf8("prixvente"));
        prixvente->setGeometry(QRect(330, 30, 113, 20));
        prixachat = new QLineEdit(centralWidget);
        prixachat->setObjectName(QString::fromUtf8("prixachat"));
        prixachat->setGeometry(QRect(330, 80, 113, 20));
        individual = new QLineEdit(centralWidget);
        individual->setObjectName(QString::fromUtf8("individual"));
        individual->setGeometry(QRect(330, 140, 113, 20));
        largeur = new QLineEdit(centralWidget);
        largeur->setObjectName(QString::fromUtf8("largeur"));
        largeur->setGeometry(QRect(330, 190, 113, 20));
        labelNom = new QLabel(centralWidget);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));
        labelNom->setGeometry(QRect(180, 30, 101, 21));
        labelHauteur = new QLabel(centralWidget);
        labelHauteur->setObjectName(QString::fromUtf8("labelHauteur"));
        labelHauteur->setGeometry(QRect(170, 80, 47, 13));
        labelLongueur = new QLabel(centralWidget);
        labelLongueur->setObjectName(QString::fromUtf8("labelLongueur"));
        labelLongueur->setGeometry(QRect(170, 130, 47, 13));
        labelCodebarre = new QLabel(centralWidget);
        labelCodebarre->setObjectName(QString::fromUtf8("labelCodebarre"));
        labelCodebarre->setGeometry(QRect(170, 180, 61, 16));
        labelprixVente = new QLabel(centralWidget);
        labelprixVente->setObjectName(QString::fromUtf8("labelprixVente"));
        labelprixVente->setGeometry(QRect(460, 30, 61, 16));
        labelPrixAchat = new QLabel(centralWidget);
        labelPrixAchat->setObjectName(QString::fromUtf8("labelPrixAchat"));
        labelPrixAchat->setGeometry(QRect(460, 80, 61, 16));
        labelIndividual = new QLabel(centralWidget);
        labelIndividual->setObjectName(QString::fromUtf8("labelIndividual"));
        labelIndividual->setGeometry(QRect(460, 140, 51, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 200, 61, 21));
        labelPoid = new QLabel(centralWidget);
        labelPoid->setObjectName(QString::fromUtf8("labelPoid"));
        labelPoid->setGeometry(QRect(180, 230, 71, 21));
        poids = new QLineEdit(centralWidget);
        poids->setObjectName(QString::fromUtf8("poids"));
        poids->setGeometry(QRect(40, 230, 113, 20));
        hauteur = new QLineEdit(centralWidget);
        hauteur->setObjectName(QString::fromUtf8("hauteur"));
        hauteur->setGeometry(QRect(30, 80, 113, 20));
        longueur = new QLineEdit(centralWidget);
        longueur->setObjectName(QString::fromUtf8("longueur"));
        longueur->setGeometry(QRect(40, 130, 113, 20));
        pharmacienClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(pharmacienClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 21));
        menubilan_des_commande = new QMenu(menuBar);
        menubilan_des_commande->setObjectName(QString::fromUtf8("menubilan_des_commande"));
        pharmacienClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(pharmacienClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        pharmacienClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(pharmacienClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        pharmacienClass->setStatusBar(statusBar);

        menuBar->addAction(menubilan_des_commande->menuAction());
        menubilan_des_commande->addAction(actionbilan_financier);
        menubilan_des_commande->addAction(actionbilan_commande);
        menubilan_des_commande->addAction(actionajout_de_medicament);

        retranslateUi(pharmacienClass);
        QObject::connect(boutonPatient, SIGNAL(clicked()), pharmacienClass, SLOT(patient()));
        QObject::connect(validerCommande, SIGNAL(clicked()), pharmacienClass, SLOT(commande()));
        QObject::connect(actionbilan_commande, SIGNAL(triggered()), pharmacienClass, SLOT(switchFenetre()));
        QObject::connect(actionbilan_financier, SIGNAL(triggered()), pharmacienClass, SLOT(Finance()));
        QObject::connect(actionajout_de_medicament, SIGNAL(triggered()), pharmacienClass, SLOT(ajoutMedoc()));
        QObject::connect(ajoutmedoc, SIGNAL(clicked()), pharmacienClass, SLOT(recuperation()));

        QMetaObject::connectSlotsByName(pharmacienClass);
    } // setupUi

    void retranslateUi(QMainWindow *pharmacienClass)
    {
        pharmacienClass->setWindowTitle(QCoreApplication::translate("pharmacienClass", "pharmacien", nullptr));
        actionbilan_financier->setText(QCoreApplication::translate("pharmacienClass", "bilan financier", nullptr));
        actionbilan_commande->setText(QCoreApplication::translate("pharmacienClass", "bilan commande", nullptr));
        actionajout_de_medicament->setText(QCoreApplication::translate("pharmacienClass", "ajout de medicament", nullptr));
        validerCommande->setText(QCoreApplication::translate("pharmacienClass", "valider commande", nullptr));
        labelQuantite->setText(QCoreApplication::translate("pharmacienClass", "  Quantit\303\251", nullptr));
        image->setText(QString());
        labelStatue->setText(QString());
        boutonPatient->setText(QCoreApplication::translate("pharmacienClass", "Nom du patient", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("pharmacienClass", "Nom Patient", nullptr));
        label_3->setText(QCoreApplication::translate("pharmacienClass", "ID Caisse", nullptr));
        ajoutmedoc->setText(QCoreApplication::translate("pharmacienClass", "valider", nullptr));
        labelNom->setText(QCoreApplication::translate("pharmacienClass", "nom du medicament", nullptr));
        labelHauteur->setText(QCoreApplication::translate("pharmacienClass", "hauteur", nullptr));
        labelLongueur->setText(QCoreApplication::translate("pharmacienClass", "longueur", nullptr));
        labelCodebarre->setText(QCoreApplication::translate("pharmacienClass", "code-barre", nullptr));
        labelprixVente->setText(QCoreApplication::translate("pharmacienClass", "prix vente", nullptr));
        labelPrixAchat->setText(QCoreApplication::translate("pharmacienClass", "prix achat", nullptr));
        labelIndividual->setText(QCoreApplication::translate("pharmacienClass", "individuel", nullptr));
        label_4->setText(QCoreApplication::translate("pharmacienClass", "largeur", nullptr));
        labelPoid->setText(QCoreApplication::translate("pharmacienClass", "poid", nullptr));
        menubilan_des_commande->setTitle(QCoreApplication::translate("pharmacienClass", "menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pharmacienClass: public Ui_pharmacienClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHARMACIEN_H
