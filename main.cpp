// TODO commentaire doxygen
// TODO afficher les caractères spéciaux sous utf8
#include <iostream>
#include "headers/Banque.h"
#include "headers/Client.h"
#include "headers/Caissier.h"
#include "headers/FileAttente.h"
#include "headers/SED.h"


using namespace std;

int main(){
    Client c1(2.0);
    cout << c1.heureArrivee() << endl;

    FileAttente f1(2.1);
    
    cout << f1.estVide() << endl;
    /*
    int duree, nombreCaissiers;
    double tempsService, tempsArrivee;
    SED simulation;
    simulation.lancer();
    cout << "Bienvenue à la simulation de banque\n" << endl;
    cout << "Il est " << simulation.heure() << endl;
    cout << "Durée prévue de la simulation : ";
    cin >> duree;
    cout <<" " << endl;
    cout << "Nombre de caissiers : " ;
    cin >> nombreCaissiers;
    cout <<" " << endl;
    cout << "Temps de service de chaque caissier : " ;
    cin >> tempsService;
    cout <<" " << endl;
    Banque banque = Banque(nombreCaissiers, duree, tempsService);
    
    cout << "Temps entre deux arrivées : ";
    cin >> tempsArrivee;
    FileAttente fileAttente = *(new FileAttente(tempsArrivee));

    cout << "Fin de la simulation :"  ;

    cout << " Durée réelle de la simulation : " << banque.dureeReelle() << endl ;
    cout << " Longueur max de la file d'attente : " << fileAttente.longueurMax() << endl ;
    cout << " Longueur moyenne de la file d'attente : " << fileAttente.longueurMoyenne() << endl ;
    cout << " Temps d'attente client de la file d'attente : " << fileAttente.tempsMoyenAttente() << endl ;
    for (int i = 0; i <nombreCaissiers; i++) {
        cout << " Taux d'occupation du caissier " << i + 1 << " : " << banque.caissiers()[i].tauxOccupation() << endl ;
    }
*/
    return 0;
}

