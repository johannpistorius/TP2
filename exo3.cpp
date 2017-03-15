#include <iostream>

using namespace std;

void exo3()
{
    string nom;
    string *p_nom = &nom;
    cout << "Donner votre nom : ";
    cin >> nom;
    cout << "Votre nom est : " << *p_nom << endl;
}
