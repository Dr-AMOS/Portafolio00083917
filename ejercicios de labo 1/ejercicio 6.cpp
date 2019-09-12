#include <iostream>
#include <string>
using namespace std;

string invertir(string *oracion, int tamano){
    string palabra = *oracion;
    string invertida = "";
    for(int i = tamano - 1; i >= 0; i--){
        invertida += palabra[i];
    }
    return invertida;
}

int main(){
    string frase = "";

    cout << "Escriba un oracion: ";
    getline(cin, frase);
    int tamano = frase.length();

    cout << "Oracion invertida: " << invertir(&frase, tamano) << endl;

    return 0;
}
