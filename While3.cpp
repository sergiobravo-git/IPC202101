#include<iostream>

using namespace std;

int main()
{
	// while (<CONDICION>)     for (<INICIALES>;<CONDICION>;<INCREMENTOS>)
	// 1,3,5
	int i;
	cout<<"Usando el ciclo for"<<endl;
	for(i=1;i<=5;i+=2)
       cout<<i<<endl;
	cout<<"****la variable i termino en, después del ciclo for. "<<
		i<<endl<<"Usando el ciclo while"<<endl;

	i=1;
	while (i<=5)
	{
		cout<<i<<endl;
		i+=2;
	}
	cout<<"****la variable i termino en, después del ciclo while. "<<
		i<<endl;
}
