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
#include "Client.h"
#include "FileAttente.h"
#include "FinService.h"
#include "Poisson.h"

class Banque;

class Caissier {
  public:
    /**
     * @brief Constructeur de la classe Caissier
     *
     * @param tempsMoyenService par simulation de banque
     * @param banque dans laquelle le caissier travaille
     */
    Caissier(double tempsMoyenService, Banque* banque);

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
     * @param c la référence sur le client à servir
     *
     */
    void servir(Client* c);

    /**
     * @brief attendre un client s'il est libre
     *
     */
    void attendre();

  protected:
  private:
    /**
     * @brief référence sur la banque du caissier
     *
     */
    Banque* banque;

    /**
     * @brief nombre de clients servi par le caissier
     *
     */
    int _nbClients;

    /**
     * @brief temps d'attente du caissier
     *
     * @return true si le caissier est libre
     *
     */
    bool _estLibre;

    /**
     * @brief collection de ses temps de service
     *
     */
    vector<double> _tempsMoyenService;

    /**
     * @brief générateur de nombre aléatoire
     *
     */
    Poisson* _generateur;

    /**
     * @brief temps de service en entrée
     *
     */
    double _tempsService;
};

#endif // CAISSIER_H
