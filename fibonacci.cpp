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
	for(int i=0;i<=n;i++)
	{
		if (i==0)
		   fibonacci=0;
		else
		{
			penultimo=fibonacci;
			if (i==1)
			   fibonacci=1;
			if (i>=2)
			{
				cout<<"penulti="<<penultimo<<" ante="<<antepenultimo<<endl;
			   fibonacci=penultimo+antepenultimo;
			}
			antepenultimo=penultimo;
		}
	}
	cout<<"fibonacci("<<n<<")="<<fibonacci;
}
