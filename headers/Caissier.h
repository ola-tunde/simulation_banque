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

#include "Banque.h"
#include "FileAttente.h"
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
        Caissier(double _tempsMoyenService, Banque *banque);

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

        /**
         * @brief vérifie si le caissier est libre
         * 
         * @return true si le caissier est libre
         */
        bool estLibre();

        /**
         * @brief servir un client
         * 
         * @param c 
         */
        void servir(Client *c);

        /**
         * @brief attendre un client s'il est libre
         * 
         */
        void attendre();

    protected:
    private:
        Banque *banque;
        double _tempsMoyenService;
        int _nbClients;
        double _tauxOccupation;
        bool _estLibre; 
        vector<double>_tempsService;
};

#endif // CAISSIER_H