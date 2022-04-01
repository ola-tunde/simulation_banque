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
#include "../include/Banque.h"

#include <iostream>
using namespace std;
/**
* @brief Constructeur de la classe Banque
* 
* @param _nbCaissiers le nombre de caissiers dans la banque
* @param _dureePrevue la durée prévue de la simulation
* @param vector<double> tempsService la collection des temps de service de chaque caissier
* @param tempsService le temps de service de chaque caissier
*/
Banque::Banque(int _nbCaissiers, double _dureePrevue, vector<double> tempsService, double tempsMoyenArrivee) {
    //FIXME comment utiliser poisson pour générer
    _generateur->init();
    //Poisson *_generateur = new Poisson(tempsMoyenArrivee);
    this->_fileAttente = new FileAttente(tempsMoyenArrivee, this);
    this->_dureePrevue = _dureePrevue;
    this->_nbCaissiers = _nbCaissiers;
    this->_nbClients = 1;

    _evenements.push_back(new Arrivee(this->tempsEntreArrivees(), this));
    
    for (int i = 0; i < tempsService.size(); i++){
        _caissiers.push_back(new Caissier(tempsService[i],this));
    }
}

/**
 * @brief Getter de la durée prévue de la simulation
 *
 */
double Banque::dureePrevue(){
    return this->_heure;
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
    return this->_caissiers.size();
}

/**
 * @brief Getter pour retourner les objets de la classe Caissier
 *
 */
int Banque::nbClients(){
    this->_nbClients = 0;

    for (int i = 0; i < this->_caissiers.size(); i++){
        this->_nbClients += _caissiers[i]->nbClients();
    }

    return this->_nbClients;
}

/**
 * @brief collection de tous les événements de la simulation
 *
 */
vector<Evenement*> Banque::evenements(){
    return _evenements;   
}

/**
 * @brief Méthode pour retourner le premier caissier libre dans la file d'attente
 *
 * @return l'index du caissier libre
 */
Caissier* Banque::premierCaissierLibre(){
    for (int i = 0; i < this->_caissiers.size() -1 ; i++){
        if (_caissiers[i]->estLibre()){
            return *(_caissiers[i]);
        }
    }
    return NULL;
}

/**
* @brief Méthode pour retourner la référence de la file d'attente
* 
*/
FileAttente *Banque::fileAttente(){
    return this->_fileAttente;
}

/**
 * @brief Méthode pour retourner le temps entre chaque arrivée
 *
 */
double tpsEntreArrivees(){
    //FIXME comment utiliser poisson pour générer
    return _generateur->next(FileAttente::tempsEntreArrivees());
}

/**
* @brief Destructeur de la classe Banque
* 
*/
Banque::~Banque(){
    delete _fileAttente;
    delete _generateur;

    for (int i = 0; i < this->_caissiers.size()-1; i++){
        delete this->_caissiers[i];
    }
    _caissiers.clear();
}