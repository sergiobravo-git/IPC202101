#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int vector[10];
	for(int i=0;i<10;i++)
	   vector[i]=10-i;
	for(int i=0;i<10;i++)
	   cout<<"vector["<<i<<"]="<<vector[i]<<endl;
	int *apuntador;
	apuntador = vector;
	for(int i=0;i<10;i++)
	{
		//cout<<"apuntador["<<i<<"]="<<*apuntador++<<
		//" direccion ram: "<<apuntador<<endl;
		printf("apuntador[%d]=%d direccion ram: %p\n"
			,i,*apuntador++,apuntador);
	}
}
