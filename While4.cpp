#include<iostream>

using namespace std;

int main()
{
	// while (<CONDICION>)     for (<INICIALES>;<CONDICION>;<INCREMENTOS>)
	// 1,2,3,4,5
	int i;
	cout<<"Usando el ciclo for"<<endl;
	for(i=1;i<=5;i++)
	   cout<<i<<endl;
	cout<<"****la variable i termino en, después del ciclo for. "<<
		i<<endl<<"Usando el ciclo do...while"<<endl;

	i=1;
	do
	{
		cout<<i<<endl;
		i++;
	} while (i<=5);
	cout<<"****la variable i termino en, después del ciclo do...while. "<<
		i<<endl;
}
