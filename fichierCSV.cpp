#include <iostream>
#include <fstream> // Pour la gestion des fichiers
#include "fichierCSV.h"

using namespace std;

void exporterCSV(Liste &classe) {
    if (classe.nbrelv == 0) {
        cout << "Aucun eleve a exporter." << endl;
        return;
    }

    // On crée le fichier de sortie
    ofstream fichier("classe.csv");

    if (fichier.is_open()) {
        // En-tête pour le tableur
        fichier << "Nom,Note" << endl;

        for (int i = 0; i < classe.nbrelv; i++) {
            // Format CSV : Nom virgule Note
            fichier << classe.eleves[i].nom << "," << classe.eleves[i].note << endl;
        }

        fichier.close();
        cout << "Fichier 'classe.csv' cree avec succes !" << endl;
    } else {
        cout << "Erreur lors de l'ouverture du fichier en ecriture." << endl;
    }
}