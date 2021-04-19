#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	short int   x=32767;
	int			y;
	long int	z;
	
	cout<<"tamanio de x="<<sizeof(x)<<" "<<
	      "tamanio de y="<<sizeof(y)<<" "<<
	      "tamanio de z="<<sizeof(z);
	cout<<" x = "<<x;
	x = x+1; // 32,767+1--> 32,768
	cout<<" x = "<<x;
	x = x+1; // 32,768+1--> 32,769
	cout<<" x = "<<x;
}
