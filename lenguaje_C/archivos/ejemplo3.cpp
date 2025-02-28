#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream archivoSalida;
    archivoSalida.open("ejemplo.txt");
    if(archivoSalida.is_open()){
        archivoSalida<<"Linea agregada al final."<<endl;
        archivoSalida<<"Otra linea mas."<<endl;

        archivoSalida.close();
        cout<<"Texto agregado con exito."<<endl;
    }else{
        cout<<"No se puede abrir el archivo."<<endl;
    }
    return 0;
}