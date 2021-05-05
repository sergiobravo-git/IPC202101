#include <iostream>

using namespace std;

class Pareja
{
    // atributos
    double a, b;

public:
    // m�todos
    double getA();
    double getB();    
    void   setA(double n);
    void   setB(double n);
};

// implementaci�n de los m�todos de la clase Pareja
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

class Suma : public Pareja
{
    // atributos de Suma
    double resultado;

public:
    // m�todos de Suma
    double calcular();
};

// implementaci�n de Suma
//
double Suma::calcular() 
{ 
	return getA() + getB(); 
}

int main()
{
    Suma s;
    s.setA(80);
    s.setB(100);
    cout << s.getA() << " + " << s.getB() << " = " << s.calcular() << endl;
    cin.get();
}
