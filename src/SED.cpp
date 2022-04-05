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


#include "../include/SED.h"

#include <iostream>
using namespace std;

SED::SED() { 
    
    this->_heure = 0.0; 

}

/**
* @brief Méthode d'ajout d'évènement
* 
* @param e 
*/
void SED::ajouter(Evenement* e) { 
    
    this->_evenements.push_back(e); 
    
}

/**
* @brief Méthode de traitement d'évènement discrets
* 
*/
void SED::lancer() {

    while (!this->_evenements.empty()) {
        int index = 0;
        double debut = this->_evenements[0]->heure();

        for (size_t i = 0; i < this->_evenements.size(); i++) { 
            if (debut > this->_evenements[i]->heure()) {
                debut = this->_evenements[i]->heure();
                index = i;
            }
        }

        Evenement* evenement = this->_evenements[index];

        evenement->traiter();

        evenement->~Evenement();
        this->_evenements.erase(this->_evenements.begin() + index);
    }
}

/**
* @brief Méthode de récupération de l'heure courante
* 
*/
double SED::heure() { 
    
    return this->_heure; 

}
