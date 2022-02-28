#include "../Headers/Client.h"

#include <iostream>
using namespace std;

Client::Client(double heure){
    this.heureArrivee = heure;
}

double Client::heureArrivee(){
    return heureArrivee;
}