#ifndef ARRIVEE_H
#define ARRIVEE_H

#include "Evenement.h"
#include "Banque.h"

class Banque;

class Arrivee : public Evenement
{
    public:
        Arrivee(double _heure, Banque *_banque);
        void traiter();
    protected:
    private:
        double _heure;  
        Banque *_banque;
};


#endif // ARRIVEE_H