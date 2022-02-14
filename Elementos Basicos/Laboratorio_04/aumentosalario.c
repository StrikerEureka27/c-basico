#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main(){
	
	char nombre[50];
	int sal, aum,nsal;
	
	printf("Ingrese su nombre: "); gets(nombre);
	printf("Ingrese su salario actual: "); scanf("%i",&sal);
	
	aum = sal * 0.25;
	nsal = aum + sal;
	
	
	
	printf(" \n El aumento de %s es de %i$ y el salario total queda en: %i$ ",nombre,aum,nsal); 
	
	
	return 0;
}
