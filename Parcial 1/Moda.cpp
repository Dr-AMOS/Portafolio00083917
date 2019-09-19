// Moda de un arreglo //
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,s,m=s,a;
    cout<<"ingrese el tamanio: ";cin>>n;
    int A[n];
    cout<<"Ingrese los datos :\n";
    for(int i=0;i<n;i++){
        cout<<"ingrese: ";cin>>A[i];
    }
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<n;j++){
            if(A[i]==A[j] && i!=j){
                s=s+1;
            }               
        }
        if(s>=m){
        m=s;
        a=i;    
        }
    }
    
    cout<<"la moda es: "<<A[a]<<endl;
}
