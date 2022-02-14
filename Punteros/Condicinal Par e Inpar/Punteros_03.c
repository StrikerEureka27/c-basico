#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


int main(){
	
	int num,par,impar;
	int *p_num;
	
	p_num = &num;
	
	printf("Ingrese un numero: \t"); scanf("%i",&num);
	
	if(num%2==0){
		printf("Numero [%i] es par. \n",*p_num);
		printf("Posicion: %p",p_num);
	}else{
		printf("numero [%i] es impar \n",*p_num);
		printf("Posicion: %p",p_num);
	}
	
	
	return 0;
}
