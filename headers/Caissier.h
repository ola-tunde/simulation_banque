/**
 * @file Caissier.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Caissier
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef CAISSIER_H
#define CAISSIER_H

#include "Client.h"
#include "FileAttente.h"


class Caissier
{
    public:
    /**
     * @brief Constructeur de la classe Caissier
     * 
     * @param _tempsMoyenService 
     */
        Caissier(double _tempsMoyenService);//TODO rajouter un pointeur sur la banque

    /**
     * @brief Getter du temps moyen de service du caissier
     * 
     */
        double tempsMoyenService();

        /**
         * @brief Getter du nombre de clients servi par caissier 
         * 
         */
        int nbClients();
        
        /**
         * @brief Getter du taux d'occupation de chaque caissier
         * 
         */
        double tauxOccupation();

        bool estLibre();
        void servir(Client c);
        void attendre();

    protected:
    private:
        double _tempsMoyenService;
        int _nbClients;
        double _tauxOccupation;
        bool _estLibre; 
};

#endif // CAISSIER_H