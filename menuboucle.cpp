#include <iostream>
#include "affichageetmoyenne.h" // 1. On donne la définition de 'etudiant'
#include "rechercheetbest.h"
#include "saisieetajout.h"         // 2. On donne les prototypes des fonctions

using namespace std;

int main() {
    etudiant etudiants[30];
    int nbrelv = 0;
    int choix;
    int note = 0;

    do {
        cout << "MENU" << endl;
        cout << "1. Ajouter un eleve" << endl;
        cout << "2. Afficher les eleves" << endl;
        cout << "3. Calculer la moyenne" << endl;
        cout << "4. Meilleure note" << endl;
        cout << "5. Quitter" << endl;
        cout << "Choisissez une option : ";
        cin >> choix;

        if (choix == 1) {
            ajouterEleve(etudiant, nbrelv);
        }
        else if (choix == 2) {
            afficherEleves(etudiant, nbrelv);
        }
        else if (choix == 3) {
            calculerMoyenne(etudiant, nbrelv);
        }
        else if (choix == 4) {
            meilleureNote(etudiant, nbrelv);
        }
        else if (choix == 5) {
            cout << "Fin du programme." << endl;
        }
        else {
            cout << "Choix invalide." << endl;
        }

    } while (choix != 5);

    return 0;
}