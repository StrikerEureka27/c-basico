#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *archivo;

int main(){
	
	int c;
	char dire[30], *p_dire;
	
	printf("Ingrese la direccion:\t");
	gets(dire);
	
	p_dire = malloc((strlen(dire)+1)*sizeof(char));
	strcpy(p_dire,dire);
	archivo = fopen(p_dire,"at");
	if(archivo==NULL){
		printf("Error al abrir el archivo...");
		return 1;
	}
	
	while((c=getchar())!=EOF){
		fputc(c,archivo); /* fputc(caracter,puntero_archivo) */
	}	
	
	fclose(archivo);
	
	return 0;
}
