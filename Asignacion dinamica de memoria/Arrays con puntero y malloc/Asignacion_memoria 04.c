#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define TOPE 1000

int main(){
	
	double *p_array;
	int i;
	
	p_array = malloc(TOPE * sizeof(double));
	
	if(p_array==NULL){
		printf("Error en la asignacion de memoria. ");
		return -1; //recuperando memoria 
	}else{
		srand(time(NULL));
		for(i=0;i<TOPE;i++){
			p_array[i] = 1 + rand() % ((TOPE+1)-1);
			printf("%lf \n",p_array[i]);
		}
	}
	
	
	return 0;
}
