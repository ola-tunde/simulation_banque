
#include <iostream>
#include <string>
#include "include/Banque.h"

/**
 * @file main.cpp
 * @brief simulation de la banque
 * 
 * @param argc nombre d'arguments
 * @param argv tableau d'arguments
 */

using namespace std;

int main(int argc , char *argv[]){
    int nbCaissiers = 2;
    double dureePrevue = 5;
    vector<double> tempsService = {1, 1};
    double tempsMoyenArrivee = 1;

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-dp") == 0) {
            dureePrevue = stoi(argv[i + 1]);
        }
        else if (strcmp(argv[i], "-nc") == 0)
        {
            nbCaissiers = stoi(argv[i + 1]);
        }
        else if (strcmp(argv[i], "-ts") == 0) 
        {
            for (int j = 0; j < nbCaissiers; j++)
            {
                if (i + j < argc)
                {
                    tempsMoyenService.push_back(stod(argv[i + j]));
                }
                else
                {
                    cerr << "usage: " << *argv << " [ -dp duree ] [[ -nc nbCaissiers ] -ts temps1...tempsN ] [ -ta tempsArrivees ]\n";
                    exit(1);
                }
            }
        }
        else if (strcmp(argv[i], "-ta") == 0) // temps entre arrivée
        {
            tempsMoyenArrivee = stod(argv[i + 1]);
        }
    }

    /**
     * @brief création de la banque
     * 
     * @param _nbCaissiers le nombre de caissiers dans la banque
     * @param _dureePrevue la durée prévue de la simulation
     * @param tempsService la collection des temps de service de chaque caissier
     * @param tempsMoyenArrivee le temps moyen d'arrivée d'un client
     */
    Banque banque(nbCaissiers, dureePrevue, tempsService, tempsMoyenArrivee);
    banque.lancer();
    cout << "Durée réelle de simulation : " << banque.dureeReelle() << endl ;
    cout << "Nombre total de clients servis :" << banque.nbClients() << endl;
    for (int i = 0; i < nbCaissiers; i++)
    {
        cout << "\nCaissier " << i + 1 << " :" << endl;
        cout << "  Nombre de clients servis : " << banque.caissiers(i)->nbClients() << endl;
        cout << "  Taux d'occupation : " << banque.caissiers(i)->tauxOccupation() << endl;
        cout << "  Taux moyen de service : " << banque.caissiers(i)->tempsMoyenService() << endl;
    }
    cout << "\nFile d'attente :\n  Longueur moyenne : " << banque.fileAttente()->longueurMoyenne() << endl;
    cout << "  Longueur maximale : " << banque.fileAttente()->longueurMax() << endl;
    cout << "  Temps moyen d'attente : " << banque.fileAttente()->tempsMoyenAttente() << endl;
}

    return 0;
}

