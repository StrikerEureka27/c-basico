#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
	
	char cadena[10], *p_cadena, *p_ampliado;
	int len;
	
	printf("Ingrese una palabra:\t\n");
	gets(cadena);
	
	p_cadena = malloc(10+1*(sizeof(char)));
	strcpy(p_cadena,cadena);
	
	if(p_cadena==NULL){
		printf("Memoria insuficiente");
	}else{
	
	printf("\n");
	printf("%s",p_cadena);
    
	p_ampliado = realloc(p_cadena,30*sizeof(char));
	strcat(p_cadena," Daniel Caceros Pineda");
	
	printf("\n");
	printf("%s",p_cadena);
			
	}
	
		
	free(p_cadena);
	
	
	return 0;
} 
