#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


#define ELEMENTOS 15

int main(void){
	char *provincias[ELEMENTOS] = {"Tucuman", "Santa Fe", "Buenos Aires", "Rio Negro", "Neuquen",
									"Misiones", "Catamarca", "Santa Cruz", "Jujuy", "Chaco",
									"Formosa", "Corrientes", "Salta", "La Rioja", "Cordoba"};
	char *temp;
	int i, j;

	printf("\n provincias Argentinas desordenadas\n\n" );
	for(i=0; i<ELEMENTOS; i++){
		printf(" %s\n", provincias[i]);
	}
	
	for(i=0; i<ELEMENTOS-1; i++){
		for(j=i+1; j<ELEMENTOS; j++){
			if(strcmp(provincias[i], provincias[j]) > 0){
				temp = provincias[i];
				provincias[i] = provincias[j];
				provincias[j] = temp;
			}
		}
	}	
	
	printf("\n Ordenadas alfabeticamente\n\n" );
	for(i=0; i<ELEMENTOS; i++){
		printf(" %s\n", provincias[i]);
	}
	
	printf("\n Pulse [Enter] para finalizar..."); getchar();
	return 0;
}
