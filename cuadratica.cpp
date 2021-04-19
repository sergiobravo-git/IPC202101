#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(int argc, char * argv[])
{
	cout<<"El valor de argc="<<argc<<endl;
	if (argc==4)
	{
		float a = atof(argv[1]);
		float b = atof(argv[2]);
		float c = atof(argv[3]);
		
		float discriminante = pow(b,2)-4*a*c;
		if (discriminante<0)
		{
			float x1 = -b/2/a;
			float x2 = x1;
			float y1 = pow(-1*discriminante,0.5)/2/a;
			float y2 = -y1;
			cout<<"raices complejas:"<<endl;
			if (y1<0)
			cout<<"raiz compleja 1 ("<<x1<<", -j"<<-1*y1<<")"<<endl;
			else cout<<"raiz compleja 1 ("<<x1<<", j"<<y1<<")"<<endl;
			
			if (y2<0)
			cout<<"raiz compleja 2 ("<<x2<<", -j"<<-1*y2<<")"<<endl;
			else cout<<"raiz compleja 2 ("<<x2<<", j"<<y2<<")"<<endl;
		}
		else {
			float x1 = (-b+pow(discriminante,0.5))/2/a;
			float x2 = (-b-pow(discriminante,0.5))/2/a;
			cout<<"raices reales: ("<<x1<<","<<x2<<")";
		}
	}
	else cout<<"Numero invalido de argumentos."<<endl;
}
