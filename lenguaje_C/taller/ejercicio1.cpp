#include <iostream>
using namespace std;
main()
{
    int limiteInferior, limiteSuperior;
    do{
        cout<< "Introduce el limite inferior: ";
        cin>> limiteInferior;
        cout << "Introduce el límite superior: ";
        cin >> limiteSuperior;

        if (limiteInferior >= limiteSuperior) {
            cout << "El limite inferior debe ser menor que el limite superior. Intentalo de nuevo.\n";
        }
    } while (limiteInferior >= limiteSuperior);
    int numero;
    int sumaDentro = 0; 
    int fueraIntervalo = 0;
    bool igualALimites = false;

    cout<< "Introduce un numero (0 para terminar):\n";

    do{
        cin>> numero; 
        if (numero == 0) {
            break; 
        }
        if (numero > limiteInferior && numero < limiteSuperior) {
            sumaDentro += numero; 
        } else {
            fueraIntervalo++; 
        }
        if (numero == limiteInferior || numero == limiteSuperior) {
            igualALimites = true; 
        }
    }while (numero != 0);

    cout << "\nResultados:" << endl;
    cout << "Suma de los números dentro del intervalo: " << sumaDentro << endl;
    cout << "Cantidad de números fuera del intervalo: " << fueraIntervalo << endl;
    cout << "¿Se ha introducido algún número igual a los límites? " << (igualALimites ? "Sí" : "No") << endl;

    return 0;
}
