#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char cadena[]={"Hola mundo"},cadena_copia[30];
	
	printf("%s\n",cadena);
	
	strcpy(cadena_copia,cadena);
	
	printf("%s\n",cadena_copia);
	
	strcpy(cadena_copia+5,"y bienvenidos al lenguaje C");
	
	printf("%s\n",cadena_copia);
		
	return 0;
}



