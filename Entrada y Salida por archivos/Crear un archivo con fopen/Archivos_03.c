#include <stdlib.h>
#include <stdio.h>
#include <string.h>

FILE *archivo;

int main(){
	
	char *p_dire,dire[30];
	
	
	printf("Digite la ruta donde desea crearlo: \t");
	gets(dire);
	
	p_dire = malloc((strlen(dire)+1)*sizeof(char));
	strcpy(p_dire,dire);
	
	archivo = fopen(p_dire,"w"); /* Witre - Escrbir - Crear */
	if(archivo==NULL){
		printf("Error al crear el archivo..\n");
	}else{
		printf("Archivo creado correctamente..\n");
	}
	
		
	
		
	return 0;
}
