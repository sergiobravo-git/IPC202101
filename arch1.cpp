#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char** argv)
{
	FILE *fp;  // f file p pointe o apuntador
	fp = fopen ( "fichero.in", "r" );        
	if (fp==NULL) {fputs ("File error",stderr); exit (1);}
	fclose ( fp );

}
