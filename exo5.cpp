#include <iostream>
#include <fstream>

using namespace std;

void exo5()
{
    string nom;
    int age;
    cout << "Donner votre nom : ";
    cin >> nom;
    cout << "Donner votre age : ";
    cin >> age;
    string const nomFichier("Z:/C++/TP2/monFichier.txt");
    ofstream monFlux(nomFichier.c_str(),ios::app);
    if(monFlux){
        monFlux << "Nom : " << nom << endl;
        monFlux << "Age : " << age << endl << endl;
        monFlux.close();
    }
    else{
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

}
