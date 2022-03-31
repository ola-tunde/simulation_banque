#ifndef SED_H
#define SED_H

#include <vector>

#include "Evenement.h"
using namespace std;
class SED
{
    public:
        SED();

        void ajouter (Evenement *e);
        void lancer();
        double heure();
        void setheure(double _heure);
        
    protected:
        vector<Evenement *> _evenements;
        double _heure;
       
    private:
        
};


#endif // SED_H