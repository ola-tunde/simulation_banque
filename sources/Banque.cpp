#include "../headers/Banque.h"

#include <iostream>
using namespace std;

Banque::Banque(int _nbCaissiers, double _dureePrevue, double tempsService) : SED(){
    this->_dureePrevue = _dureePrevue ;
    this->_nbCaissiers = _nbCaissiers ;
    this->_nbClients = 1;

    for (int i = 0; i < _nbCaissiers; i++) {
        this->_caissiers.push_back(Caissier(tempsService));
    }
}

double Banque::dureePrevue(){
    return this->_dureePrevue;
}

double Banque::dureeReelle(){
    return this->_dureeReelle;
}

int Banque::nbCaissiers(){
    return this->_nbCaissiers;
}

int Banque::nbClients(){
    this->_nbClients = 0;

    for (int i = 0; i < this->_nbCaissiers; i++){
        this->_nbClients += this->_caissiers[i].nbClients();
    }

    return this->_nbClients;
}

vector<Caissier> Banque::caissiers(){
    return this->_caissiers;
}


Caissier Banque::premierCaissierLibre(){
    for (int i = 0; i < this->_nbCaissiers; i++) {
        if (this->_caissiers[i].estLibre()) {
            cout << "Caissier numéro" << i + 1 <<" est libre"<< endl;
            return this->_caissiers[i];
        }
    }
    cout << "Aucun caissier libre !" << endl;
    return 0;
}
