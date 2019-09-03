#include <iostream>
using namespace std;

int buscar(int x, int low, int high, int mid){
	if (low>high)
		return (-1);
	
	mid = (low+high)/2;
	if(x==a[mid])
		return (mid);
	
	if(x<a[mid])
		return buscar(x, low, mid-1);
	else
		return buscar(x, mid+1, high);
}

int main (){
	
	int x = {1,3,4,5,17,18,31,33};
     
	cout<<"Digite un numero";
	cin<<x;


}
	

	
	
	

