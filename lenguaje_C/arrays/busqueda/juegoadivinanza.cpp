#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <set>

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

int main() {
    srand(time(0));
    int minRango, maxRango;
    
    cout << "Ingrese el valor mínimo del rango: ";
    cin >> minRango;
    cout << "Ingrese el valor máximo del rango: ";
    cin >> maxRango;
    
    if (minRango >= maxRango || (maxRango - minRango + 1) < 7) {
        cout << "El rango no es válido. Asegúrese de que el valor mínimo sea menor al máximo y que haya al menos 7 números disponibles." << endl;
        return 1;
    }
    
    set<int> numerosSet;
    while (numerosSet.size() < 7) {
        int num = minRango + rand() % (maxRango - minRango + 1);
        numerosSet.insert(num);
    }
    
    vector<int> numeros(numerosSet.begin(), numerosSet.end());
    ordenarSeleccion(numeros);
    
    cout << "Números generados y ordenados: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;
    

    int indiceSecreto = rand() % 7;
    int numeroSecreto = numeros[indiceSecreto];
    
    int intentos = 3;
    int intentoUsuario;
    
    cout << "Intenta adivinar el número en 3 intentos." << endl;
    
    while (intentos > 0) {
        cout << "Ingrese su intento: ";
        cin >> intentoUsuario;
        
        if (intentoUsuario == numeroSecreto) {
            cout << "Felicidades Has adivinado el numero." << endl;
            return 0;
        } else if (intentoUsuario < numeroSecreto) {
            cout << "El numero secreto es mayor." << endl;
        } else {
            cout << "El numero secreto es menor." << endl;
        }
        
        intentos--;
        cout << "Intentos restantes: " << intentos << endl;
    }
    
    cout << "Lo siento, no lograste adivinar. El numero secreto era: " << numeroSecreto << endl;
    return 0;
}