#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
int x=100;
cout << setiosflags(ios::showbase)
<< "Imprimiendo nros precedidos por su base: \n"
<< x << endl;
cout.setf(ios::oct, ios::basefield);
cout << x << endl;
cout.setf(ios::hex, ios::basefield);
cout << x << endl;
system("PAUSE");
return 0;
}
