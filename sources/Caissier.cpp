/**
 * @file Caissier.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Caissier
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../headers/Caissier.h"


#include <iostream>
using namespace std;
/**
 * @brief Constructeur de la classe Caissier
 * 
 * @param _tempsEntreArrivees qui automatise l'arrivée des clients
 * @param _banque référence sur la banque auquel il appartient
 */
Caissier::Caissier(double _tempsMoyenService, Banque* banque){
    this->banque = banque;
    this->_nbClients = 0;
    this->_estLibre = true;
    
}

double Caissier::tempsMoyenService(){
    return accumulate(_tempsService.begin(), _tempsService.end(), 0) / _tempsService.size();
}

int Caissier::nbClients(){
    return this->_nbClients;
}

double Caissier::tauxOccupation(){
    return accumulate(_tempsService.begin(), _tempsService.end(), 0) / banque->dureeReelle();
}

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
//TODO revoir servir le cient
void Caissier::servir (Client *c){
    cout << "Client servi" << endl;
    delete &c;
    this->_nbClients++;
    _estLibre = false;
} 
 
void Caissier::attendre(){}