#include <iostream>
using namespace std;
struct persona{
    int id;
    string nombre;
    int edad;
    bool casado=false;
};
void ingresarRegistro(persona per[], int n){
    int i;
    char resp;
    for(i=0;i<0;i++){
        per[i].id=i+1;
        cout<<"Ingrese el nombre de la persona: ";
        cin>>per[i].nombre;
        cout<<"Ingrese la edad de la persona: ";
        cin>>per[i].edad;
        cout<<"Es casado? <<S/N>>: ";
        cin.get(resp);
        cin.ignore();
        if(resp=='s' || resp=='S')
            per[1].casado=1;
    }
}
void mostrarRegistro(oersona per[], int n){
    int i;
    cout<<"ID\tNOMBRE\tEDAD\tCASADO"<<endl;
    for(i=0;i<n;i++){
        cout<<per[i].id<<"\t";
        cout<<per[i].nombre<<"\t";
        cout<<per[i].edad<<"\t";
        (per[i].casado)?cout<<"SI"<<endl:cout<<"NO"<<endl;
    }
}
persona buscarPersonaId(persona per[],int n, int id)
{
    int id;
    persona encontrada;
    for(i=0;i<n;i++)
    {
        if(per[i].id == id)
    }
}
main()
{
    int np,id;
    string nombre
    cout<<"Ingrese la cantidad de personas: ";
    cin>> np;
    persona personas[np], encontrada;
    ingresarDatosRegistro(personas, np);
    mostrarDatosRegistro(persona, np);
    cout<<"Ingrese el id de la persona a buscar"

    }
}