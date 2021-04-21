#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char** argv)
{
	FILE *fp;  // f file p pointe o apuntador
	char nombre_archivo[100];
	printf("Ingrese el nombre del archivo:");
	gets(nombre_archivo);
	fp = fopen ( nombre_archivo, "r" );        
	if (fp==NULL) {fputs ("File error",stderr); exit (1);}
	fclose ( fp );

}
