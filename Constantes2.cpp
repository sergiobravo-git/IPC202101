#include<iostream>

using namespace std;

int main()
{
	const string 
	nombre_presidente = "Alejandro Giammatei";

	const float    
	valor_iva_guatemala      = 12,
	tipo_de_cambio_dolar     = 7.67;
	
	printf("El presidente se llama %s el iva de Guate es de %2.2f\n",
		nombre_presidente.c_str(),
		valor_iva_guatemala);
	printf(" el tipo de cambio en Guate es de %2.2f\n",
		tipo_de_cambio_dolar);	  
}
