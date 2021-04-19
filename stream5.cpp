//Ejemplo de uso de manipuladores
#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    double a1 = 101.179;
    double a2 = 3.12;
    cout << "a1->" << a1 << endl;
    cout << "a2->" << a2 << endl;
    cout << endl;
    cout << fixed << "a1->" << a1 << endl;
    cout << "a2->" << a2 << endl;
    cout << endl;
    cout << "a1->" << setprecision(1) << a1 << endl;
    cout << "a2->" << a2 << endl;
    cout << endl;
    cout << "a1->" << setw(10) << setfill('.') << a1 << endl;
    cout << "a2->" << a2 << endl;
    cout << "a1->" << setw(12) << a1 << endl;
    system("pause");
}
