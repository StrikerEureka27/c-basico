#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *archivo;

int main(){
	
	char dire[30],*p_dire;
	int c;
	
	printf("Ingrese la ruta: \t");
	gets(dire);
	
	p_dire = malloc((strlen(dire)+1)*sizeof(char));
	strcpy(p_dire,dire);
	
	archivo = fopen(p_dire,"rt");
	if(archivo==NULL){
		printf("Error al abrir el archivo...");
		return 1;
	}
		while((c=fgetc(archivo))!=EOF){
			if(c=='/n'){ /* Si c es un salto de linea... */
				printf("\n");
			}else{
				putchar(c);
		}
	}
	
	
	return 0;
}
