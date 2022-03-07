#include "../headers/FileAttente.h"
#include "../headers/Client.h"


#include <iostream>
using namespace std;

FileAttente::FileAttente(){
    _longueurMax = 0;
    _nbClients = 0;
    _tempsMoyenAttente = 0;
}


int FileAttente::longueurMax(){
    return _longueurMax;
}

double FileAttente::longueurMoyenne(){
    return _longueurMoyenne;
}

double FileAttente::tempsMoyenAttente(){
    return _tempsMoyenAttente;
}

//double FileAttente::tempsEntreArrivees(){}


void FileAttente::ajouter(Client c) {
    this->clients.push(c);
    this->_nbClients++;
}


Client FileAttente::retirer() {
    Client c = this->clients.front();
    this->clients.pop();
    this->_nbClients--;
    //TODO trouver un moyen de donner les heures de départs et d'arrivées
    //this->_tempsMoyenAttente = (this->_tempsMoyenAttente + (_heureDepart -_heureArrivee)) / 2

    return c;
}


bool FileAttente::estVide(){
    if (clients.size() == 0)
        return true;
    else 
        return false;
}


 