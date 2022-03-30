#ifndef BANQUE_H
#define BANQUE_H

#include <vector>

#include "Caissier.h"
//#include "FileAttente.h"
#include "SED.h"


using namespace std;

class Banque : public SED
{
    public:
        Banque(int _nbCaissiers, double _dureePrevue, double tempsService );

        double dureePrevue();
        int nbCaissiers();
        double dureeReelle();
        int nbClients();
        vector<Caissier> caissiers();
        Caissier premierCaissierLibre();

    protected:

    private:
        double _dureePrevue;
        int _nbCaissiers;
        double _dureeReelle;
        int _nbClients;
        vector<Caissier> _caissiers;

};


#endif // BANQUE_H