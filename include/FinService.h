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

/**
 * @brief Constructeur de la classe FinService
 * @param heure heure de l'événement
 * @param banque référence sur la banque
 */
class FinService : public Evenement
{
    public:
        FinService(Caissier *caissier, double heure, Client *client);
        void traiter();

    private:
        Caissier* _caissier;
        Client* _client;
        

};


#endif // FINSERVICE_H