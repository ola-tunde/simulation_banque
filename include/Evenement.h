/**
 * @file Evenement.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe abstraite de gestion d'événènements
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef EVENEMENT_H
#define EVENEMENT_H


class Evenement
{
    public:  
        double heure();
        virtual void traiter();
    protected:
       
    private:
        double _heure;
};


#endif // EVENEMENT_H