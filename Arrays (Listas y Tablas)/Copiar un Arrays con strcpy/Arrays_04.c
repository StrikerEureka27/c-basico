#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 20

int main(){
	
	char cadena[TAM], copia[TAM];
	
	printf("Ingrese un cadena de texto: ");
    scanf("%s",cadena);
	printf("Copiando la cadena.... \n");
	getch();

	strcpy(copia,cadena);
	
	
	printf("\n \n");
	printf("Cadena ingresada: %s || Cadena copia: %s",cadena,copia);
	
	
	return 0;
}
