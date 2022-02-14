#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
	int paginas;
	char nombre[50];
	float precio;
}libro;

/*
struct libro{
	int paginas;
	char nombre[30];
	float precio;
}libros[n];
*/





int main(){
	
	int i;
	libro jt[10];
	
	
	for(i=0;i<10;i++){
		printf("Ingrese el nombre del libro:");
		gets(jt[i].nombre);
	}
	

	return 0;
}



	/*
	jt.paginas = 50;
	strcpy(jt.nombre,"Juego de tronos");
	jt.precio = 25.5;
	
	jt.paginas = 150;
	strcpy(jt.nombre,"Choque de reyes");
	jt.precio = 60.5;
	
	printf("El libro de juego de tronos es: %i\n",jt.paginas);	
	printf("El nombre del libro es: %s\n", jt.nombre);
	printf("El precio del juego de tronos es: %.2f ",jt.precio);
	
		
	printf("El libro de juego de tronos es: %i\n",jt.paginas);	
	printf("El nombre del libro es: %s\n", jt.nombre);
	printf("El precio del juego de tronos es: %.2f ",jt.precio);
	*/
	
