#ifndef CLIENT_H
#define CLIENT_H

class Client
{
    public:
        Client(double heure);
        
        double heureArrivee();
        double heureDepart();
        
    protected:
       
    private:
        double _heureArrivee;
        double _heureDepart;
};


#endif // CLIENT_H
