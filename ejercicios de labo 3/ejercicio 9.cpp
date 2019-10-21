#include <iostream>
#include <vector>
using namespace std;

struct TPersonas{
    long carnet;
    string nombre;
    string apellido;
    int edad;
    long numero;
	int identificador;
    string correo;
};
typedef struct TPersonas Persona;

Persona solicitarPersona(){
    Persona p;
    cout << "carnet: ";   cin >> p.carnet;
    cout << "Primer Nombre: "; cin >> p.nombre;
    cout << "Primer Apellido: "; cin >> p.apellido;
    cout<<"edad: ";cin>>p.edad;
    cout<<"Numero de telefono: ";cin>>p.numero;
    cout<<"Correo electronico: ";cin>>p.correo;
	cout<<"Numero identificador 1,2,3...etc: ";cin>>p.identificador;
    return p;
}

void mostrarPersona(Persona p){
   
     cout << "carnet: " << p.carnet << endl;
    cout << "Nombre: "<< p.nombre << endl;
    cout << "Apellido: "<< p.apellido << endl;
    cout<<"edad: "<<p.edad<< endl;
    cout<<"Numero de telefono: "<<p.numero<< endl;
    cout<<"Correo electronico: "<<p.correo<< endl;
    cout << endl;
}

vector<Persona> lista;

void agregarPersona(){
    Persona p = solicitarPersona();
    bool continuar = true;
    do{
            lista.push_back(p);
                continuar = false;          
        }while(continuar);
    }


void mostrarLista() {
    for (int i = 0; i < lista.size(); i++)
        mostrarPersona(lista[i]);
}

struct TNodo{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void eliminar(){
	int unNumero;
    cout << "Numero identificador de persona a eliminar: ";
    cin >> unNumero;
    
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).identificador != unNumero){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "La persona a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    cout << "Persona borrada!" << endl;
}



int main(){
   
    bool continuar = true;
    do{
        int opcion = 0;
        cout <<endl<< " Menu: \n\t1) Llenar lista\n\t2) Mostrar a todas las personas\n\t3)Eliminar persona\n\t4)Actualizar datos"
            << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        cout<<endl;
        switch(opcion){
            case 1: cout << "Llenando lista..." << endl;
                agregarPersona();
            break;
            case 2: cout << "   Mostrando datos de la lista" << endl;
                mostrarLista();
            break;
            case 3:
				eliminar();
            break;
            /*case 4:
            break;*/
            case 5: continuar = false;
            break;
            default: cout << "Opcion no permitida!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
