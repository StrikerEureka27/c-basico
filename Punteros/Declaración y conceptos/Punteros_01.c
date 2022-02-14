#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Punteros 

int main(){
	
	int num = 50;
	int *p_num;
	
	p_num = &num; // Posicion de memoria de la variable num;

	
	/*
	printf("%i \n",num);
	printf("%p",&num); //Imprimir la posicion en memoria. 	
	*/
	
	printf("Valor de la variable: \n");
	printf("Dato: %i \n",num);
	printf("Dato: %i",*p_num); //El aterisco se usa cuando queremos referirnos al valor que esta en esa dire de memoria. 
	printf("\n\n");
	printf("Posicion de memoria: \n");
	printf("Dato: %p \n",&num);
	printf("Dato: %p",p_num);
	
	
	
	return 0;
}
