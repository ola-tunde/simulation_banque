#include "../headers/Arrivee.h"
#include "../headers/Banque.h"

#include <iostream>
using namespace std;

Arrivee::Arrivee(double _heure, Banque *_banque)  {
    this->_heure =  _heure;
    this->_banque = _banque;
}

    
void Arrivee::traiter(){
    Client _client = Client(_heure);
    Caissier* _caissier = _banque.premierCaissierLibre();
    if (_banque->heure() < _banque->dureePrevue()){
        this->_heure = _banque->tempsEntreArrivees() + this->_heure;
        _banque->setHeure(this->_heure);
        _banque->getEvenements().push_back(&(new Arrivee(this->_heure, this->_banque)));
    }
    if (_caissier != NULL){
        _banque-
    }
    else{
        _caissier->servir(_client);
    }
}

 // TODO classe Arrivee qui va créer un nouveau client et l'ajouter à la file d'attente