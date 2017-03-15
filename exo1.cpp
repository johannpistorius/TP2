#include <iostream>

using namespace std;

void exo1()
{
    int a;
    int &ref_a = a;
    int *p_a = &a;
    cout << "Donner un entier : ";
    cin >> a;
    cout << "Le contenu des variables :" << endl << "- variable i : " << a << endl << "- variable ref_i : " << ref_a << endl << "-variable p_i : " << p_a << endl;
    cout << "Leur adresse : " << endl << "- adresse de i : " << &a << endl <<"- adressse de ref_i :" << &ref_a << endl << "- adresse de p_i :" << &p_a << endl;
    cout << "La valeur pointee : " << *p_a << endl;
}
