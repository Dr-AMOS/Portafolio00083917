#include <iostream>
using namespace std;

void calculos(int num, int *doble, int *triple) {
	*doble = 2 * num;
	*triple = 3 * num;
}
int main()
{
	int numero = 2, doble = 0, triple = 0;

	calculos(numero, &doble, &triple);

	cout << "el doble de 2 es " << doble << endl;
	cout << "el triple de 2 es " << triple << endl;

cout<<"direccion del doble de 2"<< &doble <<endl;
cout<<"direccion del triple de 2"<< &triple<<endl;

int*puntero = &doble;
int*otropuntero = &triple;

cout<<"Direccion almacenada del puntero "<< puntero<<endl;
cout<<"valor de la variable apuntada por puntero "<<(*puntero)<<endl;

cout<<"Direccion almacenada del otro puntero"<<otropuntero<<endl;
cout<<"valor de la variable apuntada por el otro puntero "<< (*otropuntero)<<endl;
	return 0;
}
