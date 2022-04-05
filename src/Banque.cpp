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
 * @param vector<double> tempsService la collection des temps de service de
 * chaque caissier
 * @param tempsService le temps de service de chaque caissier
 */
Banque::Banque(double _dureePrevue, vector<double> tempsService,
               double tempsMoyenArrivee) {

    _generateur->init(this->_tempsMoyenArrivee);
    this->_fileAttente = new FileAttente(tempsMoyenArrivee, this);
    this->_tempsMoyenArrivee = tempsMoyenArrivee;
    this->_dureePrevue = _dureePrevue;
    this->_nbClients = 0;

    for (size_t i = 0; i < tempsService.size(); i++) {
        _caissiers.push_back(new Caissier(tempsService[i], this));
    }

    _evenements.push_back(new Arrivee(this->prochainDelaiArrivee(), this));
}

/**
 * @brief Getter de la durée prévue de la simulation
 *
 */
double Banque::dureePrevue() { return this->_dureePrevue; }

/**
 * @brief Getter de la durée réelle de la simulation
 *
 */
double Banque::dureeReelle() { return this->_heure; }

/**
 * @brief Getter du nombre de caissiers dans la banque
 *
 */
int Banque::nbCaissiers() { return this->_caissiers.size(); }

/**
 * @brief Getter pour retourner les objets de la classe Caissier
 *
 */
int Banque::nbClients() {
    this->_nbClients = 0;

    for (size_t i = 0; i < this->_caissiers.size(); i++) {
        this->_nbClients += _caissiers[i]->nbClients();
    }

    return this->_nbClients;
}

/**
 * @brief collection de tous les événements de la simulation
 *
 * @return vector<Evenement*>
 *
 */
vector<Evenement*>& Banque::evenements() { return _evenements; }

/**
 * @brief Méthode pour retourner le premier caissier libre dans la file
 * d'attente
 *
 * @return l'index du caissier libre
 */
Caissier* Banque::premierCaissierLibre() {
    size_t i = 0;

<<<<<<< HEAD
    while (i < this->_caissiers.size()) {
        if (_caissiers[i]->estLibre()) {
=======
    while (i < this->_caissiers.size() ){

        //cout << "Caissier " << i << " est libre " << _caissiers[i]->estLibre()<< endl;
        
        if (_caissiers[i]->estLibre()){
            //cout << "Index : " << i << endl;
>>>>>>> 8c49c7ab8ee1d8ebb82f71fc22757d17256bf057
            return _caissiers[i];
        }
        i++;
    }
    return NULL;
}

/**
 * @brief Méthode pour retourner la référence de la file d'attente
 *
 */
FileAttente* Banque::fileAttente() { return this->_fileAttente; }

/**
 * @brief Méthode pour retourner le temps entre chaque arrivée
 *
 */
double Banque::prochainDelaiArrivee() {
    // double next =
    //     this->_generateur->next(this->fileAttente()->tempsEntreArrivees());

    // this->_heure += next;

    this->_generateur->init(this->_tempsMoyenArrivee);

    return this->_generateur->next(this->fileAttente()->tempsEntreArrivees());
}

Caissier* Banque::caissier(int i) { return this->_caissiers[i]; }

/**
 * @brief Destructeur de la classe Banque
 *
 */
Banque::~Banque() {
    delete _fileAttente;

    for (size_t i = 0; i < this->_caissiers.size() - 1; i++) {
        delete this->_caissiers[i];
    }
    _caissiers.clear();
}

void Banque::lancer() {

    while (!this->_evenements.empty()) {
        int index = 0;
        double debut = this->_evenements[0]->heure();

        for (size_t i = 0; i < this->_evenements.size(); i++) { // a1,s2
            if (debut > this->_evenements[i]->heure()) {
                debut = this->_evenements[i]->heure();
                index = i;
            }
        }

        Evenement* evenement = this->_evenements[index];

        evenement->traiter();

        this->_heure = evenement->heure();

        evenement->~Evenement();
        this->_evenements.erase(this->_evenements.begin() + index);
    }
}
