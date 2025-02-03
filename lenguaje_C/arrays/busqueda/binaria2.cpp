#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../ordenamiento/burbuja.cpp"
using namespace std;

void llenaDatos(int v[], int n){}


void VerDatos(int v[], int n){}


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
    ordenaBurbujav3(vector, ne)
    cout<< "Ingrese el dato a buscar: ";
    cin>> dato;
    (isBusquedaBinaria(vector, ne, dato))?cout<< "Dato Encontrado": cout << "Dato no encontrado";
}