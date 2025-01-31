#include <iostream>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        //v[i] = rand()%20+1; 
        cin >> v[i];
    }
}

void verVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\t";
    }
}

int ordenaInsercion(int v[], int n) {
    int contar = 0;
    for (int i = 1; i < n; i++) {
        int clave = v[i];
        int j = i - 1;
        
        while (j >= 0 && v[j] > clave) {
            contar++;
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = clave;
    }
    return contar;
}

int main() {
    int ne, comparaciones;
    cout << "Ingresa Nro de elementos del vector: ";
    cin >> ne;
    int vector[ne];
    
    llenaVector(vector, ne);
    
    cout << "Vector Original: \n";
    verVector(vector, ne);
    
    comparaciones = ordenaInsercion(vector, ne);
    
    cout << "\nVector Ordenado:\n";
    verVector(vector, ne);
    cout << "\nEl Nro de comparaciones = " << comparaciones;
    
    return 0;
}