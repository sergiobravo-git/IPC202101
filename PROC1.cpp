#include<iostream>

int Opcion; // DEFINICIÓN DE UNA VARIABLE GLOBAL

using namespace std;

void Menu() // void IDENTIFICAR UN PROCEDIMIENTO
{
	cout<<"MENU PRINCIPAL"<<endl;
	cout<<"1. SUMAR"<<endl;
	cout<<"2. RESTAR"<<endl;
	cout<<"3. FINALIZAR"<<endl;
	cout<<"OPCION: ";
}

int LeerOpcion() // Aqui se tiene un bloque de programación
                 // Sin embargo, no apare la palabra void 
                 // sino un tipo de dato (p.ej aqui int)
                 // entonces se tiene una función
{
	cin>>Opcion;
	return Opcion; // Una función siempre debe retornar un valor
}

int main()
{
	Menu();
	LeerOpcion();
	cout<<"Opcion regresa con el valor de: "<<Opcion;	
}
