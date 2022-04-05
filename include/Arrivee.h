/**
 * @file Arrivee.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Arrivee des clients
 * @version 0.1
 * @date 2022-03-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef ARRIVEE_H
#define ARRIVEE_H

#include "Banque.h"
#include "Evenement.h"
#include "Poisson.h"

class Banque;

class Arrivee : public Evenement {
  public:
    /**
     * @brief Constructeur de la classe Arrivee
     *
     * @param heure l'heure de l'arrivée du client
     * @param banque la banque
     */
    Arrivee(double _heure, Banque* _banque);
    
    /** 
     * @brief Méthode qui permet de traiter l'arrivée d'un client
     * 
     */
    void traiter();

  private:
    Banque* _banque;
};

#endif // ARRIVEE_H
