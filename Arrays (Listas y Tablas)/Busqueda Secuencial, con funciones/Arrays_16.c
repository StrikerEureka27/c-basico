#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void BusquedaSecuencial(int info, int arreglo[]);

int main(){
	
	int arreglo[10];
	int i,dato;
	
	for(i=0;i<10;i++){
		printf("Digite posicion [%i]: \t",i+1); scanf("%i",&arreglo[i]);
	}
	
	printf("\n\n");
	printf("Ingrese un # de la lista: \t");
	scanf("%i",&dato);
	printf("\n\n");
	fflush(stdin);
	BusquedaSecuencial(dato,arreglo);
	
	
	return 0;
}


void BusquedaSecuencial(int info, int arreglo2[]){
	
	int i, j;
	char band = 'F';
	
	i=0;
	while((band=='F')&&(i<10)){
		if(arreglo2[i]==info){
			band=='V';
			printf("El dato %i se encuentra en la lista, en la pos: %i",info,i+1);
		}
		i++;
	}
	
}
