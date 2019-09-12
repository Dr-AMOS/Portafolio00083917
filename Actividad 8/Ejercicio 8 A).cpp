#include <iostream>
using namespace std;

struct Tpila{
	float elements[100];
	int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
	s->top = -1;
}

bool empty(Pila *s){
	return s->top < 0;
}

void push(Pila *s, float e){
	if(s->top < 99){
		(s->top)++;
		s->elements[s->top] = e;
	}
}

void pop(Pila *s, float *e){
	if(s->top >= 0){
		*e = s->elements[s->top];
		(s->top)--;
	}
}

float dejandopilavacia(Pila *s){
	if(empty(s)){
		return -1;
	}
	else{
		float a = 0, b = 0;
		a=(s->top);
		for(int i=0;i<a+1;i++){
			if(empty(s)){
				return -1;
			}
			else{
				pop(s, &b);
			}
		}
		return b;
	}
}

//Funcion para otener el valor de la pila dejandola vacia
float obtenerFondo(PilaO* s){

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
