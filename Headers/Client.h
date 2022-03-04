#ifndef CLIENT_H
#define CLIENT_H

class Client
{
    public:
        Client(double heure);
        
        double heureArrivee();
        
    protected:
       
    private:
        double _heureArrivee;
};


#endif // CLIENT_H
