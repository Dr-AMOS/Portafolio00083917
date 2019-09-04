#include <iostream>
using namespace std;

float getMediana(int* a, int length)
{
	if (length % 2)
	{
		return a[(int)(length / 2)];
	}
	return (float) (a[(int) (length / 2)] + a[(int) (length / 2) - 1]) / 2;
}
int main()
{
	int b[4] = { 6,9,4,2 };
	cout << "Arreglo Ejemplo: 6, 9, 4, 2";
	cout << "\nMediana: " << getMediana(b, 4);

	int length = 0;
	cout << "\n\nTamano del arreglo (maximo 100): ";
	cin >> length;
	if (length > 100) length = 100;

	int a[100];
	cout << "Elementos\n";
	for (int i = 0; i < length; i++)
	{
		cout << i << ":\t";
		cin >> a[i];
	}

	cout << "la Mediana es: " << getMediana(a, length);
}
