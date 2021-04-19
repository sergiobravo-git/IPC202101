+#include <iostream>
#include <stdio.h>

using namespace std;

int funcion(int valor)
{
    valor = valor + 10; //Se le suma 10
    cout<<"***Mire el valor antes del return de \"funcion\" valor="<<
	valor<<endl;
    return valor;
}

int funcionPunteros(int* valor)
{
    *valor = *valor + 10; //Se le suma 10 a la posici�n en memoria
    return *valor;
}

int main()
{
    int numero = 10;
    cout << "Antes de funcion " << numero << "\n"; //10
    funcion(numero); //Se pasa por valor
    cout << "Despues de funcion ---->" << numero << "\n"; //10
    cout << "Antes de funcionPunteros " << numero << "\n"; //10
    funcionPunteros(&numero); //Se env�a la direcci�n de memoria y la funci�n resuelve la referencia
    cout << "Despues de funcionPunteros " << numero << "\n"; //20 (10+10)
    return 0;
}
