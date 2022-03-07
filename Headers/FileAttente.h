
#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <queue> 
#include <iostream>

using namespace std;

#include "Client.h"


class FileAttente
{
    public:
        FileAttente();

        double tempsEntreArrivees();
        int longueurMax();
        double longueurMoyenne();
        double tempsMoyenAttente();
        void ajouter(Client c);
        Client retirer();
        bool estVide();

    protected: 

    private:
        int _nbClients; 
        int _longueurMax;
        double _longueurMoyenne;
        double _tempsMoyenAttente;
        queue<Client> clients; 
};


#endif // FILEATTENTE_H