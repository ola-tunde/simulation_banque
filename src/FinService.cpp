/**
 * @file FinService.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe FinService de gestion de fin de service des caissiers
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/FinService.h"

#include <iostream>
using namespace std;

FinService::FinService(double _heure,Client client, Caissier caissier, Banque banque): Evenement(_heure){}


void FinService::traiter(){
    cout << "Fin de service" << endl;
} 