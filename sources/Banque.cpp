/**
 * @file Banque.cpp
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Banque
 * @version 0.1
 * @date 2022-03-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "../headers/Banque.h"

#include <iostream>
using namespace std;
/**
 * @brief Constructeur de la classe Banque
 *
 * @param _nbCaissiers le nombre de caissiers dans la banque
 * @param _dureePrevue la durée prévue de la simulation
 * @param tempsService le temps de service de chaque caissier
 */
Banque::Banque(int _nbCaissiers, double _dureePrevue, double tempsService) : SED() {
    this->_dureePrevue = _dureePrevue;
    this->_nbCaissiers = _nbCaissiers;
    this->_nbClients = 1;

    for (int i = 0; i < _nbCaissiers; i++){
        this->_caissiers.push_back(Caissier(tempsService));
    }
}

/**
 * @brief Getter de la durée prévue de la simulation
 *
 */
double Banque::dureePrevue(){
    return this->_dureePrevue;
}

/**
 * @brief Getter de la durée réelle de la simulation
 *
 */
double Banque::dureeReelle(){
    return this->_dureeReelle;
}

/**
 * @brief Getter du nombre de caissiers dans la banque
 *
 */
int Banque::nbCaissiers(){
    return this->_nbCaissiers;
}

/**
 * @brief Getter pour retourner les objets de la classe Caissier
 *
 */
int Banque::nbClients(){
    this->_nbClients = 0;

    for (int i = 0; i < this->_nbCaissiers; i++){
        this->_nbClients += this->_caissiers[i].nbClients();
    }

    return this->_nbClients;
}

/**
 * @brief Getter du nombre de caissiers dans la banque
 *
 */
vector<Caissier> Banque::caissiers(){
    return this->_caissiers;
}

/**
 * @brief Méthode pour retourner le premier caissier libre dans la file d'attente
 *
 * @return l'index du caissier libre
 */
Caissier Banque::premierCaissierLibre(){
        for (int i = 0; i < this->_nbCaissiers; i++){
        if (this->_caissiers[i].estLibre()){
            cout << "Caissier numéro" << i + 1 << " est libre" << endl;
            return this->_caissiers[i];
        }
    }
    cout << "Aucun caissier libre !" << endl;
    return 0;
}
