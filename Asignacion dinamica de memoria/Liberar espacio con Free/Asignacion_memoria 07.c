#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char nombre[30],*p_nombre;
	int len;
	
	strcpy(nombre,"Pablo");
	len = strlen(nombre);
	p_nombre = malloc((len+1)*sizeof(char));
	strcpy(p_nombre,nombre);
	
	printf("Nombre: %s\n",p_nombre);
	
	free(p_nombre);
	
	printf("Nombre: %s",p_nombre);
	
	return 0;
}
