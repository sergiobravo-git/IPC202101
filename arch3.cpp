#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo;
	char caracter;
	char nombre_archivo[100];
	
	printf("Ingrese el nombre del archivo:");
	gets(nombre_archivo);

	archivo = fopen(nombre_archivo,"r");
	
	if (archivo == NULL)
       printf("\nError de apertura del archivo. \n\n");
    else {
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(archivo)) != EOF) // EOF End Of File
				printf("%c",caracter);
    }
	fclose(archivo);
}
