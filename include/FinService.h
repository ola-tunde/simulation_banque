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

class Caissier;
class FinService : public Evenement
{
    public:
    /**
    * @brief Constructeur de la classe FinService
    * @param heure heure de l'événement
    * @param banque référence sur la banque
    */
    FinService(Caissier *caissier, double heure, Client *client);
    
    /** 
     * @brief Méthode qui permet de traiter la fin de service d'un caissier
     * 
     * @details Rend le caissier libre
     */
    void traiter();

    private:
    
        Caissier* _caissier;
        Client* _client;
        

};


#endif // FINSERVICE_H