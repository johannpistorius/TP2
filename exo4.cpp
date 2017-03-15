#include <iostream>

using namespace std;

int somme(int nb1, int nb2, int nb3);
int convHeure(int heure, int minute, int seconde);

void exo4()
{
    //Partie 1
    int resultAdd =  somme(1,2,3);
    cout << "La somme : " << resultAdd << endl;

    //Partie 2
    int resultHeure = convHeure(2,39,45);
    cout << "Nombre de seconde : " << resultHeure << endl;
    resultHeure = convHeure(8,26,0);
    cout << "Nombre de seconde : " << resultHeure << endl;
    resultHeure = convHeure(5,0,0);
    cout << "Nombre de seconde : " << resultHeure << endl;
    resultHeure = convHeure(3,0,19);
    cout << "Nombre de seconde : " << resultHeure << endl;

}

int somme(int nb1=0, int nb2=0, int nb3=0){
    int addition = nb1+nb2+nb3;
    return addition;
}
int convHeure(int heure=0, int minute=0, int seconde=0){
    int numSeconde = seconde + minute*60 + heure*3600;
    return numSeconde;
}
