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
#include "Caissier.h"
#include "Banque.h"

/**
 * @brief Constructeur de la classe FinService
 * @param heure heure de l'événement
 * @param banque référence sur la banque
 */
class FinService : public Evenement
{
    public:
        FinService(Caissier* caissier, double _heure, Banque *banque);
        void traiter();

    private:
        Caissier *caissier;
        

};


#endif // FINSERVICE_H