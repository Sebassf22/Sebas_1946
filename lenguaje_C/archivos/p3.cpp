#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdlib>  
#include <ctime>    

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
        cout << "\nKilometros recorridos por " << nombres[i] << " durante la semana:\n";
        for (int j = 0; j < dias; j++) {
            kms[i][j] = rand() % 121 + 30;  
            total_kms[i] += kms[i][j];  
        }
    }

 
    cout << "\nTabla de kilometros recorridos por cada conductor:\n";
    cout << setw(15) << "Conductor" << setw(15) << "Lunes" << setw(15) << "Martes" << setw(15) << "Miercoles"
         << setw(15) << "Jueves" << setw(15) << "Viernes" << setw(15) << "Sabado" << setw(15) << "Domingo"
         << setw(15) << "Total km" << endl;

    for (int i = 0; i < n_conductores; i++) {
        cout << setw(15) << nombres[i];
        for (int j = 0; j < dias; j++) {
            cout << setw(15) << kms[i][j];  
        }
        cout << setw(15) << total_kms[i] << endl;  
    }

    
    int max_kms = total_kms[0];
    int max_index = 0;
    for (int i = 1; i < n_conductores; i++) {
        if (total_kms[i] > max_kms) {
            max_kms = total_kms[i];
            max_index = i;
        }
    }

    cout << "\nConductor con mas kilometros recorridos: " << nombres[max_index] << " con " << max_kms << " km.\n";

   
    cout << "\nRepresentacion grafica de los kilometros recorridos:\n";
    for (int i = 0; i < n_conductores; i++) {
        cout << setw(15) << nombres[i] << ": ";
        for (int j = 0; j < total_kms[i]; j += 10) {  
            cout << "*";
        }
        cout << " (" << total_kms[i] << " km)\n";
    }

    return 0;
}
