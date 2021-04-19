#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
 const double PI = 3.1416;
 double radio;
 cout << "Introduce el valor del radio : ";
 cin >> radio;
 cout << fixed << setprecision(2); // notación en coma flotante
                                     // con 2 decimales  %.2f
 cout << endl << "Longitud de la circunferencia: " << 2*PI*radio;
 cout << endl << "Area del circulo: " << PI*pow(radio,2);
 cout << endl << "Volumen de la esfera: ";
 cout << (4.0/3)*PI*pow(radio,3) << endl;
 system("pause");
}
