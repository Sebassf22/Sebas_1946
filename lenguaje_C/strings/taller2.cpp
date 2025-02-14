#include <iostream>
using namespace std;
main()
{
    string cadena1 = ("informatica");
    string cadena4;
    const char *auxiliar;
    string cadena2(cadena1); //cadena2 = cadena1
    string cadena3(10,'*');
    cadena1.push_back('Z'); //permite añadir un caracter al final
    cout<<cadena1;
    cadena1.at(0)= 'I'; //metod at accede a un indice de la cadena : cadena1[0]
    cout<<cadena1<<endl;
    //usando el metod front y back para cambiar los caracteres inicio y final
    cadena1.front()='i';
    cadena1.back()='A';
    cout<<cadena1<<endl;
    auxiliar = cadena1.c_str(); //convierte un array de tipo string a un array de tipo char
    cout<<"auxiliar array char: "<< auxiliar <<endl;
    (cadena4.empty())?cout<< "Cadena Vacia\n":cout<<"Cadena no vacia\n";
    //Tamaño maximo de caracteres que puede almacenar la cadena
    cout<< "Tamano maximo; " <<cadena1.max_size()<<endl;
    //Tamaño en bytes del objeto string que ocupa actualmente
    cout << "Capacidad: " <<cadena1.capacity()<<endl;
    //usamdo el  metodo compare para comparar 2 cadenas
    cout << "cad1= " << cadena1 << " cad2= " << cadena2<<endl;
    cadena1 = "mola";
    cadena2 = "txyz";
    int comparacion = cadena1.compare(cadena2);
    cout << "comparacion: " << comparacion << endl;
    int encontrado = cadena1.find("cos");
    cout<<"econtrado = "<<encontrado<<endl;
    (cadena1.find("cos")== string::npos)?cout<<"No encontrado":cout<<"encontrado";
}