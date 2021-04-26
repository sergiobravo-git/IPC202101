#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 	FILE *archivo;
 	char caracteres[100];
	char nombre_archivo[100];
	
	printf("Ingrese el nombre del archivo:");
	gets(nombre_archivo);
 	
 	archivo = fopen(nombre_archivo,"r");
 	
 	if (archivo == NULL)
 		exit(1);
 	else {
	  	    printf("\nEl contenido del archivo de prueba es \n\n");
 		    while (feof(archivo) == 0)
	 	    {
 			     fgets(caracteres,100,archivo); // Lecturas por línea (longitud=100)
 			     printf("%s",caracteres);
	 	    }
    }
    fclose(archivo);
}
