#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fil,col;

void Crear(int matrix[][col]);
void Mostar(int matrix[][col]);

int main(){
	

int matrix[fil][col];	
	
	printf("\t Creacion de matriz... \n");
	printf("\t Ingrese # filas: \t"); scanf("%i",&fil);
	printf("\t Ingrese # columnas: \t"); scanf("%i",&col);
	printf(" \n \n ");
	
	Crear(matrix);
	printf("\t Pulse una tecla para mostrar la matriz ingresada... \n");
	getch();
	printf("\n");
	Mostrar(matrix);
	
	
	return 0;
}


void Crear(int matrix[][col]){
	
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf(" \t fil: %i col: %i \t --> ",i+1,j+1); 
			fflush(stdin);
			scanf("%i",&matrix[i][j]);
		}
		printf(" \n ");
	}
		
}

void Mostrar(int matrix[][col]){
	
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %i",matrix[i][j]);
		}
		printf(" \n ");
	}
	
}

