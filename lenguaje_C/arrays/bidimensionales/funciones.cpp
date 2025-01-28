#include <iostream>
#define MAX 50
#include <stdlib.h> // libreria para uso de rand
#include <time.h> 
using namespace std;
void llenaTabla (int tabla[][MAX],int f, int c){
    for (int i=0, i<f; i++){
        for (int j=0; j<c; j++){
            cout<<"Introduce el valor de la posicion ["<<i<<"]["<<j<<"]: ";
            cin>> tabla[i][j];
        }
    }

}
void imprimeTabla(int tabla[][MAX],int f, int c){
    for (int i=0, i<f; i++){
        for (int j=0; j<c; j++){
            cin>> tabla[i][j]<<"\t";
        }
        cout<<endl;
    }
}
main ()
{
    int tabla[MAX][MAX],filas,columnas;
    cout<<"Introduce el numero de filas: "<<endl;
    cin>> filas;
    cout<<"Introduce el numero de columnas: "<<endl;
    cin>> columnas;
    llenaTabla(tabla,filas,columnas);
    imprimeTabla(tabla,filas,columnas);
}