#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

// Esto define la clase CRender
class CRender {
	char buffer[256];
	int  x;
public:
	void m_Renderizar(const char *cadena,int entrada)
	{
		strcpy(buffer, cadena);
		x = entrada;
		return;
	}
	char *getBuffer()
	{
		return buffer;	
	}
	int getX()
	{
		return x;	
	}	
};

int main (int argc, char **argv){
    // crear 2 objetos CRender
    CRender render1, render2;


    render1.m_Renderizar("Inicializando el objeto render1",20);
    render2.m_Renderizar("Inicializando el objeto render2",25);	
   
    cout << "buffer en render1: ";
    cout << render1.getBuffer() << endl;   // tenemos acceso a buffer ya que es publico.
    cout << "En la primer var guardo x: ";
    cout << render1.getX()      << endl;   // tenemos acceso a buffer ya que es publico.

    cout << "buffer en render2: ";
    cout << render2.getBuffer() << endl;
    cout << "En la primer var guardo x: ";
    cout << render2.getX()      << endl;   // tenemos acceso a buffer ya que es publico.

}
