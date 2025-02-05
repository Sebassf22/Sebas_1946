#include "funciones.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void ordenarSeleccion(vector<int>& numeros) {
    int n = numeros.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (numeros[j] < numeros[minIdx]) {
                minIdx = j;
            }
        }
        swap(numeros[i], numeros[minIdx]);
    }
}

vector<int> generarNumerosUnicos(int minRango, int maxRango) {
    set<int> numerosSet;
    while (numerosSet.size() < 7) {
        int num = minRango + rand() % (maxRango - minRango + 1);
        numerosSet.insert(num);
    }
    return vector<int>(numerosSet.begin(), numerosSet.end());
}

int elegirNumeroSecreto(const vector<int>& numeros) {
    return numeros[rand() % numeros.size()];
}
