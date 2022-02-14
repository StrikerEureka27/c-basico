#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char nombre[30],*p_nombre,longitud; 
	
	strcpy(nombre,"Pablo");
	longitud = strlen(nombre);
	p_nombre = malloc((longitud+1)*sizeof(char));
	strcpy(p_nombre,nombre);
	
	printf("Nombre %s",p_nombre);
	
	return 0;
}
