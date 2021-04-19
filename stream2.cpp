#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	cout << boolalpha;
	cout << "0 > 1 ? " << '\t' << (0 > 1) << endl;
	cout << "5 > 1 ? " << '\t' << (5 > 1) << endl;
	
	cout << dec << 2048 <<" equivale "<<2048<< endl;
	cout << hex << 2048 << endl;
	cout << oct << 2048 << dec << endl;
	cout << uppercase << "que tal" << endl;

	cin.get();
	return 0;
}
