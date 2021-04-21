#include<iostream>
#include<stdio.h>


int f_factorial(int limite)
{
	int r = 1;
	for (int i=1;i<=limite;i++)
	r = r * i;
	return r;
}

using namespace std;
int main()
{	
	int	x,y,b;
	cout<<"ingrese el nivel que quiere: ";
	cin>>b;
	cout<<endl;
	FILE *salida;
	
	salida=fopen("triangulo.dat","w");
		
	for ( x=0;x<=b;x++)
	{
		printf("%4d )",x);
		fprintf(salida,"%4d )",x);  // f file printf
		for ( y=0;y<=x;y++)
		{
			fprintf(salida,"%4d",f_factorial(x)/(f_factorial(y)*f_factorial(x-y)));
			printf("%4d",f_factorial(x)/(f_factorial(y)*f_factorial(x-y)));
		}
		cout<<endl;
		fprintf(salida,"\n");
	}
//z = f_factorial(x)/(f_factorial(y)*f_factorial(x-y));			
}
