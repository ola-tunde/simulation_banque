/**
 * @file FinService.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe FinService de gestion de fin de service des caissiers
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */


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