#include <iostream>
using namespace std;


void ejemplo(int *puntero){
	
	
	cout << "num[0] = " << *puntero << endl;
	cout << "num[1] = " << *(puntero+1) << endl;
	cout << "num[2] = " << *(puntero+2) << endl;
	cout << "num[3] = " << *(puntero+3) << endl;
}

int main()
{
	int numeros[4];
	numeros[0] = 3;
	numeros[1] = 9;
	numeros[2] = 8;
	numeros[3] = 2;
	

	
	ejemplo(numeros);
}
float mediana(int *puntero, int tamano){
	
	for(int i = 0; i<tamano; i++);

	return -1;
}
