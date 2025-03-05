#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_ARTICULOS = 6;
const int NUM_SUCURSALES = 4;

struct DatosEmpresa {
    vector<double> precios;         
    vector<vector<int>> cantidades;
};


void leerDatos(DatosEmpresa& datos) {
  
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        double precio;
        cin >> precio;
        datos.precios.push_back(precio);
    }

  
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        vector<int> sucursal;
        for (int j = 0; j < NUM_ARTICULOS; j++) {
            int cantidad;
            cin >> cantidad;
            sucursal.push_back(cantidad);
        }
        datos.cantidades.push_back(sucursal);
    }
}


double calcularRecaudacionSucursal(int sucursal, const DatosEmpresa& datos) {
    double recaudacion = 0.0;
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        recaudacion += datos.precios[i] * datos.cantidades[sucursal][i];
    }
    return recaudacion;
}


double calcularRecaudacionTotal(const DatosEmpresa& datos) {
    double recaudacionTotal = 0.0;
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        recaudacionTotal += calcularRecaudacionSucursal(i, datos);
    }
    return recaudacionTotal;
}


int cantidadTotalArticulo(int articulo, const DatosEmpresa& datos) {
    int total = 0;
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        total += datos.cantidades[i][articulo];
    }
    return total;
}


int cantidadSucursalSur(const DatosEmpresa& datos) {
    int totalSur = 0;
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        totalSur += datos.cantidades[0][i];  
    }
    return totalSur;
}

int cantidadArticuloTecladoSucursalNorte(const DatosEmpresa& datos) {
    int totalTecladoNorte = 0;
    int articuloTeclado = 2; 
    totalTecladoNorte = datos.cantidades[1][articuloTeclado];  
    return totalTecladoNorte;
}


int sucursalMayorRecaudacion(const DatosEmpresa& datos) {
    double maxRecaudacion = 0.0;
    int sucursalMax = -1;
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        double recaudacion = calcularRecaudacionSucursal(i, datos);
        if (recaudacion > maxRecaudacion) {
            maxRecaudacion = recaudacion;
            sucursalMax = i;
        }
    }
    return sucursalMax;
}


void guardarResultadosEnArchivo(const DatosEmpresa& datos, ofstream& archivo) {
    archivo << fixed << setprecision(2);

 
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        archivo << "Artículo " << (i + 1) << ": " << cantidadTotalArticulo(i, datos) << endl;
    }

    
    archivo << "\nCantidad de artículos vendidos en la sucursal Sur: " << cantidadSucursalSur(datos) << endl;

    
    archivo << "\nCantidad del artículo 'Teclado' en la sucursal Norte: " << cantidadArticuloTecladoSucursalNorte(datos) << endl;

    
    for (int i = 0; i < NUM_SUCURSALES; i++) {
        archivo << "Sucursal " << (i + 1) << ": " << calcularRecaudacionSucursal(i, datos) << endl;
    }

 
    archivo << "\nRecaudación total de la empresa: " << calcularRecaudacionTotal(datos) << endl;

    
    int sucursalMax = sucursalMayorRecaudacion(datos);
    archivo << "\nSucursal con mayor recaudación: Sucursal " << (sucursalMax + 1) << endl;
}
