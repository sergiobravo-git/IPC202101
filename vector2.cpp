#include <iostream>
using namespace std;
 
int main()
{
    int numero[5] = // Un array de 5 numeros enteros
		{200,150,100,-50,300};    
    int suma;         // Un entero que guardar� la suma
 
    suma = numero[0] +    // Y hallamos la suma
        numero[1] + numero[2] + numero[3] + numero[4];
    cout << "Su suma es " << suma;
    /* Nota: esta es la forma m�s ineficiente e inc�moda...
    Ya lo iremos mejorando */
 
}
