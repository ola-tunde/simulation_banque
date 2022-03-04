#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include "Client.h"

class FileAttente
{
    public:
        FileAttente();
        FileAttente(int _longueurMax);

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
        Client tab[_longueurMax];
        Client tab[_nbClients];
};



#endif // FILEATTENTE_H