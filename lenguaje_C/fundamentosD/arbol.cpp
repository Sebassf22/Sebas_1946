#include <iostream>
#include <cstdlib> // Para rand()
#include <ctime>   // Para inicializar rand()
using namespace std;

int main() {
    int altura;
    cout << "Ingrese la altura del árbol: ";
    cin >> altura;

    srand(time(0)); // Inicializar el generador de números aleatorios

    // Imprimir la estrella en la cima
    for (int i = 1; i < altura; ++i) {
        cout << " ";
    }
    cout << "*" << endl; // La estrella

    // Generar las ramas del árbol con hojas
    for (int i = 1; i <= altura; ++i) {
        // Espacios para centrar las ramas
        for (int j = 1; j <= altura - i; ++j) {
            cout << " ";
        }
        // Imprimir los caracteres de las ramas (asteriscos y hojas)
        for (int j = 1; j <= (2 * i - 1); ++j) {
            if (rand() % 4 == 0) { // Un 25% de probabilidad de ser hoja
                cout << "o";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Generar el tronco del árbol
    int ancho_tronco = altura / 3;
    int altura_tronco = altura / 3;
    int espacios_tronco = altura - ancho_tronco / 2;

    for (int i = 1; i <= altura_tronco; ++i) {
        for (int j = 1; j < espacios_tronco; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= ancho_tronco; ++j) {
            cout << "|";
        }
        cout << endl;
    }

    return 0;
}