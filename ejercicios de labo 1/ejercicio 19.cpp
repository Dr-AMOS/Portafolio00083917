#include<iostream>

using namespace std;

struct numeros{
  int real1;
  int real2;
  int complejo1;
  int complejo2;
  int sumareal;
  int sumacompleja;
};

int main(){
  struct numeros suma;

  cout<<"introduzca la parte real : "<<endl;
  cout<<"Parte Real 1:  ";
  cin>>suma.real1;
  cout<<"Parte Real 2:  ";
  cin>>suma.real2;

  cout<<"introduzca la parte imaginaria "<<endl;
  cout<<"Parte Imaginaria:  ";
  cin>>suma.complejo1;
  cout<<"Parte imaginaria 2:  ";
  cin>>suma.complejo2;


  suma.sumareal=suma.real1+suma.real2;
  suma.sumacompleja=suma.complejo1+suma.complejo2;

  cout<<"El resultado es: "<<suma.sumareal<<"+"<<suma.sumacompleja<<"j"<<endl;

  return 0;
}
