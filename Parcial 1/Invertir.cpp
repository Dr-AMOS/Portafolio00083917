#include <iostream>

using namespace std;

string invertir(string *arreglo, int tamano){
    string palabra = *arreglo;
    string invertida = "";
    for(int i = tamano - 1; i >= 0; i--){
        invertida += palabra[i];
    }
    return invertida;
}
int main(){

int n,s,m=s,a;

    cout<<"ingrese el tamanio: ";cin>>n;
    int A[n];
    cout<<"Ingrese los datos :\n";
    for(int i=0;i<n;i++){
        cout<<"ingrese: ";cin>>A[i];
        
    }
}

