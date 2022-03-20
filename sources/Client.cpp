#include "../headers/Client.h"

#include <iostream>
using namespace std;

Client::Client(double heure){
    this->_heureArrivee = heure;
}

//TODO heure arrivée (Client)
double Client::heureArrivee(){
    return _heureArrivee;
}

double Client::heureDepart(){
    return _heureDepart;
}