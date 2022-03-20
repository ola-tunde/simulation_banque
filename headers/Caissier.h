#ifndef CAISSIER_H
#define CAISSIER_H

#include "Client.h"
#include "FileAttente.h"

class Caissier
{
    public:
        Caissier(double _tempsMoyenService);

        double tempsMoyenService();
        int nbClients();
        double tauxOccupation();
        bool estLibre();
        void servir(Client c);
        void attendre();

    protected:
    private:
        double _tempsMoyenService;
        int _nbClients;
        double _tauxOccupation;
        bool _estLibre; 
};

#endif // CAISSIER_H