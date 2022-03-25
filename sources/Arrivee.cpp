#include "../headers/Arrivee.h"

#include <iostream>
using namespace std;

Arrivee::Arrivee(): Evenement(){}

void Arrivee::traiter(){
    cout << "Arrivée" << endl;
}
