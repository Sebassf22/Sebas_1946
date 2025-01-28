#include <iostream>
#include <stdlib.h>
using namespace std;
void llenaVector(int v[], int n){
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        //v[i] = rand()%20+1;
        cin >> v[i];
    }
}
void copiaVector(int origen[], int destino[], int n){
    for (int i= 0; i < n; i++){
        destino[i] = origen [i];
    }
}
int ordenaBurbujav1(int v[], int n){
    int aux, contador = 0;
    for (int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    return contador;
}
int ordenaBurbujav2(int v[], int n){
    int mejora =1;
    int aux, contador = 0;
    for (int i=0; i<n; i++){
        for(int j=0; j<n-mejora; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
        mejora++;
    }
    return contador;
}
int ordenaBurbujav3(int v[], int n){
    int mejora =1;
    bool cambio = true;
    int aux, contador = 0;
    for (int i=0; i<n && cambio; i++){
        cambio = false;
        for(int j=0; j<n-mejora; j++){
            contador++;
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                cambio = true;

            }
        }
        mejora++;
    }
    return contador;
}
void muestraVector (int v[], int n){
    for (int i=0;i<n; i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
}
void determinaMejorVersion(int compV1, int compV2, int compV3){
    if (compV1 <= compV2 && compV1 <= compV3){
        cout << "La mejor version es la burbuja v1 con "<< compV1 << "comparaciones" << endl;
    } else if (compV1 <= compV1 && compV2 <= compV3){
        cout << "La mejor version es la burbuja v2 con "<< compV2 << "comparaciones" << endl;
    } else {
        cout << "La mejor version es la burbuja v3 con "<< compV3 << "comparaciones" << endl;
    }
}
main(){
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;

    int vecOriginal [ne], vec [ne];
    llenaVector(vecOriginal, ne);

    cout << "Vector original: ";
    muestraVector(vecOriginal, vec, ne);

    copiaVector(vecOriginal, vec, ne);
    int comparacionesV1 = ordenaBurbujav1 (vec, ne);
    cout<< "Comparaciones burbuja v1" << comparacionesV1 << endl;

    copiaVector(vecOriginal, vec, ne);
    int comparacionesV2 = ordenaBurbujav2 (vec, ne);
    cout<< "Comparaciones burbuja v2" << comparacionesV2 << endl;

    copiaVector(vecOriginal, vec, ne);
    int comparacionesV3 = ordenaBurbujav3 (vec, ne);
    cout<< "Comparaciones burbuja v3" << comparacionesV3 << endl;    
    
    determinaMejorVersion(comparacionesV1, comparacionesV2, comparacionesV3);

    return 0;
    
}