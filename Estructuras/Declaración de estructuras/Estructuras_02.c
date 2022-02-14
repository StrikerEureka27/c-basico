#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Arreglos de estructuras

struct persona{
	
	char nombre[20];
	int edad;
	
}personas[5];

int main(){
	
	int i;
	
	for(i=0;i<5;i++){
		
		printf(" %i Digite el nombre:  ",i+1);
		fflush(stdin);
		gets(personas[i].nombre);
		printf(" %i Digite la edad: ",i+1);
		scanf("%i",&personas[i].edad);
		
	}
	
	printf(" \n \n ");
	
	for(i=0;i<5;i++){
		printf("%i Intregrante: %s Edad: %i \n",i+1,personas[i].nombre,personas[i].edad);
	}
	
	
	return 0;
}
