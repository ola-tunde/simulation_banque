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

#include "Evenement.h"
#include "Banque.h"

class Banque;
class Arrivee : public Evenement
{
    public:
        Arrivee(double _heure, Banque *_banque);
        void traiter();
    protected:
    private: 
        Banque *_banque;
};


#endif // ARRIVEE_H