#include "../headers/FileAttente.h"


#include <iostream>
using namespace std;

FileAttente::FileAttente(double _tempsEntreArrivees) {
    this->_longueurMax = 0;
    this->_tempsMoyenAttente = 0;
    this->_tempsEntreArrivees = _tempsEntreArrivees;
}


int FileAttente::longueurMax() {
    if (_clients.size() > _longueurMax){
        _longueurMax = _clients.size();
    }
    return this->_longueurMax;
}

//TODO demander de la longueurMoyenne (FileAttente)
double FileAttente::longueurMoyenne() {
    return this->_longueurMoyenne;
}

double FileAttente::tempsMoyenAttente() {
    return this->_tempsMoyenAttente;
}

//TODO générer le tempsEntreArrivees (Client)
double FileAttente::tempsEntreArrivees() {
    return this->_tempsEntreArrivees;
}


void FileAttente::ajouter(Client c) {
    this->_clients.push(c);
}


Client FileAttente::retirer() {
    Client c = this->_clients.front();
    this->_clients.pop();
    //TODO heure départ (Client)

    if (this->_tempsMoyenAttente == 0.0) {
        this->_tempsMoyenAttente = c.heureDepart();
    } else {
        this->_tempsMoyenAttente = (this->_tempsMoyenAttente + (c.heureDepart() - c.heureDepart())) / 2;
    }

    return c;
}


bool FileAttente::estVide(){
    return _clients.size() == 0
        return true;
    else 
        return false;
} 

