#ifndef CAISSIER_H
#define CAISSIER_H

class Caissier
{
    public:
        Caissier();
        double tempsMoyenService();
        int nbClients();
        double tauxOccupation();
        bool estLibre();
        void servir (Client c);
        
    protected:
       
    private:

};


#endif // CAISSIER_H