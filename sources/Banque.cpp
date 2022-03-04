#include "../headers/Caissier.h"
#include "../headers/SED.h"


#include <iostream>
using namespace std;

Banque::Banque(){}

double Banque::dureePrevue(){
    return dureePrevue;
}

double Banque::dureeReelle(){
    return dureeReelle;
}

int Banque::nbCaissiers(){
    return nbCaissiers;
}

int Banque::nbClients(){
    return nbClients;
}

Caissier Banque::premierCaissierLibre(){
    if (tab != NULL)
    {
        i = 0;
        while (tab[nbCaissiers != NULL]){
            i++;
        }
        cout << "Caissier numéro" << tab[nbCaissiers] <<"est libre"<< endl;

    }
    else cout << "Aucune file d'attente. Veuillez passer à la caisse de votre choix" << endl;

}

