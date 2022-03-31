/**
 * @file Client.h
 * @author Jean-Philippe Afouda & Emil Raducanu
 * @brief Classe Client 
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CLIENT_H
#define CLIENT_H

using namespace std;
class Client
{
    public:
        /**
         * @brief Constructeur de la classe Client
         * 
         * @param _tempsArrivee qui identifie chaque client
         */
        Client(double _heureArrivee);
        /**
         * @brief Getter de l'heure d'arrivée du client
         * 
         */
        double heureArrivee();

        /**
         * @brief Destructeur de la classe Client
         * 
         */
        ~Client();

       
    private:
        /**
         * @brief heure d'arrivée du client
         * 
         */
        double _heureArrivee;
        
};


#endif // CLIENT_H
