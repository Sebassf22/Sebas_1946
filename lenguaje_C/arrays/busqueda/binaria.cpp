#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaDatos(int v[], int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        v[i] = rand() % 100; 
    }
}


void VerDatos(int v[], int n){
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void ordenarDatos(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

bool isBusquedaBinaria(int v[], int n, int elemento){
    int Iarriba = 0;
    int Iabajo = n - 1;
    int Icentro;
    
    while (Iarriba <= Iabajo) {
        Icentro = (Iarriba + Iabajo) / 2;
        
        if (v[Icentro] == elemento) {
            return true; // Se encontró el elemento
        }
        else if (v[Icentro] < elemento) {
            Iarriba = Icentro + 1;
        }
        else {
            Iabajo = Icentro - 1;
        }
    }
    
    return false;
}

main()
{
    int ne, dato;
    cout<< "Nro de Elementos de Array: ";
    cin>> ne;
    int vector[ne];
    llenaDatos(vector, ne);

    cout<<"Datos generados: ";
    VerDatos(vector, ne);

    ordenarDatos(vector, ne);
    cout << "Datos ordenados: ";
    VerDatos(vector, ne); 

    cout<< "Ingrese el dato a buscar: ";
    cin>> dato;
    (isBusquedaBinaria(vector, ne, dato))?cout<< "Dato Encontrado": cout << "Dato no encontrado";
}