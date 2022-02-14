#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	//Busqueda secuencial 
	
	int array[5] = {4,2,1,3,5};
	int i,dato;
	char band = 'F';
	
	dato = 9;
	
	i=0;
	while((band=='F')&&(i<5)){
		if(array[i]==dato){
			band = 'V';
			printf("Dato se encuentra en el arreglo :) \n");
		}
		i++;
	}
	
	if(band=='F'){
		printf(" Dato no se encuentra dentro del arreglo :( \n");
	}
	
	
	
	return 0;
}
