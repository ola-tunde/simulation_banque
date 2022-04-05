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

// TODO commentaires doxygen
#include "../include/SED.h"

#include <iostream>
using namespace std;

SED::SED() { this->_heure = 0.0; }

void SED::ajouter(Evenement* e) { this->_evenements.push_back(e); }

void SED::lancer() {

    // this->_evenements.push_back(new Arrivee(this->prochainDelaiArrivee(),
    // this));

    while (!this->_evenements.empty()) {
        int index = 0;
        double debut = this->_evenements[0]->heure();

        for (size_t i = 0; i < this->_evenements.size(); i++) { // a1,s2
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

double SED::heure() { return this->_heure; }
