/**
 * @file Client.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Client
 * @version 0.1
 * @date 2022-03-30
 *
 * @copyright Copyright (c) 2022
 *
*/
#include "../headers/Client.h"

#include <iostream>
using namespace std;

/**
 * @brief Constructeur de la classe Client
 *
 * @param _tempsArrivee qui identifie chaque client
 */
Client::Client(double _heureArrivee){
    this->_heureArrivee = _heureArrivee;
}

// TODO heure arrivée (Client)
/**
 * @brief Getter de l'heure d'arrivée du client
 *
 */
double Client::heureArrivee(){
    return this->_heureArrivee;
}


Client::~Client(){
}