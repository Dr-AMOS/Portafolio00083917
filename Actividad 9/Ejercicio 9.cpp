//dejar pila vacia
#include <iostream>
using namespace std;

float obtenerFondo(PilaO *s);{

	if (empty(s))
		return -1;
	float a = 0, b = 0;
	pop(s, &b);
	if (empty(s))
		return -1;
	pop(s, &a);
	push(s, b);
	push(s, a);
	

	return a;
}

float FondoNormal(PilaO *pilaA) {
	PilaO* pilaB;
	initialize(pilaB);

	float valores = 0;

	while (!empty(pilaA)) {
		pop(pilaA, &valores);
		push(&pilaB, valores);
	}

	float fondo = valores;

	while (!empty(pilaB)){
		pop(&pilaB, &valores);
		push(pilaA, valores);
	}

	return fondo;
}


int main()

{

	PilaO unapilao;
	initialize(&unapilao);


	push(&unapilao, 1.2);
	push(&unapilao, 3.4);
	


	float fondo = obtenerFondo(&unapilao);
	cout << "Fondo:" << fondo << endl;



}
