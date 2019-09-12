#include<iostream>
#include<math.h>

using namespace std;

int factorial(int f){
	if(f==0){
	f=1;
	}else{
	f=f*factorial(f-1);	
	}
	return f;
}

int main(){
	int x;
	int kf;
	int n;
	double sum;

	cout<<"Valor de la variable x: ";
	cin>>x;
	cout<<"Desea que la sumatoria se realice desde que k=0 hasta que k sea: ";
	cin>>n;	
	for(int k=0; k<=n; k++){
	kf=factorial(k);
	sum=sum+(pow(x,k)/kf);
	}
	
	cout<<"e^x = "<<sum;
	return 0;
}
