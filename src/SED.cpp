/**
 * @file SED.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe SED de la simulation d'événements discrets
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

//TODO commentaires doxygen
#include "../include/SED.h"

#include <iostream>
using namespace std;

SED::SED(){
    this->_heure = 0.0 ;
}

void SED::ajouter(Evenement *e){
    this->_evenements.push_back(e);
}

void SED::lancer(){
    while(!this->_evenements.empty()){
        int index = 0;
        double begin = this->_evenements[0]->heure();
        for(int i = 0; i < (int)this->_evenements.size(); i++){
            
            if(this->_evenements[i]->heure() < begin){
                
                begin = this->_evenements[i]->heure();
                index = i;
            }
        }
        Evenement *evenement = this->_evenements[index];

        evenement->traiter();//FIXME this
        
        evenement->~Evenement();
        this->_evenements.erase(this->_evenements.begin() + index);


    }
}


double SED::heure(){
    return this->_heure;
}


void SED::setheure(double _heure){
    this->_heure = _heure;
}