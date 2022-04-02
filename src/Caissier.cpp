/**
 * @file Caissier.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Caissier
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/Caissier.h"


#include <iostream>
using namespace std;
/**
 * @brief Constructeur de la classe Caissier
 * 
 * @param _tempsEntreArrivees qui automatise l'arrivée des clients
 * @param _banque référence sur la banque auquel il appartient
 */
Caissier::Caissier(double _tempsMoyenService, Banque* banque){
    _generateur->init(_tempsMoyenService);
    this->banque = banque;
    this->_nbClients = 0;
    this->_estLibre = true;
    
}

/**
* @brief Getter du temps moyen de service du caissier
* 
*/
//FIXME floating point exception
double Caissier::tempsMoyenService(){
    return accumulate(_tempsService.begin(), _tempsService.end(), decltype(_tempsService)::value_type(0)) / _tempsService.size();
}

/**
* @brief Getter du nombre de clients servi par caissier 
* 
*/
int Caissier::nbClients(){
    return this->_nbClients;
}

/**
* @brief Getter du taux d'occupation de chaque caissier
* 
*/
double Caissier::tauxOccupation(){
    return accumulate(_tempsService.begin(), _tempsService.end(), decltype(_tempsService)::value_type(0)) / banque->dureeReelle();
}

/**
* @brief vérifie si le caissier est libre
* 
* @return true si le caissier est libre
*/
bool Caissier::estLibre(){

    return this->_estLibre; 
} 

/**
* @brief attendre un client s'il est libre
* 
*/ 
void Caissier::attendre(){
   if (banque->fileAttente()->estVide()){
        this->_estLibre = true;
    }
    else{
        servir(banque->fileAttente()->retirer());
    }
}

//FIXME revoir servir le cient
/**
* @brief servir un client
* 
* @param c la référrence sur le client à servir
*
*/
void Caissier::servir (Client *c){
    this->_estLibre = false;
    double heure = Poisson::next(banque->tpsEntreArrivees());
    _tempsService.push_back(heure);
    this->_nbClients++;

    banque->evenements().push_back(new FinService(this, heure, c));
    
} 

