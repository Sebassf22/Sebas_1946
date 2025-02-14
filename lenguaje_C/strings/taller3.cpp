#include <iostream>
#include <string>

int main() {
    std::string cadena{"Pablo es un policia"};
    std::string objetivo;
    std::string porcion;
    
    std::cout << "Frase original: " << cadena << std::endl;
    std::cout << "Ingrese la palabra a cambiar: ";
    std::cin >> objetivo;
    
    int pos = cadena.find(objetivo);
    if (pos != std::string::npos) {
        std::cout << "Ingrese la nueva palabra: ";
        std::cin >> porcion;
        
        cadena.replace(pos, objetivo.size(), porcion);
        std::cout << "Frase modificada: " << cadena << std::endl;
    } else {
        std::cout << "La palabra no existe en la frase." << std::endl;
    }
    
    return 0;
}
