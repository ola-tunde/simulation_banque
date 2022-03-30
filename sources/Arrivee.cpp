#include "../headers/Arrivee.h"
#include "../headers/Client.h"
#include "../headers/Caissier.h"
#include "../headers/Banque.h"

#include <iostream>
using namespace std;

Arrivee::Arrivee(double _heure, const Banque &banque) : Evenement (_heure) {
    this->_heure =  _heure;
}

void Arrivee::traiter(){
    Client* client = new Client(_heure);
    Caissier* caissier = banque.premierCaissierLibre();
    if (caissier != NULL){
        banque->fileAttente()->ajouter(client);
    }
    else{
       caissier->servir(client);
    }
}

 // TODO classe Arrivee qui va créer un nouveau client et l'ajouter à la file d'attente