#ifndef FINSERVICE_H
#define FINSERVICE_H

#include "Evenement.h"

class FinService : public Evenement
{
    public:
        FinService();
    protected:
    private:
        void traiter();

};


#endif // FINSERVICE_H