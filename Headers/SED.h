#ifndef SED_H
#define SED_H

class SED
{
    public:
        SED();

        void ajouter (Evenement e);
        void lancer();
        double heure();
        
    protected:
        Evenement tab[];
        double heure;
       
    private:
        
};


#endif // SED_H