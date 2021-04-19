#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout <<"\n0 > 1 ? "<<"\t"<<(0>1)<< endl;
    cout <<"\n5 > 1 ? "<<"\t"<<(5>1)<< endl;

    cout.setf(ios::boolalpha); // activar bandera
    cout <<"\n0 > 1 ? "<<"\t"<<(0>1)<< endl;
    cout <<"\n5 > 1 ? "<<"\t"<<(5>1)<< endl;

    cin.get();
    return 0;
}
