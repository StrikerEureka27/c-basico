#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Persona{
	
	char nombre[20];
	int edad;
	
}persona1,persona2;


int main(){
	
	printf("Digite su nombre:\t \n ");
	gets(persona1.nombre);
	
	printf("Digite su edad:\t \n");
	scanf("%i",&persona1.edad);
	
	printf(" \n\n ");
	
	printf("Digite su nombre:\t \n ");
	fflush(stdin);
	gets(persona2.nombre);
	
	printf("Digite su edad:\t \n");
	scanf("%i",&persona2.edad);
	
	printf("\n\n");


	printf("Su nombre es %s ",persona1.nombre);
	printf("La edad es %i ",persona1.edad);

	printf(" \n\n ");
	
	printf("Su nombre es %s ",persona2.nombre);
	printf("Su edad es %i ",persona2.edad);
	
	return 0;
}

