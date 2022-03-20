#ifndef SED_H
#define SED_H

#include <queue>

#include "Evenement.h"

class SED
{
    public:
        SED();

        void ajouter (Evenement e);
        void lancer();
        double heure();
        
    protected:
        queue<Evenement> _evenements;
        double _heure;
       
    private:
        
};


#endif // SED_H