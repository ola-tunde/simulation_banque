#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <iostream>
#include <queue> 
//#include <ctime>

using namespace std;

#include "Client.h"


class FileAttente
{
    public:
        FileAttente(double _tempsEntreArrivees);

        double tempsEntreArrivees();
        unsigned int longueurMax();
        double longueurMoyenne();
        double tempsMoyenAttente();
        void ajouter(Client c);
        Client retirer();
        bool estVide();
        queue<Client> clients();

    protected: 

    private:
        unsigned int _longueurMax;
        double _longueurMoyenne;
        double _tempsMoyenAttente;
        double _tempsEntreArrivees;
        
        queue<Client> _clients; 
};


#endif // FILEATTENTE_H