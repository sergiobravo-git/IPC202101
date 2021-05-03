#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Pareja
{
    // atributos
    double a, b;

public:
	
	Pareja()
	{
		
	}
	
	Pareja(double x, double y)
	{
		a = x;
		b = y;
	}
    // métodos
    double getA();
    double getB();    
    void   setA(double n);
    void   setB(double n);
};

// implementación de los métodos de la clase Pareja
//
double Pareja::getA() 
{ 
	return a; 
}

double Pareja::getB() 
{ 
	return b; 
}

void Pareja::setA(double n) 
{ 
	a = n; 
}

void Pareja::setB(double n) 
{ 
	b = n; 
}

int main()
{
	Pareja p,q(1.5,.5);
	p.setA(4.2);
	p.setB(.9);
	cout<<"la variable u objeto p:"<<endl;
	cout<<p.getA()<<" - "<<p.getB();
	cout<<"la variable u objeto q:"<<endl;
	cout<<q.getA()<<" - "<<q.getB();
}
