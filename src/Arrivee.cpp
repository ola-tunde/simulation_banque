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

Arrivee::Arrivee(double heure, Banque *_banque){
    _heure = heure;
    banque = _banque;
}

void Arrivee::traiter(){
    
    if (banque->heure() < banque->dureePrevue()){
        double heure = banque->tpsEntreArrivees() + _heure;
        banque->setheure(heure);
        banque->evenements().push_back(new Arrivee(heure, banque));
    }
    
    if (banque->premierCaissierLibre() == NULL){

        banque->fileAttente()->ajouter(new Client(_heure));
    }
    else{
        banque->premierCaissierLibre()->servir(new Client(_heure));
    }
}

