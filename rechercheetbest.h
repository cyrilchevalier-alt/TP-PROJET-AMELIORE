#include <string>

struct Etudiant {
    std::string nom;
    float note;
};

void afficherEleves(Etudiant classe[], int nbrelv);
void meilleureNote(Etudiant classe[], int nbrelv);