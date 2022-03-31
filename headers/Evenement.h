#ifndef EVENEMENT_H
#define EVENEMENT_H

//#include "SED.h"

class Evenement
{
    public:  
        Evenement(double _heure);  //TODO ajouter une SED
        double heure();
        virtual void traiter();
    protected:
       
    private:
        double _heure;
};


#endif // EVENEMENT_H