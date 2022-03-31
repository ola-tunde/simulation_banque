#ifndef FINSERVICE_H
#define FINSERVICE_H

#include "Evenement.h"
#include "Client.h"
#include "Caissier.h"
#include "Banque.h"


class FinService : public Evenement
{
    public:
        FinService(double _heure,Client client, Caissier caissier, Banque banque);
    protected:
    private:
        void traiter();

};


#endif // FINSERVICE_H