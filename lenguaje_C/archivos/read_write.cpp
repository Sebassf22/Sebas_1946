#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    fstream archivo;
    string frase, nomarchivo;

    cout<<"Ingrese nombre archivo con extension: ";
    cin>>nomarchivo;

    cout<<"Escribe una frase para agregar el archivo: ";
    cin.ignore();
    getline(cin, frase);


    archivo.open(nomarchivo.c_str(), ios::out);
    if(archivo.is_open()){
        archivo<< frase <<endl;
        archivo.close();
    }else{
        cout<<"No se pudo abrir el archivo para escribir."<<endl;
        return 1;
    }
    archivo.open(nomarchivo.c_str(), ios::in);
    if(archivo.is_open()){
        string linea;
        cout<<"Contenido del archivo:"<<endl;
        while(getline(archivo, linea)){
            cout << linea << endl;
        }
        archivo.close();
    }else {
        cout<< "No se puede abrir el archivo para leer."<<endl;
    }
    return 0;
}