#include <iostream>
#include "headers/Banque.h"
#include "headers/Client.h"
#include "headers/Caissier.h"
#include "headers/FileAttente.h"
#include "headers/SED.h"


using namespace std;

int main(int argc, char **argv){
    int duree, nombreCaissiers, tempsService, tempsArrivee;
    SED simulation;
    simulation.lancer();
    cout << "Bienvenue à la simulation de banque" << endl;
    cout << "Il est " << simulation.heure() << endl;
    cout << "Durée prévue de la simulation : ";
    cin >> duree;
    cout <<" " << endl;
    cout << "Nombre de caissiers : " ;
    cin >> nombreCaissiers;
    cout <<" " << endl;
    Banque banque(nombreCaissiers, duree);

    cout << "Temps de service de chaque caissier : " ;
    cin >> tempsService;
    cout <<" " << endl;
    Caissier caissier;
    caissier(tempsService);

    cout << "Temps entre deux arrivées : ";
    cin >> tempsArrivee;
    FileAttente fileAttente;
    fileAttente(tempsArrivee);

    cout << "Fin de la simulation :"  ;





    return 0;
}

