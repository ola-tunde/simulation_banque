#ifndef FILEATTENTE_H
#define FILEATTENTE_H

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
        int nbClients;
        int longueurMax;
        double longueurMoyenne;
        double tempsMoyenAttente;
        Client tab[longueurMax];
};



#endif // FILEATTENTE_H