#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main() {
	
	/* Elavar n numeros al cuadrado y luego sumarlos */
	
	int num, cuad, acu;
	char resp;
	
	do{
	
	
	printf(" Ingrese un numero entero: \t ");
	scanf("%d",&num);
	
	cuad = pow(num,2);
	
	printf(" ' %d ' elevado al cuadrado es: %d \n", num, cuad);
	
	acu=acu + num;
	
	printf("Desea ingresar otro numero (s/n) \n");
	fflush(stdin);
	scanf("%c", &resp);
	
    }while(resp!='n');
	
	printf("La suma de los numeros es: %d ", acu);
	
	
}
