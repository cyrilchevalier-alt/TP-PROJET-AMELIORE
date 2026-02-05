#include <iostream>
#include "structure.hpp"
#include "affichageetmoyenne.h"

using namespace std;

int main() {
    Liste classe; // 'Liste' est le type (la struct), 'classe' est le nom de la variable
    int choix;

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
            ajouterEleve(classe);
        }
        else if (choix == 2) {
            afficherEleves(classe);
        }
        else if (choix == 3) {
            calculerMoyenne(classe);
        }
        else if (choix == 4) {
            meilleureNote(classe);
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