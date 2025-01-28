#include <iostream>
using namespace std;
main()
{
    bool entrar = true;
    char Limpiar;
    int op, cantNumeros, contador, nverificador, contverificador, suma;
    while (entrar){
        cout<< "Menu de opciones "<< endl;
        cout<< "1. Numeros Abundantes" << endl;
        cout<< "2. Numeros Deficientes" << endl;
        cout<< "3. Numeros Amigos" << endl;
        cout<< "4. Salir" << endl;
        cout<< "Ingresa una opcion: ";
        cin>>op;
        if(op > 0 && op < 4) {
            cout<<"Ingrese la cantidad de numeros ";
            cin>>cantNumeros;
            contador = 0;
            nverificador = 2;
        }
        switch(op){
            case 1:
                while(contador < cantNumeros){
                    contverificador = 1;
                    while(contverificador < nverificador){
                        if(nverificador % contverificador==0){
                            suma = suma + contverificador;
                        }
                        contverificador++;
                    }
                    if (suma > nverificador){
                        cout<< "Abundante: "<<nverificador <<endl;
                        contador ++;
                    }
                }
                cout<<"En construccion "<< endl;
                break;
            case 2:
                while(contador > cantNumeros){
                    contverificador = 1;
                    suma = 0;
                    while(contverificador > nverificador){
                        if(nverificador % contverificador==0){
                            suma = suma + contverificador;
                        }
                        contverificador++;
                    }
                    if (suma > nverificador){
                        cout<< "Deficiente: "<<nverificador <<endl;
                        contador ++;
                    }
                }
                cout<<"Deficiente "<< endl;
                break; 
            case 3:
                cout<<"Amigo "<< endl;
                break;
            case 4:
                entrar = false;
                break;
            default :
                cout<<"Opcion no valida"<< endl;

        }
        system ("pause");  
        system("cls");
    }
}