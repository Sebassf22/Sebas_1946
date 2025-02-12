#include <iostream>
using namespace std;
void cambiarString(string &nombres){
    nombres = "Sin nombre";
}
void cambiarArray(char apellido[]){
    //apellido[0] = 'A';
    //apellido[0] = 'l';
    //apellido[0] = 'v';
    //apellido[0] = 'a';
    //apellido[0] = 'r';
    //apellido[0] = 'e';
    //apellido[0] = 'z';
    //apellido[0] = 'z';
    //apellido[7] = '\0';*/ //Caracter nulo para indicar el fin de una cadena
    cout << "Ingresa el nuevo apellido: ";
    cin.getline(apellido,20);
}
main()
{
    string nombres,apodo;
    string curso[5] = {"c++"."Java","Python","C#","PHP"};
    char apellido[20], apodo1[20];
    cout<< "Ingrese sus nombres: ";
    getline(cin, nombres);
    cout << "Su nombre es: "<<nombres <<endl;
    cambiarString(nombres);
    cout << "Su nombre es luego de llamar a la funcion: "<<nombres<<endl;
    cout<< "Ingrese su apellido: ";
    cin.getline(apellido,20);
    cout << "Su apellido inicial es: "<<apellido<<endl;
    cambiarArray(apellido);
    cout << "Su apellido luego de llamar la funcion es: " <<apellido <<endl;
    
}