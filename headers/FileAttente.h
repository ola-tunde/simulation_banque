#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <iostream>
#include <queue> 
//#include <ctime>

using namespace std;

#include <vector>

#include "Client.h"


class FileAttente
{
    public:
        FileAttente(double _tempsEntreArrivees);

        unsigned int longueurMax();
        double longueurMoyenne();
        double tempsMoyenAttente();
        double tempsEntreArrivees();
        void ajouter(Client c);
        Client retirer();
        bool estVide();
        vector<Client> clients();

    protected: 

    private:
        unsigned int _longueurMax;
        double _longueurMoyenne;
        double _tempsMoyenAttente;
        double _tempsEntreArrivees;
        vector<Client> _clients; 
};


#endif // FILEATTENTE_H