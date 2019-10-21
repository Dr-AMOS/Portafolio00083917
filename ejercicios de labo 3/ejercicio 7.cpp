#include<iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void insertarLista(Nodo *&lista,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&(aux1->dato<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if(lista==aux1){
	lista=nuevo_nodo;
}else{
	aux2->siguiente=nuevo_nodo;}

	nuevo_nodo->siguiente=aux1;
}

void mostrarLista(Nodo *lista){
	Nodo *actual=new Nodo();

	actual=lista;
	while(actual!=NULL){
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
}
}

void eliminarNodo(Nodo *&lista,int n){
	if(lista!=NULL){
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		aux_borrar=lista;

	while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
	anterior=aux_borrar;
	aux_borrar=aux_borrar->siguiente;
}
	if(aux_borrar==NULL){
	cout<<"El elemento no existe";	
}
	else if(anterior==NULL){
		lista=lista->siguiente;
		delete aux_borrar;
}
	else{
	anterior->siguiente=aux_borrar->siguiente;
	delete aux_borrar;
}
}
}



int main(){
	Nodo *lista=NULL;
	int dato;
	int opc;	
	bool conti=true;
	bool continuar = true;
    do{
        cout<<"ingrese un dato o presione 0 para terminar..."<<endl;
		cin>>dato;
		insertarLista(lista,dato);
	if(dato==0){
	continuar=false;
}	
    }while(continuar);
	do{
	cout<<"Si desea ver los elementos presione 1"<<endl;
	cout<<"Si desea borrar un elemento presione 2"<<endl;
	cout<<"Presione 3 para salir"<<endl;
	cin>>opc;
	if(opc==3){conti=false;}
	if(opc==1){
	mostrarLista(lista);
}	else if(opc==2){
	cout<<"Ingrese el dato que desea eliminar"<<endl;
	cin>>dato;
}else{
	cout<<"opcion invalida"<<endl;
}
	
}while(conti);

	
	
	
	return 0;
}
