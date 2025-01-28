#include <iostream>
using namespace std;
int sumaDivisores(int n, int divisor = 1) {
    if (divisor == n) return 0;
    if (n % divisor == 0)
        return divisor + sumaDivisores(n, divisor + 1);
    else
        return sumaDivisores(n, divisor + 1);
}
int main()
{
    bool entrar = true;
    char limpiar;
    int op, cantNumeros, contador, nverificador, contverificador, suma;
    while (entrar){
        cout << "Menu de Opciones" << endl;
        cout << "1. Numeros Abundantes" << endl;
        cout << "2. Numeros Deficientes" << endl;
        cout << "3. Numeros Amigos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> op;
        if (op > 0 && op < 4){
            cout << "Ingrese la cantidad de numeros: ";
            cin >> cantNumeros;
            contador = 0;
            nverificador = 2;
        }
        switch (op){
           case 1:
                while (contador < cantNumeros){
                    contverificador = 1;
                    suma = 0;
                    while (contverificador < nverificador){
                        if (nverificador % contverificador == 0){
                            suma = suma + contverificador;
                        }
                        contverificador++;
                    }
                    if (suma > nverificador){
                        cout << "Abundante: " << nverificador << endl;
                        contador++;
                    }
                    nverificador++;
                }
                break;
            case 2:
                while (contador < cantNumeros){
                    contverificador = 1;
                    suma = 0;
                    while (contverificador < nverificador){
                        if (nverificador % contverificador == 0){
                            suma = suma + contverificador;
                        }
                        contverificador++;
                    }
                    if (suma < nverificador){
                        cout << "Deficiente: " << nverificador << endl;
                        contador++;
                    }
                    nverificador++;
                }
                break;
            case 3:
                while (contador < cantNumeros) {
                    int a = nverificador, b = 0, sumaA = 0, sumaB = 0;
                    sumaA = sumaDivisores(a);
                    b = sumaA;
                    if (b > a) {
                        sumaB = sumaDivisores(b);
                        if (sumaB == a && a != b) {
                            cout << "Amigos: " << a << " y " << b << endl;
                            contador++;
                        }
                    }
                    nverificador++;
                }
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                return 0;
                break;
            default:
                cout << "Opcion no valida" << endl;
               
        }
        system ("pause");  
        system("cls");
    }
}