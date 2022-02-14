#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int final, prom,nota1, nota2, nota3;
	
	printf(" Ingrese nota#1: ");
	scanf("%d", &nota1);
	
	printf(" Ingrese nota#1: ");
	scanf("%d", &nota2);
	
	printf(" Ingrese nota#1: ");
	scanf("%d", &nota3);
	
	final = nota1 + nota2 + nota3; 
	prom = final/3;
	
	
	
	printf("Nota#1: %d \n Nota#2: %d \n Nota#3: %d \n", nota1, nota2, nota3);
	
	
	
	printf("La nota final: %d",final);
	printf("promedio es: %d",prom);
	
	
	
	
}
