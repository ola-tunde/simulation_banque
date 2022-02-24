#ifndef BANQUE_H
#define BANQUE_H

#include "Caissier.h"

class Banque
{
    public:
        Banque();
        double dureePrevue();
        int nbCaissiers();
        double dureeReelle();
        int nbClients();
        Caissier premierCaissierLibre();
        
    protected:
       
    private:

};


#endif // BANQUE_H