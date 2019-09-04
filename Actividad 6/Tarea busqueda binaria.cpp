#include <iostream>
using namespace std;

int find(int* a, int s, int f, int q)
{
	int mid = (s + f) / 2;
	if (s > f) return -1;
	if (a[mid] == q) return mid;
	if (a[mid] > q) return find(a, s, mid - 1, q);
	if (a[mid] < q) return find(a, mid + 1, f, q);
}

int main()
{
	int a[8] = { 2,7,9, 10, 17, 18, 33, 42 };
	int query;
	cout << "numero que se busca: ";
	cin >> query;
	cout << "Posicion en el arreglo (-1 = no se encontro): " << find(a, 0, 7, query);
}
	

	
	
	

