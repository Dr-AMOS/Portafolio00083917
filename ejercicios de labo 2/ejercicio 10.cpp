// Ejercicio 10
#include <iostream>
using namespace std;

double potenrec(int,int);
int main()
{
int x, y;
cout<<"introduzca base: ";
cin>> x;
do
{
    cout<<"introduzca exponente >=0 :";
    cin >> y;
}while (y<0);
cout<<x<<" elevado a: " <<y<<" = "<<
potenrec(x,y)<<endl;
system("pause");
}
double potenrec(int x,int y)
{
    if(y==0)
    return 1;
    else
    return x*(potenrec(x,y-1));
}
