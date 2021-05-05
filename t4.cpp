#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

// Esto define la clase CRender
class CTrianguloPascal {
	int  nivel;
	
	int factorial(int x);
	
	int combinacion(int m, int n);

public:

	void dibujar();

	int getNivel();

	void setNivel(int entrada);
	
};

int CTrianguloPascal::factorial(int x)
{
	if (x==0)
	return 1;
	else x * factorial(x-1);
}
	
int CTrianguloPascal::combinacion(int m, int n)
{
	return factorial(m)/(factorial(m)*factorial(m-n));
}

void CTrianguloPascal::dibujar()
{
	for(int filas=0;filas<=nivel;filas++)
	{
		for(int columnas=0;columnas<=filas;columnas++)
			printf("%5d",combinacion(filas,columnas));
		printf("\n");
	}
}


int CTrianguloPascal::getNivel()
{
	return nivel;	
}


void CTrianguloPascal::setNivel(int entrada)
{
	nivel = entrada;	
}	

int main (int argc, char **argv){
    // crear 2 objetos CRender
    CTrianguloPascal t1, t2;

	t1.setNivel(3);
	
	printf("Estamos dibujando el triángulo de pascal 1\n");
	t1.dibujar();
	
	t2.setNivel(5);
	
	printf("Estamos dibujando el triángulo de pascal 2");
	t2.dibujar();

}
