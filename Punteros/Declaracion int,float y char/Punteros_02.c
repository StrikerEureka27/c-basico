#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	
	int a=10;
	float b=20.7;
	char c='h';
	
	int *p_a;
	float *p_b;
	char *p_c;
	
	p_a = &a;
	p_b = &b;
	p_c = &c;
	
	printf("Valor de la variables: \n");
	printf("Variable tipo int: %i \n",*p_a);
	printf("Variable tipo float: %.2f \n",*p_b);
	printf("Variable tipo char: %c \n",*p_c);
	
	printf("\n\n");
	
	printf("Posicion de la variable: \n");
	printf("Posicion tipo int: %p \n",p_a);
	printf("Posision tipo float: %p \n",p_b);
	printf("Posision tipo char: %p \n",p_c);
	
	
	return 0;
}
