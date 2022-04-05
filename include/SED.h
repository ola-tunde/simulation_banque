/**
 * @file SED.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe SED de la simulation d'événements discrets
 * @version 0.1
 * @date 2022-03-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SED_H
#define SED_H

#include <vector>

#include "Evenement.h"

using namespace std;
class SED {
  public:
    /**
    * @brief Constructeur de la classe SED
    */
    SED();

    /**
     * @brief Méthode d'ajout d'évènement
     * 
     * @param e 
     */
    void ajouter(Evenement* e);

    /**
     * @brief Méthode de traitement d'évènement discrets
     * 
     */
    void lancer();

    /**
     * @brief Méthode de récupération de l'heure courante
     * 
     */
    double heure();

  protected:
  /**
   * @brief collection d'évènements
   * 
   */
    vector<Evenement*> _evenements;

    /**
     * @brief heure courante
     * 
     */
    double _heure;

  private:
};

#endif // SED_H
