/**
 * @file Arrivee.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Arrivee des clients
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "../include/Arrivee.h"
#include "../include/Banque.h"

#include <iostream>
using namespace std;

Arrivee::Arrivee(double _heure, Banque *_banque){
    _heure =  _heure;
    _banque = _banque;
}

void Arrivee::traiter(){
    
    if (_banque->heure() < _banque->dureePrevue()){
        double heure = _banque->tempsEntreArrivees() + _heure;
        _banque->setheure(heure);
        _banque->evenements().push_back(new Arrivee(heure, _banque));
    }//FIXME régler l'arrivée
    if (_banque->premierCaissierLibre() != NULL){
        _banque->fileAttente()->ajouter(new Client(_heure));
    }
    else{
        _banque->premierCaissierLibre()->servir(new Client(_heure));
    }
}

