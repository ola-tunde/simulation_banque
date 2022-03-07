#include "../headers/Client.h"

#include <iostream>
using namespace std;

Client::Client(double heure){
    _heureArrivee = heure;
}
//TODO heure arrivée
double Client::heureArrivee(){
    return _heureArrivee;
}