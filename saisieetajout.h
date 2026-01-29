#define SAISIEETAJOUT_H

#include <string> // Nécessaire pour utiliser std::string
#include "affichageetmoyenne.h" // <--- AJOUTE ÇA pour que "Etudiant" soit reconnu

void ajouterEleve(std::string noms[], float notes[], int &nbrelv, int &note);
void afficherEleves(std::string noms[], float notes[], int nbrelv);

