#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*

Ingreso del nombre y edad, edad se multiplica por pi (como valor fijo)
y muestra el resultado con dos flotantes. 

*/

int main(){
	
	char x[10];
	float pi = 3.141621;
	float num;
	float sum;
	
	
	printf("Ingrese su nombre: ");
	gets(x);
	
	printf("Su nombre es: %s  \n",x);
	
	
	printf("Ingrese un numero: ");
	scanf("%f", &num);
	
	sum = num * pi;
	
	printf("El resultado es: %.2f ",sum);
	
	
	
	return 0;
	
	
	
	
}
