#include <iostream>
#include <string>
#include "saisieetajout.h" // On inclut notre fichier d'en-tête

using namespace std;

void ajouterEleve(string noms[], float notes[], int &nbrelv, int &note) {
    if (nbrelv >= 30) {
        cout << "Classe pleine !" << endl;
    } else {
        cout << "Nom de l'eleve : ";
        cin >> noms[nbrelv];

        cout << "Note : ";
        cin >> notes[nbrelv];

        nbrelv++;
        cout << "Eleve ajoute." << endl;
    }
}

void afficherEleves(string noms[], float notes[], int nbrelv) {
    if (nbrelv == 0) {
        cout << "Aucun eleve." << endl;
    } else {
        for (int i = 0; i < nbrelv; i++) {
            cout << i + 1 << ". " << noms[i]
                 << " - " << notes[i] << endl;
        }
    }
}