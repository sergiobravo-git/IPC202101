#include<stdio.h>
 
int main(){
   int edad;
   printf("Escriba su edad: ");
   scanf("%d", &edad);
   if (edad >= 18) printf("¡Ya puedes votar!");
   else printf("Todavia eres un menor de edad.");
}
