#include <iostream>
using namespace std;
main()
{
    int numero;
    while (true){
        cout<< "Ingrese un numero: ";
        cin>> numero;
        if(numero >= 1 && numero <=5){
            break;
        }
    }
    
}