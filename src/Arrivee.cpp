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
/**
* @brief Constructeur de la classe Arrivee
*
* @param heure l'heure de l'arrivée du client
* @param banque la banque
*/
Arrivee::Arrivee(double heure, Banque* banque) {
    _heure = heure;
    _banque = banque;
}

/** 
* @brief Méthode qui permet de traiter l'arrivée d'un client
* 
*/
void Arrivee::traiter() { 

    Caissier* caissier = this->_banque->premierCaissierLibre(); 

    Client* client = new Client(this->heure());

    double heureNouvelleArrivee = this->_banque->prochainDelaiArrivee() + this->_heure; 
    
    if (caissier == NULL) {
        this->_banque->fileAttente()->ajouter(client);
    } else {
        caissier->servir(client);
    }

    if (heureNouvelleArrivee <= this->_banque->dureePrevue()) {
        this->_banque->evenements().push_back(new Arrivee(heureNouvelleArrivee, this->_banque));
    }
}
