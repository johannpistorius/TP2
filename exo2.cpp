#include <iostream>

using namespace std;

void incrementer(int *val);
void permuter(int *a,int *b);
void incrementer(int &a);
void permuter(int &a, int &b);

void exo2()
{
    int a, b;
    cout << "Donner la valeur de A : ";
    cin >> a;
    cout << "Donner la valeur de B : ";
    cin >> b;

    cout << "- Appel par Adresse" << endl;
    incrementer(&a);
    cout << "la valeur de A apres incrementation : " << a << endl;
    permuter(&a,&b);
    cout << "la valeur de A apres permutation : " << a << endl;
    cout << "la valeur de B apres permutation : " << b << endl;

    cout << "- Appel par Reference" << endl;
    cout << "la valeur de A est : " << a << endl;
    cout << "la valeur de B est : " << b << endl;
    incrementer(a);
    cout << "la valeur de A apres incrementation : " << a << endl;
    permuter(a,b);
    cout << "la valeur de A apres permutation : " << a << endl;
    cout << "la valeur de B apres permutation : " << b << endl;

}

//passage par adresse
void incrementer(int *val){
    (*val)++;
}
void permuter(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
//passage par reference
void incrementer(int &a){
    a++;
}
void permuter(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
