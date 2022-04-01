/**
 * @file Evenement.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Evenement abstraite de gestion d'événènements
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include "../include/Evenement.h"

#include <iostream>
using namespace std;


double Evenement::heure(){
    return this->_heure;
}


void Evenement::traiter(){}

Evenement::~Evenement(){}