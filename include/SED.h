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
class SED
{
    public:
        SED();

        void ajouter (Evenement *e);
        void lancer();
        double heure();
        void setheure(double _heure);
        
    protected:
        vector<Evenement *> _evenements;
        double _heure;
       
    private:
        
};


#endif // SED_H