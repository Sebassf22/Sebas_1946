#include <iostream>
using namespace std;
float suma (float a, float b){
    return a + b;
}
float resta (float a, float b){
    return a - b;
}
float multiplicacion (float a, float b){
    return a * b;
}
float division (float a, float b){
    return a / b;
}
int residuo(int a, int b){
    return a % b;
}
int main (){
    float a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "La suma de los numeros es: " << suma (a,b) << endl; 
    cout << "La resta de los numeros es: " << resta (a,b) << endl; 
    cout << "La multiplicacion de los numeros es: " << multiplicacion (a,b) << endl; 
    cout << "La division de los numeros es: " << division (a,b) << endl; 
    cout << "El residuo de los numeros es: " << residuo (a,b) << endl; 
    return 0;
}