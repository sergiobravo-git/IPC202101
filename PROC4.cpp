#include<iostream>

using namespace std;

void Menu(int *op) 
{
	cout<<"MENU PRINCIPAL"<<endl;
	cout<<"1. SUMAR"<<endl;
	cout<<"2. RESTAR"<<endl;
	cout<<"3. FINALIZAR"<<endl;
	cout<<"OPCION: ";
	cin>>*op;
}

int main()
{
	int x=1000;
	Menu(&x); // PASO DE PARÁMETRO POR REFERENCIA
	cout<<"Opcion regresa con el valor de: "<<x;	
}
