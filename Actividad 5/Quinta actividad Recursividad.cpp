#include <iostream>
using namespace std;

int Producto(int a, int b){
	if(b==1){
	
		cout<< "a="<<a<<"caso base"<<endl;
		return a;
	
	}else{
		return a+Producto(a, b-1);
	}
}

int main(){
	
	cout<<"El Producto de 4x5 ";
	int c= Producto(4, 5);
	cout<<"el resultado es"<< c<<endl;
	
}
