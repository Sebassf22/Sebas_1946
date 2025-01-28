#include <iostream>
#include <cctype>  

void identificarCadena(const char* str) {
    bool esNumerica = true;
    bool esAlfanumerica = true;
    bool esAlfabetica = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            esNumerica = false;
        }
        if (!isalnum(str[i])) {
            esAlfanumerica = false;
        }
        if (!isalpha(str[i])) {
            esAlfabetica = false;
        }
    }

    if (esNumerica) {
        std::cout << "La cadena es numerica." << std::endl;
    } else if (esAlfanumerica) {
        std::cout << "La cadena es alfanumerica." << std::endl;
    } else if (esAlfabetica) {
        std::cout << "La cadena es alfabetica." << std::endl;
    } else {
        std::cout << "La cadena no es ni numerica, ni alfanumerica, ni alfabetica." << std::endl;
    }
}

int main() {
    const char* cadena1 = "12345";
    const char* cadena2 = "abc123";
    const char* cadena3 = "hello";
    
    identificarCadena(cadena1); 
    identificarCadena(cadena2);  
    identificarCadena(cadena3);  

    return 0;
}