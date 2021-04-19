#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(int argc, char * argv[])
{
	cout<<"El valor de argc="<<argc<<endl;
	if (argc==2)
	{
		int edad = atoi(argv[1]);
		cout<<"RESPUESTA: ";
	
		if (edad>17)
	   		cout<<"Usted es un adulto.\n";
	   	else cout<<"Usted es menor de edad.\n";
	}
	else cout<<"numero indefinido de argumentos, solo ponga uno (edad)."<<endl;
}
