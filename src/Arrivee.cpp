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

Arrivee::Arrivee(double heure, Banque* banque) {
    _heure = heure;
    _banque = banque;
}

void Arrivee::traiter() { // *c1, c2

    Caissier* caissier =
        this->_banque->premierCaissierLibre(); //  s1,a2,s3 // a1 +ts // a1+ tea
                                               //  + ts // a1 + tea + teA

    Client* client = new Client(this->heure());

    double heureNouvelleArrivee =
        this->_banque->prochainDelaiArrivee() + this->_heure; // a1,s1,a2,s2

    if (caissier == NULL) {
        this->_banque->fileAttente()->ajouter(client);
    } else {
        caissier->servir(client);
    }

    if (heureNouvelleArrivee <= this->_banque->dureePrevue()) {
        this->_banque->evenements().push_back(
            new Arrivee(heureNouvelleArrivee, this->_banque));
    }
}
