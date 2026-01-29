#include <iostream>
#include "rechercheetbest.h"

using namespace std;

void afficherEleves(etudiant classe[], int nbrelv) {
    if (nbrelv == 0) {
        cout << "Aucun eleve." << endl;
    } else {
        for (int i = 0; i < nbrelv; i++) {
            cout << i + 1 << ". " << classe[i].nom << " - " << classe[i].note << endl;
        }
    }
}

void meilleureNote(etudiant classe[], int nbrelv) {
    if (nbrelv == 0) {
        cout << "Aucun eleve." << endl;
    } else {
        int indexMeilleur = 0;
        for (int i = 1; i < nbrelv; i++) {
            if (classe[i].note > classe[indexMeilleur].note) {
                indexMeilleur = i;
            }
        }
        cout << "Meilleure note : " << classe[indexMeilleur].nom 
             << " avec " << classe[indexMeilleur].note << endl;
    }
}