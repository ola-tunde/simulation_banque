#ifndef ARRIVEE_H
#define ARRIVEE_H

#include "Evenement.h"
#include "Banque.h"

class Arrivee : public Evenement
{
    public:
        Arrivee(double _heure,const Banque &banque);
    protected:
    private:
        void traiter();
        double _heure;
        Banque &banque;   
};


#endif // ARRIVEE_H