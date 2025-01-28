#include <iostream>
using namespace std;
main ()
{
    int i;
    short valor;
    char letra;
    bool bandera;
    float peso;
    double altura;
    cout<< "Ingrese un valor entero:\t";
    cin>> i;
    cout<< "Ingrese un valor short:\t";
    cin>> valor;
    cout<< "Ingrese un valor char:\t";
    cin.ignore();
    cin>> letra;
    cout<< "Ingrese un valor booleano:\t";
    cin>> bandera;
    cout<< "Ingrese un valor float:\t";
    cin>> peso;
    cout<< "Ingrese un valor double:\t";
    cin>> altura;
    cout << "Valores ingresados:\n";
    cout << "El valor entero es " << i << endl;
    cout << "El valor short es " << valor << endl;
    cout << "El valor char es " << letra << endl;
    cout << "El valor booleano es " << bandera << endl;
    cout << "El valor float es " << peso << endl;
    cout << "El valor double es " << altura << endl;
    
}