#include <iostream>
#include <vector> 
#include <cstring>
using namespace std;
class TarjetaDebito
{
    public:
    char NumeroTarjeta[];
    char Titular [];
    bool esPrincipal;

    TarjetaDebito (const char *numero, const char *titular, bool principal ){
        esPrincipal = principal;
    }
}
class cuenta 
{
    public:
    Char NumeroCuenta[];
    Char Descripcion[];
    Cuenta( const char* numero, const char* descripcion)
    
}

class cliente 
{
    public:
    char codigo[];
    char cedula[];
    char nombre[];
    char direccion[];
    char email[];
    char telefono[];
    vector <Cuenta> cuentas;
    vector <TarjetaDebito> tarjetasDebito;

cliente (const char* cod, const char* ced, const char* nom, const char* dir, const char* mail, const char* tel);
{
    strncpy(this -> codigo, cod, sizeof(this ->codigo) -1 );
    strncpy(this -> cedula, ced, sizeof(this ->cedula) -1 );
    strncpy(this -> nombre, nom, sizeof(this ->nombre) -1 );
    strncpy(this -> direccion, dir, sizeof(this ->direccion) -1 );
    strncpy(this -> email, mail, sizeof(this ->email) -1 );
    strncpy(this -> telefono, tel, sizeof(this ->telefono) -1 );

}
void agregarCuenta(cuenta){
    cuentas.push_back(cuenta);
}

void agregarTarjetaDebito(tarjetaDebito tarjeta){
    tarjetaDebito.push_back(tarjeta);
}
}
main ()
{
    Cliente cliente1("001", "12456789", "Sebastian Suarez", "calle los olivos", "cssf@gmail.com", "098254871");
    cliente1.agregarCuenta(Cuenta("A1001", "Cuenta de ahorros"))

    cout << "Cliente: " << cliente1.nombre <<endl;
    cin
}
