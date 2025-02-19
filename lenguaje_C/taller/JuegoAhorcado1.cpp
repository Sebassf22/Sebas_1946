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
    cout << "Número de intentos usados: " << intento << endl;
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
            cout << "¡Oh no! Has perdido el juego." << endl;
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
        cout << "\n Felicidades, adivinaste la palabra: " << palabraOculta << " 🎉" << endl;
    } else {    
        cout << "\n Lo siento, tus intentos se acabaron. La palabra era: " << palabraSeleccionada << endl;
    }
}

int opciones() {
    int op;
    cout << "\nSelecciona una categoría:" << endl;
    cout << "1. Deportes" << endl;
    cout << "2. Animales" << endl;
    cout << "3. Frutas" << endl;
    cout << "Elige una opción: ";
    cin >> op;
    return op;
}

int main() {
    string palabras[5], palabraSeleccionada;
    int op;

    cout << "===================================" << endl;
    cout << "      JUEGO DEL AHORCADO      " << endl;
    cout << "===================================" << endl;
    
    op = opciones();

    (op == 1) ? deportes(palabras) : (op == 2) ? animales(palabras) : frutas(palabras);

    system("cls");
    palabraSeleccionada = palabraAleatoria(palabras);
    jugar(palabraSeleccionada);
}