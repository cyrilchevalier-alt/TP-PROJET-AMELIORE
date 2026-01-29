#include <iostream>
#include "rechercheetbest.h"

using namespace std;

// Recherche d'un étudiant par son nom
void rechercherEtudiant(Etudiant classe[], int nbEtudiants, const string& nom) {
    bool trouve = false;

    for (int i = 0; i < nbEtudiants; i++) {
        if (classe[i].nom == nom) {
            cout << "Etudiant trouve :" << endl;
            cout << "Nom  : " << classe[i].nom << endl;
            cout << "Note : " << classe[i].note << endl;
            trouve = true;
            break;
        }
    }

    if (!trouve) {
        cout << "Etudiant non trouve." << endl;
    }
}

// Recherche de la meilleure note
void meilleureNote(Etudiant classe[], int nbEtudiants) {
    if (nbEtudiants == 0) {
        cout << "Aucun etudiant dans la classe." << endl;
        return;
    }

    int indexMax = 0;

    for (int i = 1; i < nbEtudiants; i++) {
        if (classe[i].note > classe[indexMax].note) {
            indexMax = i;
        }
    }

    cout << "Meilleure note de la classe :" << endl;
    cout << "Nom  : " << classe[indexMax].nom << endl;
    cout << "Note : " << classe[indexMax].note << endl;
}