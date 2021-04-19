#include <stdio.h>
#include<iostream>

using namespace std;
int main()
{
    int x=30; 
	int y=0;
	cout<<"Ingrese x:";
	cin>>x;	
	while (y<=x) 
	      y += x; 
	printf("%d", y);
    return 0;
}
