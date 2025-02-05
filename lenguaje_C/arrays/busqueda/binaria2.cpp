#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include "../ordenamiento/burbuja.cpp"
#include "..//..//librerias/arrays.h"
using namespace std;
using namespace vectorn;

/*void llenaDatos(int v[], int n)
{
    srand(time(NULL));
    fotr(int i=0; i<n; i++){
        v[i]=rand()%20;
    }
}*/

/*void VerDatos(int v[], int n)
{
    for (int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}*/


bool isBusquedaBinaria(int v[], int n, int elemento)
{
    int arriba,abajo,centro;
    abajo = 0;
    arriba = n-1;
    while (abajo <= arriba){
        centro = (abajo + arriba)/2;
        if (v[centro] == elemento){
            return true;
        }else if (v[centro] < elemento){
                abajo = centro + 1;
        }else{
            arriba = centro - 1;
            
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
    llenarVector(vector, ne, 20, 50);
    cout<< "Datos Originales\n";
    verVector (vector, ne);
    ordenaBurbujav3(vector, ne)
    cout<< "\nDatos oredenados\n ";
    verVector(vector, ne);
    cout<< "\nIngrese el dato a buscar: "
    cin>> dato;
    /*cout<<"\nIngrese el dato a buscar: ";
    cin>> dato;
    (isBusquedaBinaria(vector, ne, dato))?cout<< "Dato Encontrado": cout << "Dato no encontrado";*/
}