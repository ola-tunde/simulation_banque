/**
 * @file FileAttente.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe FileAttente
 * @version 0.1
 * @date 2022-03-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../headers/FileAttente.h"

#include <iostream>
using namespace std;

/**
 * @brief Constructeur de la classe FileAttente
 *
 * @param _tempsEntreArrivee qui automatise l'arrivée des clients
 */

FileAttente::FileAttente(double _tempsEntreArrivees, Banque *_banque){
    this->_longueurMax = 0;
    this->_longueurMoyenne = 0;
    this->_aire = 0;
    this->_banque = _banque;
    this->_tempsEntreArrivees = _tempsEntreArrivees;
}

/**
 * @brief Getter de la longueur Max de la file d'attente
 *
 */
unsigned int FileAttente::longueurMax(){
    return this->_longueurMax;
}

// TODO demander de la longueurMoyenne (FileAttente)
/**
 * @brief Getter de la longueur moyenne de la file d'attente
 *
 */
double FileAttente::longueurMoyenne(){
    return _aire / _banque->heure();
}

/**
 * @brief Getter du temps moyen d'attente dans la file d'attente
 *
 */
double FileAttente::tempsMoyenAttente(){
    return accumulate(_tempsAttente.begin(), _tempsAttente.end(), 0.0) / _tempsAttente.size();
}

// TODO générer le tempsEntreArrivees (Client)
/**
 * @brief Getter du temps entre les arrivées dans la file d'attente
 *
 */
double FileAttente::tempsEntreArrivees(){
    return this->_tempsEntreArrivees;
}

/**
 * @brief Méthode pour ajouter un client dans la file d'attente
 *
 * @param c Client à ajouter
 */
void FileAttente::ajouter(Client *c){
    _aire += (_banque->heure() - _last) * _clients.size();
    this->_clients.push_back(c);

    if (this->_clients.size() > this->_longueurMax)
    {
        this->_longueurMax = this->_clients.size();
    }
}

/**
 * @brief Méthode pour retirer un client de la file d'attente
 * @details On retirer le premier client de la file d'attente et on calcule le temps moyen d'attente
 */
Client* FileAttente::retirer(){
    this->_aire += (_banque->heure() - this->_last) * _clients.size();
    this->_last = _banque->heure();
    
    Client *c = this->_clients.front();
    this->_tempsAttente.push_back(_banque->heure() - c.heureArrivee());

    this->_clients.erase(this->_clients.begin());
    
    return c;
}

/**
 * @brief Méthode pour vérifier si la file d'attente est vide
 *
 */
bool FileAttente::estVide(){
    return this->_clients.empty();
}
