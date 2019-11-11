#include <iostream>
#include <stdlib.h>

using namespace std;

/*---------  Estructura del arbol  -------*/
typedef struct nodo{
     int nro;
     struct nodo *izq, *der;
}*ABB;

int numNodos = 0; // nummero de nodos del arbol ABB
int numK = 0, k;     //  nodos menores que un numero k ingresado



