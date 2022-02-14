#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

FILE *archivo;

int main(){
	
	int c;
	char  dire[30], *p_dire;
	
	printf("Ingresa la ruta del archivo:\t");
	gets(dire);
	
	p_dire = malloc((strlen(dire))*sizeof(char));
	strcpy(p_dire,dire);
	
    archivo = fopen(p_dire,"wt");
	if(archivo==NULL){
		printf("Error al crear al archivo...");
		return 1;
	}else{
		while((c=getchar())!=EOF){
			fputc(c,archivo);
		}
	}
	
	return 0;
}
