#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*Empaquetar muchas variables de un tipo*/
typedef struct{
	char nombre[30];
	char empleo[50];
	int edad;
}reg;


int main(){
	
	reg f1, f2;
	
	printf("Ingrese el nombre: ");
	fgets(f1.nombre,30,stdin);
	
	printf("Ingrese el empleo: " );
	fflush(stdin);
	fgets(f1.empleo,50,stdin);
	
	printf("Ingresa edad: ");
	scanf("%i",&f1.edad);
	
	
	printf("Ingrese el nombre: ");
	fflush(stdin);
	fgets(f2.nombre,30,stdin);
	
	printf("Ingrese el empleo:" );
	fflush(stdin);
	fgets(f2.empleo,50,stdin);
	
	printf("Ingresa edad: ");
	scanf("%i",&f2.edad);
	
	printf("Los valores de los nombres de f1 son: %s\n",f1.nombre);
	printf("Los valores de los nombres de f2 son: %s\n",f2.nombre);
	
	printf("Los valores de los empleo de f1 son: %s\n",f1.empleo);
	printf("Los valores de los empleo de f2 son: %s\n",f2.empleo);
	
	printf("Los valores de los edad de f1 son: %d \n",f1.edad);
	printf("Los valores de los edad de f2 son: %d \n",f2.edad);
	
	return 0;
}
