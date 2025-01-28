#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int obtenerEleccionUsuario() {
    int eleccion;
    cout << "Elige una opcion:\n";
    cout << "1. Piedra\n";
    cout << "2. Papel\n";
    cout << "3. Tijera\n";
    cout << "Tu eleccion: ";
    cin >> eleccion;
    return eleccion;
}

int obtenerEleccionMaquina() {
    return rand() % 3 + 1; 
}

int determinarGanadorRonda(int eleccionUsuario, int eleccionMaquina) {
    if (eleccionUsuario == eleccionMaquina) {
        return 0; 
    } else if ((eleccionUsuario == 1 && eleccionMaquina == 3) || 
               (eleccionUsuario == 2 && eleccionMaquina == 1) ||  
               (eleccionUsuario == 3 && eleccionMaquina == 2)) {  
        return 1; 
    } else {
        return -1; 
    }
}

void determinarGanadorJuego(int puntosUsuario, int puntosMaquina) {
    if (puntosUsuario > puntosMaquina) {
        cout << "Felicidades ganaste el juego.\n" ;
    } else if (puntosUsuario < puntosMaquina) {
        cout << "La maquina ha ganado el juego, suerte la proxima.\n";
    } else {
        cout << "El juego ha terminado en empate.\n";
    }
}
main() {
    srand(time(0)); 

    int puntosUsuario = 0, puntosMaquina = 0;
    int nivelDificultad;

    cout << "Bienvenido al juego de Piedra, Papel o Tijera.\n";
    cout << "Elige el nivel de dificultad:\n";
    cout << "1. Principiante\n";
    cout << "2. Intermedio\n";
    cout << "3. Avanzado\n";
    cout << "Tu eleccion: ";
    cin >> nivelDificultad;

    if (nivelDificultad == 2) {
        puntosMaquina = 1;
    } else if (nivelDificultad == 3) {
        puntosMaquina = 2; 
    }

    for (int ronda = 1; ronda <= 5; ronda++) {
        cout << "\n--- Ronda " << ronda << " ---\n";

        int eleccionUsuario = obtenerEleccionUsuario();
        int eleccionMaquina = obtenerEleccionMaquina();
        
        cout << "La maquina eligio: ";
        if (eleccionMaquina == 1) cout << "Piedra\n";
        else if (eleccionMaquina == 2) cout << "Papel\n";
        else cout << "Tijera\n";

        int resultado = determinarGanadorRonda(eleccionUsuario, eleccionMaquina);

        if (resultado == 1) {
            cout << "Ganaste esta ronda\n ";
            puntosUsuario++;
        } else if (resultado == -1) {
            cout << "La maquina ha ganado esta ronda.\n";
            puntosMaquina++;
        } else {
            cout << "Esta ronda ha sido un empate.\n";
        }

        cout << "Puntos - Usuario: " << puntosUsuario << " | Maquina: "<< puntosMaquina << endl;
    }

    determinarGanadorJuego(puntosUsuario, puntosMaquina);

    return 0;
}