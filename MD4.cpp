#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	int columnas =2;
	string ** libros;
	int tamanio;
	string entrada;
	cout<<"cuantos libros desea ingresar?";
	cin>>entrada;
	tamanio = atoi(entrada.c_str());
	libros = new string*[tamanio];
	
	cout << "Por favor ingrese la siguiente información de los Libros: \n";
    string titulo ,autor;
    fflush(stdin);
    for(int i = 0; i < tamanio; i++)
    {
        libros[i] = new string[columnas]; //Cada fila contendrá dos columnas
        //Notar que cols pudo haber sido ingresada por el usuario también

        cout << "\n******* Libro " << i + 1 << "********:\n";
        cout << "Titulo: ";
        getline(cin,titulo);
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }
    
    for (int i = 0; i<tamanio; i++)
    {
    	printf("Titulo          Autor\n");
    	printf("+--------------+----------------+\n");
    	titulo = libros[i][0];
    	autor  = libros[i][1];
    	printf("|%15s |%15s|\n",titulo.c_str(),autor.c_str());
    	printf("+--------------+----------------+\n");
	}
        //Para liberar la memoria debemos recorrer fila por fila primero.
    for (int i = 0; i < tamanio; ++i)
    {
        delete [] libros[i]; //Cada fila de libros es otro array de punteros
        //Por eso son punteros a punteros
    }

    //Luego de limpiar las columnas, quitamos la fila única que quedó
    delete [] libros;


    system("pause");

    return 0;
}


