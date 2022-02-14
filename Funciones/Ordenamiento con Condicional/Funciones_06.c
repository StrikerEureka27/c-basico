#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Orden(int a, int b, int c);

int main(){
	
	int num1,num2,num3;
	
	printf("Ingrese 3 numeros aleatorios: \t "); scanf("%i %i %i",&num1, &num2, &num3);
	
	Orden(num1, num2, num3);
	
	return 0;
}

void Orden(int a, int b, int c){
	
	if(a<=b && a<=c){
		if(b<=c){
			
			printf("%i %i %i", a, b, c);
			
		}	
	
		
		
		
	}
	
	
}

