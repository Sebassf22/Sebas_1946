#include <iostream>
using namespace std;

main() {
    int valor;
    
    cout << "Introduce un valor entre 1 y 20: ";
    cin >> valor;
    
    if (valor < 1 || valor > 20) {
        cout << "Valor fuera de rango." << endl;
        return 1; 
    }
    
    const char* categorias[] = {
        "deficiente", // 1-5
        "deficiente", 
        "deficiente", 
        "deficiente", 
        "deficiente", 
        "regular",    // 6-10
        "regular",    
        "regular",    
        "regular",   
        "regular",   
        "bueno",      // 11-15
        "bueno",      
        "bueno",   
        "bueno",    
        "bueno",     
        "muy bueno",  // 16-18
        "muy bueno",  
        "muy bueno", 
        "excelente",  // >18
        "excelente"   
    };
    
    cout << "La categoria es: " << categorias[valor - 1] << endl;
    
    return 0;
}