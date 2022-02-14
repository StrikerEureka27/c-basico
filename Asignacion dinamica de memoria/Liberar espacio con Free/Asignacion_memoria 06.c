#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int *p1;
	
	p1 = malloc(sizeof(int));
	
	if(p1==NULL){
		printf("Memoria llena");
	}else{
		printf("Hay espacio\n");
		*p1 = 15;
		printf("%i\n",*p1);
	}
	
	free(p1); //Liberar espacio 
	printf("%i",*p1);
	
	return 0;
}

