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

/**
 * @brief Constructeur de la classe FinService
 * @param heure heure de l'événement
 * @param banque référence sur la banque
 */
FinService::FinService(Caissier* caissier, double heure, Banque *banque){
    _heure =  heure;
    banque = banque;
    caissier = caissier;
}

/**
 * @brief Traite la fin de service 
 * @details Rend le caissier libre 
 *
 * 
 */
void FinService::traiter(){
    caissier->estLibre();
} 