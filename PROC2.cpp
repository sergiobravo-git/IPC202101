#include<iostream>

using namespace std;

void Menu() // void IDENTIFICAR UN PROCEDIMIENTO
{
	cout<<"MENU PRINCIPAL"<<endl;
	cout<<"1. SUMAR"<<endl;
	cout<<"2. RESTAR"<<endl;
	cout<<"3. FINALIZAR"<<endl;
	cout<<"OPCION: ";
}

int LeerOpcion() // Aqui se tiene un bloque de programaci�n
                 // Sin embargo, no apare la palabra void 
                 // sino un tipo de dato (p.ej aqui int)
                 // entonces se tiene una funci�n
{
	int Opcion; // VARIABLE LOCAL de la funci�n LeerOpcion()
	cin>>Opcion;
	return Opcion; // Una funci�n siempre debe retornar un valor
}

int main()
{
	Menu();
	int x = LeerOpcion();
	cout<<"Opcion regresa con el valor de: "<<x;	
}
