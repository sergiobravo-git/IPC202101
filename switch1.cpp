#include <iostream> 
using namespace std; 

int main () 
{ 
	int num, digito1, digito2;
	bool primo1, primo2;

	cout<<"Ingrese un entero positivo de dos digitos"<<endl;
	cin>>num;

	if(num < 100 && num > 9)
	{
 		digito1 = num / 10; digito2= num % 10;
 
		switch (digito1)
 		{
  			case 2: 
			case 3: 
			case 5:  
  			case 7: 
   					primo1 = true; 
   					break;
			default:
					primo1 = false; 
 		}
 		
		switch (digito2)
 		{
  			case 2: 
			case 3: 
  			case 5:  
  			case 7:
   					primo2 = true; 
   					break; 
   			default:
   					primo2 = false;
 		}
 
		if (primo1 && primo2)
  		   cout<<"Ambos digitos son primos"<<endl;
 		else cout<<"Ambos digitos no son primos"<<endl;
	}
	else cout<<"El numero no tiene dos digitos o no es positivo"<<endl;  
} 
