#include "../headers/Caissier.h"
#include "../headers/Client.h"


#include <iostream>
using namespace std;

Caissier::Caissier(){
    _nbclients = 0;
    _tempsMoyenService = 0;
    
}

double Caissier::tempsMoyenService(){
    return _tempsMoyenService;
}

int Caissier::nbClients(){
    return _nbClients;
}

double Caissier::tauxOccupation(){
    return _tauxOccupation;
}

void Caissier::servir (Client c){
    cout << "Client servi" << endl;
    delete c;
    _nbclients++;
} 

// bool Caissier::estLibre(){} //Libre s'il a fini de servir un client

// void Caissier::attendre(){} 

//[o, x, o, x, x, x, x, x, x, x, x]