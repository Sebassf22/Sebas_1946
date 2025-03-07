#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>  
#include <ctime>    
#include <algorithm> 

using namespace std;

int main() {
    int n_conductores = 5;  
    int dias = 7;  
    vector<string> dias_semana = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};

 
    vector<string> nombres(n_conductores);   
    vector<vector<int>> kms(n_conductores, vector<int>(dias)); 
    vector<int> total_kms(n_conductores, 0);  

  
    srand(time(0));

    
    cout << "Ingrese los nombres de los conductores: \n";
    for (int i = 0; i < n_conductores; i++) {
        cout << "Conductor " << i + 1 << ": ";
        cin >> nombres[i];
    }

   
    for (int i = 0; i < n_conductores; i++) {
        cout << "\nKilómetros recorridos por " << nombres[i] << " durante la semana:\n";
        for (int j = 0; j < dias; j++) {
            
            kms[i][j] = rand() % 121 + 30;  
            total_kms[i] += kms[i][j];  
        }
    }

    vector<int> indices(n_conductores);
    for (int i = 0; i < n_conductores; i++) {
        indices[i] = i;
    }
    sort(indices.begin(), indices.end(), [&](int a, int b) {
        return total_kms[a] > total_kms[b]; 
    });

    cout << "\nTabla de kilómetros recorridos por cada conductor:\n";
    cout << setw(15) << "Conductor" << setw(15) << "Lunes" << setw(15) << "Martes" << setw(15) << "Miércoles"
         << setw(15) << "Jueves" << setw(15) << "Viernes" << setw(15) << "Sábado" << setw(15) << "Domingo"
         << setw(15) << "Total km" << endl;

    for (int i = 0; i < n_conductores; i++) {
        int index = indices[i];
        cout << setw(15) << nombres[index];
        for (int j = 0; j < dias; j++) {
            cout << setw(15) << kms[index][j];  
        }
        cout << setw(15) << total_kms[index] << endl;  
    }

    
    int max_kms = total_kms[indices[0]];
    string max_nombre = nombres[indices[0]];

    cout << "\nConductor con más kilómetros recorridos: " << max_nombre << " con " << max_kms << " km.\n";

    cout << "\nRepresentación gráfica de los kilómetros recorridos:\n";
    for (int i = 0; i < n_conductores; i++) {
        int index = indices[i];
        cout << setw(15) << nombres[index] << ": ";
        for (int j = 0; j < total_kms[index]; j += 10) {  
            cout << "*";
        }
        cout << " (" << total_kms[index] << " km)\n";
    }

    return 0;
}

