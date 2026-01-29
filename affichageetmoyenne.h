#ifndef AFFICHAGEETMOYENNE_H
#define AFFICHAGEETMOYENNE_H
#include <string>

struct etudiant
{
    std::string nom;
    float note;
};

struct nbrelv
{
    int valeur;
};



void listerEleves(etudiant tab_classe[], int nb_etudiants);
float moyenne(etudiant tab_classe[], int nb_etudiants);

#endif

