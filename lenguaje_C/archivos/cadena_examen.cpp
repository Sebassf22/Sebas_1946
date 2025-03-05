#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string ordenarPorLongitud(const string& input) {
    stringstream ss(input);
    vector<string> palabras;
    string palabra;

    
    while (ss >> palabra) {
        palabras.push_back(palabra);
    }

   
    sort(palabras.begin(), palabras.end(), [](const string& a, const string& b) {
        return a.size() > b.size(); 
    });


    string resultado;
    for (size_t i = 0; i < palabras.size(); i++) {
        if (i != 0) {
            resultado += " ";  
        }
        resultado += palabras[i];
    }

    return resultado;
}

int main() {
    string input;
    cout << "Ingrese la cadena original: ";
    getline(cin, input);  

    string resultado = ordenarPorLongitud(input);
    cout << "Cadena resultado: " << resultado << endl;

    return 0;
}
