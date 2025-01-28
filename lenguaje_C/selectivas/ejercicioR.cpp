#include <iostream>
using namespace std;

int main() {
double numA, numB;
char operacion;

// Solicitar los valores iniciales
    cout << "Escribir el valor de A: ";
    cin >> numA;
    cout << "Escribir el valor de B: ";
    cin >> numB;
    cout << "Escribir la operación (+, -, *, /): ";
    cin >> operacion;

// Realizar la operación
    switch (operacion) {
        case '+':
        cout << "Resultado: " << numA + numB << endl;
        break;
        case '-':
        cout << "Resultado: " << numA - numB << endl;
        break;
        case '*':
        cout << "Resultado: " << numA * numB << endl;
        break;
        case '/':
        if (numB != 0) {
        cout << "Resultado: " << numA / numB << endl;
        } else {
        cout << "Error: No se puede dividir por cero." << endl;
        }
        break;
        default:
        cout << "Error: Operación no válida." << endl;
        break;
        }

return 0;
}