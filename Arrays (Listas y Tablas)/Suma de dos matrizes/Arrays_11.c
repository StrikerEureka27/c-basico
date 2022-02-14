#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int fil,col;

void MostrarSuma(int matrix[fil][col]);


int main(){
	
	int matriz[fil][col],matriz2[fil][col],i,j,suma[fil][col];
	
	printf("Ingrese fil: "); scanf("%i",&fil);
	printf("Ingrese col: "); scanf("%i",&col);
	
	printf(" \n\n ");
	printf("Matriz # 1:\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("fil: %i col: %i \t ---> ",i+1,j+1);
			scanf("%i",&matriz[i][j]);
		}
	}
	
	printf(" \n\n ");
	printf("Matriz # 2:\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("fil: %i  col: %i \t ---> ",i+1,j+1);
			scanf("%i",&matriz2[i][j]);
			
		}
	}
	
	printf("\n\n");
	printf("Matriz resultante: \n");
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			suma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	
	MostrarSuma(suma);
}



void MostrarSuma(int matrix[fil][col]){
	
	int i, j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf(" %i ",matrix[i][j]);
		}
		printf(" \n ");
	}
	

}



