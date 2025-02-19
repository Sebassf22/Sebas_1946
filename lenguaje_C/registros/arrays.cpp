#include <iostream>
#include <iomanip>
using namespace std;
struct estudiante{
    int id;
    string nombre;
    float notap;
};
main()
{
    int ne;
    float suma=0, promedio=0;
    bool ordena = true;
    cout<<"Ingrese la cantidad de estudiantes que desea ingresar: ";
    cin>>ne;
    estudiante estudiante(ne), aux;
    for(int i=0;i<ne;i++){
        cout<<"Ingrese el id del estudiante: ";
        cin>> estudiante[i].id;
        cout<<"Ingrese el nombre del estudiante: ";
        cin.ignore();
        getline(cin,estudiante[i].nombre);
        cout<<"Ingrese la nota del estudiante: ";
        cin>> estudiante[i].notap;
    }
    cout<<"Datos ingresados: "<<endl;
    cout<<setw(5)<<"ID"<<setw(10)<<"Nombres"<<setw(20)<<"Notas"<<endl;
    for (int i=0;i<ne;i++){
        cout<<setw(5);
        cout<<estudiante[i].id<<setw(10);
        cout<<estudiante[i].nombres<<setw(20);
        cout<<estudiante[i].notap<<endl;
        suma+=estudiante[i].notap;
    }
    cout<<"Promedio de notas = "<<(float)suma/ne<<endl;
    cout<<"Listado de estudiantes de mayor nota a menor nota: "<<endl;
    for(int i=0;i<ne-1 && ordena; i++){
        ordena =false;
        for(int j=0;j<ne;j++){
            if(estudiante[j]notap < estudainte[j+1].notap){
                aux = estudiante[j+1];
                estudiante[j+1]=estudiante[j];
                estudiante[j]=aux;
                ordena=true
            }
        }
    }
}