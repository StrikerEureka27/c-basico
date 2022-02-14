#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* archivo;

int main(){
	
	char dire[30],*p_dire;
	
	printf("Ingrese la direccion del archivo:\t");
	gets(dire);
	
	p_dire = malloc((strlen(dire))*sizeof(char));	
	strcpy(p_dire,dire);
	
	printf("\n");
	
	archivo = fopen(p_dire,"r");
	if(archivo==NULL){
		printf("El archivo no existe...");
	}else{
		printf("El archivo existe :) \n");
		printf("Ubicacion: %s",p_dire);
	}
	
	
	
	
	return 0;
}

