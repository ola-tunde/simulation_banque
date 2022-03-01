#include "FileAttente.h"
#include "Client.h"


#include <iostream>
using namespace std;

FileAttente::FileAttente(){
    longueurMax = 1;
    nbClients = 0;
}

FileAttente::FileAttente(int longueurMax){
    this.longueurMax = longueurMax;
    nbClients = 0;

}

int FileAttente::longueurMax(){
    return longueurMax;
}

double FileAttente::longueurMoyenne(){
    return longueurMoyenne;
}

double FileAttente::tempsMoyenAttente(){
    return tempsMoyenAttente;
}

//double FileAttente::tempsEntreArrivees(){}


void FileAttente::ajouter(Client c) {
    if (nbClients < longueurMax) {
        tab[nbClients] = c;
        nbClients++;
    }

}

//Client FileAttente::retirer(){}

bool FileAttente::estVide(){
    if (tab == NULL)
        return true;
    else return false;
}

