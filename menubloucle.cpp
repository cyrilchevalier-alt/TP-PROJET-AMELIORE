#include <iostream>
#include "menuboucle.h"

using namespace std;

void ajouterEleve(Etudiant classe[], int &nbElv) {
    if (nbElv < 30) {
        cout << "Nom de l'eleve : ";
        cin >> classe[nbElv].nom;
        cout << "Note de l'eleve : ";
        cin >> classe[nbElv].note;
        nbElv++;
    } else {
        cout << "Classe pleine !" << endl;
    }
}

void afficherEleves(Etudiant classe[], int nbElv) {
    cout << "--- Liste des eleves ---" << endl;
    for (int i = 0; i < nbElv; i++) {
        cout << classe[i].nom << " : " << classe[i].note << "/20" << endl;
    }
}

void calculerMoyenne(Etudiant classe[], int nbElv) {
    if (nbElv == 0) return;
    float somme = 0;
    for (int i = 0; i < nbElv; i++) {
        somme += classe[i].note;
    }
    cout << "Moyenne de la classe : " << somme / nbElv << endl;
}

void meilleureNote(Etudiant classe[], int nbElv) {
    if (nbElv == 0) return;
    int indexMax = 0;
    for (int i = 1; i < nbElv; i++) {
        if (classe[i].note > classe[indexMax].note) {
            indexMax = i;
        }
    }
    cout << "Meilleur eleve : " << classe[indexMax].nom << " avec " << classe[indexMax].note << "/20" << endl;
}