#include <iostream>    
#include <iomanip>      // define diferentes manipuladores
using namespace std;
int main(void)
{
  cout << setfill('.'); // manipulador de relleno.
                        //el carácter de relleno será el punto
  cout << "Listado de calificaciones\n" << endl;
  cout << "Roberto Aniorte" << setw(20) << "8.5" << endl;
  cout << "Andrea Gutierrez" << setw(19) << "6.9" << endl;
  cout << "Isabel Sanchez" << setw(21) << "5.7" << endl; 
  cout << "Anastasio Castro" << setw(19) << "7.5" << endl;
  cout << "Barbara Lopez" << setw(22) << "7.8" << endl;
  cout << "Martin Garcia" << setw(22) << "9.1" << endl;
  cout << setfill('\0');  // se restablece el carácter de relleno
  cout << endl;
  system("pause");
}
