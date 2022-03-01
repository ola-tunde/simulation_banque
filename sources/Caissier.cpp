#include "Caissier.h"


#include <iostream>
using namespace std;

Caissier::Caissier(){}

double Caissier::tempsMoyenService(){
    return tempsMoyenService;
}

int Caissier::nbClients(){
    return nbClients;
}

double Caissier::tauxOccupation(){
    return tauxOccupation;
}

// void Caissier::servir (Client c){} 

// bool Caissier::estLibre(){} //Libre s'il a fini de servir un client

// void Caissier::attendre(){} 
