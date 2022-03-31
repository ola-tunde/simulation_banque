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