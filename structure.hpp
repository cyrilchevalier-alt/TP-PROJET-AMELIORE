#ifndef STRUCTURE_HPP
#define STRUCTURE_HPP
#include <string>

using namespace std;

struct Eleve
{

    string nom;
    float note;
};

struct Liste
{
    int nbrelv = 0;
    Eleve eleves[30];
};

#endif