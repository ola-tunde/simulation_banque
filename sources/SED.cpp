#include "../headers/SED.h"

#include <iostream>
using namespace std;

SED::SED(){
    this->_heure = 0.0;
}

double SED::heure(){
    return this->_heure;
}

void SED::ajouter(Evenement e){
    this->_evenements.push(e);
}

queue<Evenement> SED::evenements(){
    return this->_evenements;
}

void SED::lancer(){}