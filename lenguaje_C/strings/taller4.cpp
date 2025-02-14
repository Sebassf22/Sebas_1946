#include <iostream>
#include <string>

int main() {
    std::string cadena;
    std::cout << "Ingrese la frase original: ";
    std::getline(std::cin, cadena);
    
    int n;
    std::cout << "Ingrese la cantidad de palabras a cambiar: ";
    std::cin >> n;
    std::cin.ignore(); 
    
    for (int i = 0; i < n; ++i) {
        std::string objetivo, porcion;
        std::cout << "Ingrese la palabra a cambiar: ";
        std::cin >> objetivo;
        std::cout << "Ingrese la nueva palabra: ";
        std::cin >> porcion;
        std::cin.ignore(); 
        
        size_t pos = 0;
        while ((pos = cadena.find(objetivo, pos)) != std::string::npos) {
            cadena.replace(pos, objetivo.size(), porcion);
            pos += porcion.size(); 
        }
    }
    
    std::cout << "Frase modificada: " << cadena << std::endl;
    return 0;
}
