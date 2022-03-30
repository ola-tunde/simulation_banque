#include "../headers/Caissier.h"


#include <iostream>
using namespace std;

Caissier::Caissier(double _tempsMoyenService){
    this->_nbClients = 0;
    this->_estLibre = true;
    this->_tempsMoyenService = _tempsMoyenService;
    
}

double Caissier::tempsMoyenService(){
    return this->_tempsMoyenService;
}

int Caissier::nbClients(){
    return this->_nbClients;
}

double Caissier::tauxOccupation(){
    return this->_tauxOccupation;
}

bool Caissier::estLibre(){
    return this->_estLibre;
} 

void Caissier::servir (Client c){
    cout << "Client servi" << endl;
    delete &c;
    this->_nbClients++;
} 
 
void Caissier::attendre(){
    cout << "Attendre..." << endl;
    
}