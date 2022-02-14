#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int mult, sum, v1, v2;
	
	printf("Ingrese valor1: \t");
	scanf("%d", &v1);
	
	printf("Ingrese valor2: \t");
	scanf("%d", &v2);
	
	
	mult = v1*v2;
	sum= v1+v2;
	
	printf("La multiplicacion de ambos es: %d y la suma es %d", mult, sum);
	
	return 0;
	
	
}


