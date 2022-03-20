#include <iostream>

#include "../headers/Banque.h"
//#include "../headers/SED.h"

using namespace std;

Banque::Banque()
{
    this->_nbClients = 1;
    caissiers = new Caissier[_nbCaissiers];
    caissiers[0] = *(new Caissier());
}

Banque::Banque(int _nbCaissiers, double _dureePrevue){
    this->_dureePrevue = _dureePrevue ;
    this->_nbCaissiers = _nbCaissiers ;
    this->_nbClients = 1;
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
    return this->_nbClients;
}

 
Caissier* Banque::premierCaissierLibre(){
    for (int i = 0; i < this->_nbCaissiers; i++) {
        if (this->caissiers[i].estLibre()) {
            cout << "Caissier numéro" << i + 1  <<" est libre"<< endl;
            return &(this->caissiers[i]);
        }
    }
    cout << "Aucun caissier libre !" << endl;  
    return NULL;
}
