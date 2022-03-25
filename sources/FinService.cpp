#include "../headers/FinService.h"

#include <iostream>
using namespace std;

FinService::FinService(): Evenement{}


void FinService::traiter(){
    cout << "Fin de service" << endl;
}