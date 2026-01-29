#define MENU_BOUCLE_H

#include <string>
#include "affichageetmoyenne.h" // <--- AJOUTE ÇA pour que "Etudiant" soit reconnu

void ajouterEleve(etudiant classe[], int &nbElv);
void afficherEleves(etudiant classe[], int nbElv);
void calculerMoyenne(etudiant classe[], int nbElv);
void meilleureNote(etudiant classe[], int nbElv);
