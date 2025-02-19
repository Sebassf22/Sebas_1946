#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../librerias/ahorcado.h"

using namespace std;

string palabraAleatoria(string palabras[]) {
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

void humano(int intento) {
    cout << "Numero de intentos usados: " << intento << endl;
    system("pause");
    switch (intento) {
        case 1: 
            cout << "   O   " << endl;
            break;
        case 2:
            cout << "   O   " << endl;
            cout << "   |   " << endl;
            break;
        case 3:
            cout << "   O   " << endl;
            cout << "   |   " << endl;
            cout << "  /    " << endl;
            break;
        case 4:
            cout << "   O   " << endl;
            cout << "   |   " << endl;
            cout << "  / \\   " << endl;
            break;
        case 5:
            cout << "   O   " << endl;
            cout << "  /|   " << endl;
            cout << "  / \\   " << endl;
            break;
        case 6:
            cout << "   O   " << endl;        
            cout << "  /|\\  " << endl;
            cout << "  / \\   " << endl;
            break;
        case 7:
            cout << "   O   " << endl;       
            cout << "  /|\\  " << endl;
            cout << "  /|\\   " << endl;
            cout << "Oh no, perdiste el juego." << endl;
            break;
    }    
    system("pause");    
}

void jugar(string palabraSeleccionada) {    
    int longitud = palabraSeleccionada.length();
    string palabraOculta(longitud, '-');
    int intentos = 0;
    char letra;
    bool bandera;

    while (intentos < 7 && palabraOculta != palabraSeleccionada) {
        bandera = false;
        cout << "\nPalabra oculta: " << palabraOculta << endl;
        cout << "Intentos restantes: " << 7 - intentos << endl;
        cout << "Introduce una letra: ";
        cin.ignore();
        cin.get(letra);

        for (int i = 0; i < longitud; i++) {   
            if (palabraSeleccionada[i] == letra) {
                palabraOculta[i] = letra;
                bandera = true;
            }            
        }

        if (!bandera) {
            intentos++;
            cout << "Incorrecto, Pierdes un intento." << endl;
            humano(intentos);
        } else {
            cout << "Bien hecho, Has encontrado una letra." << endl;
        }

        system("cls");       
    }

    if (palabraOculta == palabraSeleccionada) {
        cout << "\n Felicidades, adivinaste la palabra: " << palabraOculta << endl;
    } else {    
        cout << "\n Lo siento, tus intentos se acabaron. La palabra era: " << palabraSeleccionada << endl;
    }
}

int opciones() {
    int op;
    cout << "\nSelecciona una categoria:" << endl;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "4. Paises" << endl; 
    cout << "Elige una opcion: ";
    cin >> op;
    return op;
}

int main() {
    string palabras[5], palabraSeleccionada;
    int op;

    cout << "==============================" << endl;
    cout << "      JUEGO DEL AHORCADO      " << endl;
    cout << "==============================" << endl;
    
    op = opciones();

    switch (op) {
        case 1: deportes(palabras); break;
        case 2: animales(palabras); break;
        case 3: frutas(palabras); break;
        case 4: paises(palabras); break; 
        default:
            cout << "Opcion invalida. Saliendo...\n";
            return 1;
    }

    system("cls");
    palabraSeleccionada = palabraAleatoria(palabras);
    jugar(palabraSeleccionada);
}