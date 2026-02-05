#include <iostream>
#include "ajouterEleve.h"
using namespace std;

void ajouterEleve(Liste &classe) {
    if (classe.nbrelv >= 30) {
        cout << "Erreur : Le tableau est plein !" << endl;
    } else {
        cout << "Nom de l'eleve : ";
        cin >> classe.eleves[classe.nbrelv].nom;
        cout << "Note : ";
        cin >> classe.eleves[classe.nbrelv].note;
        classe.nbrelv++;
        cout << "Eleve ajoute." << endl;
    }
}