#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int t,e,i,j;
	char cadena[30],caracter,revez;
	
	printf("Ingrese una palabra: \t");
	gets(cadena);
	
	printf("\n \n");
	
    t = strlen(cadena);	
	printf("Longitud de la cadena: %i ",t);
	printf("\n \n");
	
	for(i=0;i<t;i++){
		
		caracter = cadena[i];
		printf("%c",caracter);
		
	}
	
	for(j=t;j>=0;j--){
	   	
	   	revez = cadena[j];
	   	
	   	printf("%c",revez);
	   	
	   }
	
	return 0; 
}
