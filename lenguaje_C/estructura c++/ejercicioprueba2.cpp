#include <iostream>
using namespace std;
main ()
{
    int numero_terminos;
    double s = 0.0;
    cout<< "Ingresar el numero de terminos ";
    cin>> numero_terminos;
    for (int i=1; i<= numero_terminos; ++i) {
        double denominador = i + 2;
        double numerador = i * i + i;
        if (i % 2 == 0) {
            s -= numerador/denominador;
        } else {  
            s += numerador/denominador;
        }
    }
cout<< "El valor de s es: " <<s<< endl;
}