#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char nombre[30],len,*p_nombre;
	
	printf("Digite su nombre:");
	fflush(stdin);
	gets(nombre);
	
	len = strlen(nombre);
	p_nombre = malloc((len+1)*sizeof(char));
	strcpy(p_nombre,nombre);
	
	printf("\n");
	printf("Nombre: %s", p_nombre);
	
	return 0;
}
