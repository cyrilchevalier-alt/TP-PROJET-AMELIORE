#include <string>

struct etudiant
{
    string nom;
    float note;
};

void listerEleves(etudiant tab_classe[], int nb_etudiants);
float moyenne(etudiant tab_classe[], int nb_etudiants);

