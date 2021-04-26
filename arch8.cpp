#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Modifique el modo.";
 	
 	fp = fopen ( "fichero.txt", "r+" );
 	
 	fprintf(fp, buffer);
 	fprintf(fp, "%s", "\nAgregando aun, mas informacion.");
 	
 	fclose ( fp );
}
