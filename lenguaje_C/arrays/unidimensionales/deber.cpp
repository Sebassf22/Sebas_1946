#include <iostream>
#include <stdlib.h> // Para uso de rand
#include <time.h>   // Para uso de time
using namespace std;

void llenaDatos(float v[], int ne) {
    srand(time(NULL)); // Semilla para generar números aleatorios
    for (int i = 0; i < ne; i++) {
        v[i] = 50 + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (99 - 50)));
    }
}

void verDatos(float v[], int ne) {
    cout << "Los elementos del vector son: " << endl;
    for (int i = 0; i < ne; i++) {
        cout << v[i] << "  ";
    }
    cout << endl;
}

float sumaPromedioCifras(float v[], int ne) {
    float suma = 0;
    for (int i = 0; i < ne; i++) {
        suma += v[i];
    }
    return suma / ne;
}

int contarDebajoPromedio(float v[], int ne, float promedio) {
    int contar = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedio) {
            contar++;
        }
    }
    return contar;
}

void guardaElementosMenores(float v[], int ne, float promedio, float lista[]) {
    int j = 0;
    for (int i = 0; i < ne; i++) {
        if (v[i] < promedio) {
            lista[j] = v[i];
            j++;
        }
    }
}

int main() {
    int ne, menores;
    float promedioNumeros;

    cout << "Cuantos elementos tiene el vector?: ";
    cin >> ne;

    float vector[ne];
    llenaDatos(vector, ne);
    verDatos(vector, ne);

    promedioNumeros = sumaPromedioCifras(vector, ne);
    cout << "El promedio de los datos generados es: " << promedioNumeros << endl;

    menores = contarDebajoPromedio(vector, ne, promedioNumeros);
    cout << "La cantidad de elementos debajo del promedio son: " << menores << endl;

    float listaMenores[menores];
    guardaElementosMenores(vector, ne, promedioNumeros, listaMenores);

    cout << "Los elementos menores al promedio son: " << endl;
    verDatos(listaMenores, menores);

    return 0;
}