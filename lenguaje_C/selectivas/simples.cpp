#include <iostream>
using namespace std;
main()
{
    int num, r, d;
    cout << "Ingrese un numero:";
    cin >> num;
    cout << "Ingresar el divisor";
    cin >> d;
    r = num % d;
    if (r==0){
        cout << "El numero " << num << " es divisible por " << d << endl;
        
    }else{

        cout << "El numero " << num << " no es divisible por " << d << endl;
    }
    num = 0;
}