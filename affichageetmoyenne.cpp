#include <iostream>
#include "affichageetmoyenne.h"
using namespace std;

// Mission 1 : Lister les élèves
void afficherEleves(Liste &classe) {
    cout << "--- Liste des eleves ---" << endl;
    for (int i = 0; i < nbrelv; i++) {
        cout << tab_classe[i].nom << " : " << tab_classe[i].note << "/20" << endl;
    }
}

// Mission 2 : Calculer la moyenne
float moyenne(etudiant tab_classe[], int nbrelv)
{
    if (nbrelv == 0) return 0; 
    float m = 0;
    for (int i = 0; i < nbrelv; i++) {
        m = m + tab_classe[i].note;
    }
    return m / (float) nbrelv;
}