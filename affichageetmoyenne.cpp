#include <iostream>
#include <ctime>   // Pour time()
#include <cstdlib> // Pour rand() et srand()

using namespace std;

int main() {
    // Initialisation du générateur (à ne faire qu'une seule fois au début du main)
    srand(time(0)); 

    // Générer une note aléatoire entre 0 et 20
    // On utilise le modulo % 21 car rand() % 21 donne un reste entre 0 et 20
    float note_aleatoire = rand() % 21;

    cout << "Note generee : " << note_aleatoire << "/20" << endl;

    return 0;
}
