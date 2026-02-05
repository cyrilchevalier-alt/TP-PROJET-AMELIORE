#include <iostream>
#include "structure.hpp"
#include "affichageetmoyenne.h"
#include "ajoutereleve.h"
#include "fichierCSV.h" // <-- Nouveau nom ici

using namespace std;

int main() {
    Liste classe;
    int choix;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Ajouter un eleve" << endl;
        cout << "2. Afficher les eleves" << endl;
        cout << "3. Calculer la moyenne" << endl;
        cout << "4. Meilleure note" << endl;
        cout << "5. Exporter vers CSV" << endl; // <-- Option ajoutée
        cout << "6. Quitter" << endl;
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
            cout << "Choix invalide." << endl;
        }
        else if (choix == 5) {
            exporterCSV(classe); // <-- Appel de la fonction
        }
        else if (choix == 6) {
            cout << "Fin du programme." << endl;
        }
        else {
            cout << "Choix invalide." << endl;
        }

    } while (choix != 5);

    return 0;
}