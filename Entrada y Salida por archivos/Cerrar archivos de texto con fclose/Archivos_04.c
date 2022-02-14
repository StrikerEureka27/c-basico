#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*  (r)   Abre para lectura.
    (w)   Abre para crear un nuevo archivo.                       
    (a)   Abre el archivo para añadir al final del mismo.        
    (r+)  Abre el archivo ya existente para modificar.           
    (w+)  Crea un archivo para leer/escribir.                    
    (a+)   Abre el archivo para modificar escribir/leer al final. */

FILE *archivo1,*archivo2;

int main(){
	
	char *p_dire1, *p_dire2, dire1[30],dire2[30];
	
	printf("Ingrese la direccion de archivo#1: \t");
	gets(dire1);
	p_dire1 = malloc((strlen(dire1)+1)*sizeof(char));
	strcpy(p_dire1,dire1);
	

	printf("Ingrese la direccion de archivo#2: \t");
	gets(dire2);
	p_dire2 = malloc((strlen(dire2)+1)*sizeof(char));
	strcpy(p_dire2,dire2);
	
	archivo1 = fopen(p_dire1,"r");
	archivo2 = fopen(p_dire2,"r");
	
	if(archivo1==NULL || archivo2==NULL){
		printf("Error al abrir el archivo...");
	}else{
		printf("Archivos abiertos correctamente...");
	}
	
	fclose(archivo1);
	fclose(archivo2);
	return 0;
}
