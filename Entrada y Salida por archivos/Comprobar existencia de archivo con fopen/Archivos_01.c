#include <stdlib.h>
#include <stdio.h>

FILE *fd; //Puntero archivo

int main(){
	
	char dire[]={"test.txt"};
	
	
	fd = fopen(dire,"r");
	
	if(fd==NULL){
		printf("El archivo no existe...");
	}else{
		printf("Se encontro el archivo :)\n");
		printf("Ubicacion: %s",dire);
	}
	
	return 0;
}
