#include<iostream>

using namespace std;

int main()
{
	// while (<CONDICION>)     for (<INICIALES>;<CONDICION>;<INCREMENTOS>)
	// 1,3,5
	int i;
	cout<<"Usando el ciclo for"<<endl;
	for(i=1;i<=5;i++)
		if (i%2!=0) // CUANDO SEA IMPAR
	       cout<<i<<endl;
	cout<<"****la variable i termino en, después del ciclo for. "<<
		i<<endl<<"Usando el ciclo while"<<endl;

	i=1;
	while (i<=5)
	{
		if (i%2!=0)
		cout<<i<<endl;
		i++;
	}
	cout<<"****la variable i termino en, después del ciclo while. "<<
		i<<endl;
}
