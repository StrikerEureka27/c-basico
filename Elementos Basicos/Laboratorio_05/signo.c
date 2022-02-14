#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	char nombre[50], signo[30];
	
	printf("Ingrese su nombre:");
	gets(nombre);
	
    printf("Ingrese su signo: ");
    gets(signo);
    
    if(strcmp(signo,"Aries")==0){
    	
    	printf("El signo es Aries");
    	
	}else{
		
		printf("El signo es incorrecto");
		
	}

	
	
	
	return 0;

}
