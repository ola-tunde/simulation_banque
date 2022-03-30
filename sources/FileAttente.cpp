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

FileAttente::FileAttente(double _tempsEntreArrivees){
    this->_longueurMax = 0;
    this->_longueurMoyenne = 0;
    this->_tempsMoyenAttente = 0;
    this->_tempsEntreArrivees = _tempsEntreArrivees;
}

/**
 * @brief Getter de la longueur Max de la file d'attente
 *
 */
unsigned int FileAttente::longueurMax(){
    if (this->_clients.size() > this->_longueurMax)
    {
        this->_longueurMax = this->_clients.size();
    }
    return this->_longueurMax;
}

// TODO demander de la longueurMoyenne (FileAttente)
/**
 * @brief Getter de la longueur moyenne de la file d'attente
 *
 */
double FileAttente::longueurMoyenne(){
    return this->_longueurMoyenne;
}

/**
 * @brief Getter du temps moyen d'attente dans la file d'attente
 *
 */
double FileAttente::tempsMoyenAttente(){
    return this->_tempsMoyenAttente;
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
void FileAttente::ajouter(Client c){
    this->_clients.push_back(c);
}

/**
 * @brief Méthode pour retirer un client de la file d'attente
 * @details On retirer le premier client de la file d'attente et on calcule le temps moyen d'attente
 */
Client FileAttente::retirer(){
    Client c = this->_clients.front();
    cout << c.heureArrivee() << endl;

    this->_clients.erase(this->_clients.begin());
    // TODO heure départ (Client)

    if (this->_tempsMoyenAttente == 0.0){
        this->_tempsMoyenAttente = c.heureDepart();
    }
    else{
        this->_tempsMoyenAttente = (this->_tempsMoyenAttente + (c.heureDepart() - c.heureDepart())) / 2;
    }

    return c;
}

/**
 * @brief Méthode pour vérifier si la file d'attente est vide
 *
 */
bool FileAttente::estVide(){
    return this->_clients.empty();
}
