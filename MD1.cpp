#include<iostream>
#include<stdio.h>

using namespace std;

void Procedimiento(int *x)
{
	cout<<"Ingrese el valor de x:";
	cin>>*x;
}

int main()
{
	int x; //Creamos un entero
	int *apuntador = &x;//Creamos una apuntador a la posici�n en memoria de "x"
	cin>>*apuntador;    //Le asignamos un valor a esa posici�n de memoria.
	cout<<"seg�n este programa x="<<x<<endl;
	Procedimiento(&x);
	cout<<endl<<
	"seg�n este programa x="<<x<<" despues de ejecutar Procedimiento."<<
	endl;
	
}
