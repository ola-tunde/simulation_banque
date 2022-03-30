/**
 * @file Banque.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Banque
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef BANQUE_H
#define BANQUE_H

#include <vector>

#include "Caissier.h"
#include "SED.h"


using namespace std;

class Banque : public SED
{
    public:
        /**
         * @brief Constructeur de la classe Banque
         * 
         * @param _nbCaissiers le nombre de caissiers dans la banque
         * @param _dureePrevue la durée prévue de la simulation
         * @param tempsService le temps de service de chaque caissier
         */
        Banque(int _nbCaissiers, double _dureePrevue, double tempsService );

        /**
         * @brief Getter de la durée prévue de la simulation
         *  
         */
        double dureePrevue();

        /**
         * @brief Getter du nombre de caissiers dans la banque
         * 
         */
        int nbCaissiers();

        /**
         * @brief Getter de la durée réelle de la simulation
         * 
         */
        double dureeReelle();

        /**
         * @brief Getter du nombre de clients total 
         * 
         */
        int nbClients();

        /**
         * @brief Getter pour retourner les objets de la classe Caissier
         * 
         */
        vector<Caissier> caissiers();

        /**
         * @brief Méthode pour retourner le premier caissier libre dans la file d'attente
         * 
         */
        Caissier premierCaissierLibre();

    protected:

    private:
        /**
         * @brief durée prévue de la simulation
         * 
         */
        double _dureePrevue;

        /**
         * @brief nombre de caissiers de la banque 
         * 
         */
        int _nbCaissiers;

        /**
         * @brief durée réelle de la simulation
         * 
         */
        double _dureeReelle;

        /**
         * @brief nombre de clients total 
         * 
         */
        int _nbClients;

        /**
         * @brief ensemble de caissiers dans la banque
         * 
         */
        vector<Caissier> _caissiers;

};


#endif // BANQUE_H