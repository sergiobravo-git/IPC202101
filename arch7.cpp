#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 	
 	fp = fopen ( "fichero.txt", "w+" );
 	
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nAgregando mas informacion.");
 	
 	fclose ( fp );
}
