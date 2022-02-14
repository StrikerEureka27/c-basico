#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	char caracter;
	
	printf(" Ingrese un caracter: \t");
	scanf("%c", &caracter);
	
	
	if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u' || caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){
		
		printf("Letra ingresada ' %c ' es una vocal", caracter);
		
		
	}else{
		
		printf("Letra ingresada ' %c ' es una consonante", caracter);
		
	}
	
	
	return 0;
}
