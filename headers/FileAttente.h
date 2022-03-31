/**
 * @file FileAttente.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe FileAttente 
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef FILEATTENTE_H
#define FILEATTENTE_H

#include <iostream>
#include <vector> 
#include <numeric> 

#include "Client.h"
#include "Banque.h"

using namespace std;
class Banque;
class FileAttente
{
    public:
        /**
         * @brief Constructeur de la classe FileAttente
         * 
         * @param _tempsEntreArrivee qui automatise l'arrivée des clients
         */
        FileAttente(double _tempsEntreArrivees, Banque *_banque);//TODO rajouter un pointeur sur la banque

        /**
         * @brief Getter de la longueur Max de la file d'attente
         * 
         */
        unsigned int longueurMax();
        
        /**
         * @brief Getter de la longueur moyenne de la file d'attente
         * 
         */
        double longueurMoyenne();

        /**
         * @brief Getter du temps moyen d'attente dans la file d'attente
         * 
         */
        double tempsMoyenAttente();

        /**
         * @brief Getter du temps entre les arrivées dans la file d'attente
         * 
         */
        double tempsEntreArrivees();

        /**
         * @brief Méthode pour ajouter un client dans la file d'attente
         * 
         * @param c Client à ajouter
         */
        void ajouter(Client *c);

        /**
         * @brief Méthode pour retirer un client de la file d'attente
         * et renvoie la référence du client retiré
         */
        Client* retirer();

        /**
         * @brief Méthode pour vérifier si la file d'attente est vide
         * 
         */
        bool estVide();

        /**
         * @brief Getter pour retourner les objets de la classe FileAttente
         * 
         */
        vector<Client> clients();

    protected: 

    private:
        /**
         * @brief longueur maximum de la file d'attente
         * 
         */
        unsigned int _longueurMax;

        /**
         * @brief longueur moyenne de la file d'attente
         * 
         */
        double _longueurMoyenne;

        /**
         * @brief temps moyen d'attente dans la file d'attente
         * 
         */
        double _tempsMoyenAttente;

        /**
         * @brief temps entre les arrivées dans la file d'attente
         * 
         */
        double _tempsEntreArrivees;

        /**
         * @brief liste des clients dans la file d'attente
         * 
         */
        vector<Client*> _clients; 

        /**
         * @brief pointeur sur le dernier temps d'arrivée
         * 
         */
        double _last;

        /**
         * @brief intégrale sur les temps d'attente
         * 
         */
        double _aire;

        /**
         * @brief collection des temps d'attente 
         * 
         */
        vector<double> _tempsAttente;

        /**
         * @brief référence sur la banque qui contient la file d'attente
         * 
         */
        Banque *_banque;
};


#endif // FILEATTENTE_H