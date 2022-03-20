#ifndef BANQUE_H
#define BANQUE_H

#include "Caissier.h"
//#include "FileAttente.h"
//#include "SED.h"

class Banque /*: public SED*/
{
    public:
        Banque();
        Banque(int _nbCaissiers, double _dureePrevue);

        double dureePrevue();
        int nbCaissiers();
        double dureeReelle();
        int nbClients();
        Caissier* premierCaissierLibre();
        
    protected:
       
    private:
        double _dureePrevue;
        int _nbCaissiers;
        double _dureeReelle;
        int _nbClients; 
        Caissier* caissiers; 
        
};


#endif // BANQUE_H