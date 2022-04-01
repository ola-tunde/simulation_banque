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
double Caissier::tempsMoyenService(){
    return accumulate(_tempsService.begin(), _tempsService.end(), 0) / _tempsService.size();
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
    return accumulate(_tempsService.begin(), _tempsService.end(), 0) / banque->dureeReelle();
}

/**
* @brief vérifie si le caissier est libre
* 
* @return true si le caissier est libre
*/
bool Caissier::estLibre(){
    if (banque->fileAttente()->estVide()){
        this->_estLibre = true;
    }
    else{
        this->_estLibre = false;
        servir(banque->fileAttente()->retirer());
    }
    return _estLibre;
} 

//FIXME revoir servir le cient
/**
* @brief servir un client
* 
* @param c la référrence sur le client à servir
*
*/
void Caissier::servir (Client *c){
    double heure = Poisson::next();
    _tempsService.push_back(heure);
    _estLibre = false;
    this->_nbClients++;

    banque->evenements().push_back(new FinService(this, heure, c));
    

} 

/**
* @brief attendre un client s'il est libre
* 
*/ 
void Caissier::attendre(){
    while (this->_estLibre == true){
        continue;  
    }
}