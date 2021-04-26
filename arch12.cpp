#include <iostream>
#include <fstream> 

using namespace std;
int main()
{
	string s;
	ifstream f( "fichero.txt" );
	if ( f.is_open() ) {  
 		getline( f, s );
			cout << s << endl;
		while( !f.eof() ) {
 			getline( f, s );
			cout << s << endl;
 		}
	}
 	else cerr << "Error de apertura del archivo." << endl;
}
