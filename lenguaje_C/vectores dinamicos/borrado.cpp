#inlcude <iostream>
#include <vector>
using namespace std;
main(){
    vector <int> numeros;
    for(int i=0;i<10;i++){
        numeros.push_back(i+1);
    }
    cout<<"Elementos del  vector: "<<endl;
    for(auto x:numeros){
    cout<<endl;
    }
    cout<<"Tamano del vector: "<<numeros.size();
    numeros.erase(numeros.begin()+3,numeros.begin()+6);
    for(auto x:numeros){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Tamano del vector: "<<numeros.size()<<endl;
}