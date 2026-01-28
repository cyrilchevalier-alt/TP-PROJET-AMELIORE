#include <iostream>
#include <affichageetmoyenne.h>
using namespace std;

// Mission 1 : Lister les élèves
void listerEleves(etudiant tab_classe[], int nb_etudiants) {
    cout << "--- Liste des eleves ---" << endl;
    for (int i = 0; i < nb_etudiants; i++) {
        cout << tab_classe[i].nom << " : " << tab_classe[i].note << "/20" << endl;
    }
}

// Mission 2 : Calculer la moyenne
float moyenne(etudiant tab_classe[], int nb_etudiants)
{
    if (nb_etudiants == 0) return 0; 
    float m = 0;
    for (int i = 0; i < nb_etudiants; i++) {
        m = m + tab_classe[i].note;
    }
    return m / (float) nb_etudiants;
}