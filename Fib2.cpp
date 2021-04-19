#include <iostream>

using namespace std;
int main()
{
	int n;
	int fibonacci=0;
	int penultimo, 
		antepenultimo;
	cout<<"Ingrese el valor de n:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		penultimo=fibonacci;
		if (i==0)
		   fibonacci=0;
		else
		{
			if (i==1)
			   fibonacci=1;
			if (n>=2)
			{
			   fibonacci=penultimo+antepenultimo;
			}
		}
		antepenultimo=penultimo;
	}
	cout<<"fibonacci("<<n<<")="<<fibonacci;
}
