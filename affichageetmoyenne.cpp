#include <iostream>
#include "affichageetmoyenne.h"
using namespace std;

void afficherEleves(Liste &classe) {
    if (classe.nbrelv == 0) {
        cout << "La liste est vide." << endl;
    } else {
        for (int i = 0; i < classe.nbrelv; i++) {
            cout << "- " << classe.eleves[i].nom << " : " << classe.eleves[i].note << "/20" << endl;
        }
    }
}

void calculerMoyenne(Liste &classe) {
    if (classe.nbrelv == 0) {
        cout << "Aucun eleve." << endl;
    } else {
        float somme = 0;
        for (int i = 0; i < classe.nbrelv; i++) {
            somme += classe.eleves[i].note;
        }
        cout << "Moyenne : " << somme / classe.nbrelv << endl;
    }
}