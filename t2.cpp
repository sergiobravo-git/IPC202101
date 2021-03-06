#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

// Esto define la clase CRender
class CTrianguloPascal {

	int  nivel;
	
	int factorial(int x)
	{
		if (x==0)
		return 1;
		else x * factorial(x-1);
	}
	
	int combinacion(int m, int n)
	{
		return factorial(m)/(factorial(m)*factorial(m-n));
	}

public:
	CTrianguloPascal()
	{
	}
	CTrianguloPascal(int entradanivel)
	{
		nivel = entradanivel;
	}
	void dibujar()
	{
		for(int filas=0;filas<=nivel;filas++)
		{
			for(int columnas=0;columnas<=filas;columnas++)
				printf("%5d",combinacion(filas,columnas));
			printf("\n");
		}
	}
	int getNivel()
	{
		return nivel;	
	}
	void setNivel(int entrada)
	{
		nivel = entrada;	
	}	
};

int main (int argc, char **argv){
    // crear 2 objetos CRender
    CTrianguloPascal t1(3), t2;

	
	printf("Estamos dibujando el tri�ngulo de pascal 1\n");
	t1.dibujar();
	
	t2.setNivel(5);
	
	printf("Estamos dibujando el tri�ngulo de pascal 2");
	t2.dibujar();

}
