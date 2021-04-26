#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char cadena1[] = "Mostrando el uso de fputs en un fichero.\n";
 	char cadena2[] = "Esta es la segunda línea por agregar. \n";
 	char cadena3[] = "Esta es la tercera línea por agregar. ";
 	
 	fp = fopen ( "fichero.txt", "w+" );
 	
 	fputs( cadena1, fp );
 	fputs( cadena2, fp );
 	fputs( cadena3, fp );
 	
 	fclose ( fp );
 	
}
