#include <iostream>
using namespace std;
 
int main() 
{      
    float vector[6];
    int i;
 
    // Pedimos los datos del vector
    for (i=0; i<6; i++)
    {
        cout << "Introduce la componente " << i 
            << " del primer vector: ";
        cin >> vector[i];
    }
    
    // MÉTODO DE LA BURBUJA
    int subgrupo = 6;
    int iteracion =1;
    while (subgrupo>1)
	{
	    for (int j=0;j<subgrupo-1;j++)
	    	if (vector[j]>vector[j+1])
	    	{
	    		int temporal = vector[j];
	    		vector[j]=vector[j+1];
	    		vector[j+1]=temporal;
			}
		subgrupo--;
	    cout << "El vector resultado parcial de la iteracion: "<<iteracion
		<<" -->";
	    for (i=0; i<6; i++)
	        cout << vector[i] << " ";
		cout<<endl;
		iteracion++;
	}
 
 
    // Y mostramos el resultado
    cout << "El vector resultado es: ";
    for (i=0; i<6; i++)
        cout << vector[i] << " ";
 
}
