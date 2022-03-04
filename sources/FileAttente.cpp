#include "../headers/FileAttente.h"
#include "../headers/Client.h"


#include <iostream>
using namespace std;

FileAttente::FileAttente(){
    _longueurMax = 1;
    _nbClients = 0;
}

FileAttente::FileAttente(int _longueurMax){
    this->_longueurMax = _longueurMax;
    _nbClients = 0;

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
    if (_nbClients < _longueurMax) {
        tab[_nbClients] = c;
        _nbClients++;
    }

}

//Client FileAttente::retirer(){}

bool FileAttente::estVide(){
    if (tab[_longueurMax] == NULL)
        return true;
    else return false;
}

