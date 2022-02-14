#include <stdlib.h>
#include <stdio.h>

int Suma();

int main(){
	
	int a,b;
	
	printf("Ingrese el valor de a: \t\n");
	scanf("%i",&a);
	printf("Ingrese el valor de b: \t\n");
	scanf("%i",&b);
	
	printf("La suma de a y b es: %i ",suma(&a,&b));
	printf("\n");
	
	
	return 0;
}


int suma(int *m, int *n){
	return *m + *n;
}
