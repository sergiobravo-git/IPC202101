#include<iostream>

int Opcion;

using namespace std;

void Menu() 
{
	cout<<"MENU PRINCIPAL"<<endl;
	cout<<"1. SUMAR"<<endl;
	cout<<"2. RESTAR"<<endl;
	cout<<"3. FINALIZAR"<<endl;
	cout<<"OPCION: ";
	cin>>Opcion;
}

int main()
{
	Menu();
	cout<<"Opcion regresa con el valor de: "<<Opcion;	
}
