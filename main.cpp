#include <iostream>
#include "headers/SED.h"


using namespace std;

int main(int argc, char **argv){
    SED.lancer();
}


//TODO refaire le makefile avec ceci comme exemple
/*
    POSTE : Courrier.o Lettre.o Colis.o Sac.o poste.o

    poste : $(POSTE)
        c++ -o poste $(POSTE)

    Courrier.o : Courrier.h
    Lettre.o : Courrier.h Lettre.h 
    Colis.o : Courrier.h Colis.h
    Sac.o : Courrierh Sac.h 
    poste.o : Courrier.h Lettre.h Colis.h Sac.h 
*/