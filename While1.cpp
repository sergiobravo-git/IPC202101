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
	cout<<"****la variable i termino en, despu�s del ciclo for. "<<
		i<<endl<<"Usando el ciclo while"<<endl;

	i=1;
	while (i<=5)
	{
		cout<<i<<endl;
		i++;
	}
	cout<<"****la variable i termino en, despu�s del ciclo while. "<<
		i<<endl;
}
