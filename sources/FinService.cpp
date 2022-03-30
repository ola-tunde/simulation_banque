#include "../headers/FinService.h"

#include <iostream>
using namespace std;

FinService::FinService(double _heure,Client client, Caissier caissier, Banque banque): Evenement(_heure){}


void FinService::traiter(){
    cout << "Fin de service" << endl;
} 