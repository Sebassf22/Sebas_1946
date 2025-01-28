#include <iostream>
using namespace std;
int main() {
    int numero;
    bool n;
cout << "Ingresar un numero: ";
cin >> numero;
if (numero != 0 ) {
    n = true;
} else {
    n = false;
}
if (n) {
    cout << "El numero es diferente de 0";
} else {
    cout << "El numero es 0";
}
return 0;  

}

