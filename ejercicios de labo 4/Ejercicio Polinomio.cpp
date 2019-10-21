#include<iostream>
#include<math.h>
using namespace std;

struct Numeros{
	int coef;
	int exp;
};typedef struct Numeros numeros;

struct Nodo{
	numeros dato;
	Nodo *siguiente;
};
typedef struct Nodo Nodo;
Nodo *lista;

numeros agregar(){
	numeros n;
	cout<<"Agrege el coeficiente"<<endl;
	cin>>n.coef;
	cout<<"Agrege el exponente"<<endl;
	cin>>n.exp;

	return n;
}

void insertarLista(numeros n) {
    Nodo *nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->siguiente = lista;
    
    lista = nuevo;
}

void mostrarNumeros(numeros n){
	cout<<"Coeficiente: "<<n.coef<<endl;
	cout<<"Exponente: "<<n.exp<<endl;
}

void mostrarLista(Nodo *lista) {
    Nodo *s = lista;

    while (s != NULL) {
        mostrarNumeros(s->dato);
        s = s->siguiente;
	cout<<endl;
    }
}


float mostrarResultado(numeros n){
	int x;
	float r;
	cout<<"ingrese valor de x: ";
	cin>>x;
	r=(n.coef)*(pow(x,n.exp));
	
	return r;
}


void mostraroperacion(Nodo *lista) {
    Nodo *s = lista;

    while (s != NULL) {
        cout<<mostrarResultado(s->dato)<<"+";
        s = s->siguiente;
	
	cout<<endl;
    }
	cout<<"Sumando los terminos se obtiene P(x) ";
}


int main(){
	lista=NULL;
	numeros dato;
	bool continuar=true;
	int opc;
	numeros n;
	int x;
	
	while(continuar){
	cout<<"MENU: \n 1-)Ingresar datos \n 2-)Mostrar orden de coeficientes y exponentes \n3-)Salir\n4-)Ingresar valor de x para operar polinomio "<<endl;
	cin>>opc;
	
	switch(opc){

	case 1:
	n=agregar();
	insertarLista(n);
	break;
	case 2:
	mostrarLista(lista);
	cout<<endl;
	system("pause");
	break;
	case 3:
		continuar=false;
	break;
	case 4: 
	mostraroperacion(lista);
	system("pause");
	break;
					}
	system("cls");
}
	return 0;
}
