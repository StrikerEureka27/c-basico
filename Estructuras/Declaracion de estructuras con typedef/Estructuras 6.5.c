#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct{
	int mate;
	int ingles;
	int fisica;
}nota;

void darnotas(nota *notas);

int main(){
	
	nota notas;
	darnotas(&notas);
	
	printf("Matematicas: %i ",notas.mate);
	printf("Ingles: %i ",notas.ingles);	
	printf("Fisica: %i ",notas.fisica);
	
	return 0;
}

/* Cuando paso como parametro se crea una estructura nueva*/
void darnotas(nota *notas){
	
	printf("Ingrese nota de matematicas:");
	scanf("%i",&notas->mate);
	
	printf("Ingrese nota de ingles:");
	scanf("%i",&notas->ingles);	
	
	printf("Ingrese nota de fisica:");
	scanf("%i",&notas->fisica);
	
}
