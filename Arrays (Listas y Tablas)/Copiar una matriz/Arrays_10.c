#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fil,col;

void Crear(int matrix[][col]);
void Mostar(int matrix[][col]);

int main(){
	

	int matriz[fil][col];
	
	printf("Ingrese # filas: \t"); scanf("%i",&fil);
	printf("Ingrese # columnas: \t"); scanf("%i",&col);
	
	printf("\n");
	
	Crear(matriz);
	Mostrar(matriz);
	printf(" \n ");
	Copiar(matriz);
	
	return 0;
}



void Crear(int matrix[][col]){
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf(" fil: %i col: %i \t ---> ",i+1,j+1);
			fflush(stdin);
			scanf("%i",&matrix[i][j]);
		}
		printf("\n");
	}
	
}

void Mostrar(int matrix[][col]){
	
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf(" \t %i \t",matrix[i][j]);
		}
		printf("\n");
	}
	
}


void Copiar(int matrix[][col]){

int i,j;	
int copia[fil][col];

for(i=0;i<fil;i++){
	for(j=0;j<col;j++){
		copia[i][j]=matrix[i][j];
	}
}

printf("Matriz copia: \n");
printf(" \n ");
Mostrar(copia);

}
