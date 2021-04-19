#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int  a  =  39963,   b  =  765,   c  =  1234;
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
	cout.fill('0');
	cout<<setw(10)<<a<<setw(10)<<b<<setw(10)<<c<<endl;
	cout.fill(' ');

cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
cout << setfill('X');
cout << setw(10) << a << setw(10) << b << setw(10) << c << endl;
cout << setfill(' ');
}
