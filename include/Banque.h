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
#include "FileAttente.h"
#include "Evenement.h"
#include "Arrivee.h"
#include "SED.h"
#include "Poisson.h"


using namespace std;
class FileAttente;
class Caissier;
class Banque : public SED
{
    public:
        /**
         * @brief Constructeur de la classe Banque
         * 
         * @param _nbCaissiers le nombre de caissiers dans la banque
         * @param _dureePrevue la durée prévue de la simulation
         * @param vector<double> tempsService la collection des temps de service de chaque caissier
         * @param tempsService le temps de service de chaque caissier
         */
        Banque(int _nbCaissiers, double _dureePrevue, vector<double> tempsService, double tempsMoyenArrivee);

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
         * @brief Méthode pour retourner la référence du premier caissier libre par ordre croissant
         * 
         */
        Caissier* premierCaissierLibre();

        /**
         * @brief Méthode pour retourner la référence de la file d'attente
         * 
         */
        FileAttente *fileAttente();

        /**
        * @brief collection de tous les événements de la simulation
        *
        */
        vector<Evenement*> evenements();
        
        /**
        * @brief Méthode pour retourner le temps entre chaque arrivée
        *
         */
        double tpsEntreArrivees();
        
        /**
         * @brief Méthode pour revoyer le caissier courant
         * 
         * @param i 
         * @return la référence du caissier à l'index @param i 
         */
        Caissier *caissier(int i);

        /**
         * @brief Destructeur de la classe Banque
         * 
         */
        ~Banque();

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
        vector<Caissier *> _caissiers;

        /**
         * @brief file d'attente de la banque
         * 
         */
        FileAttente *_fileAttente;

        /**
         * @brief générateur de nombres aléatoires
         * 
         */
        Poisson *_generateur;

        double _tempsMoyenArrivee;


};


#endif // BANQUE_H