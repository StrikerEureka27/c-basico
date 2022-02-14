#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	int *vector,i,*vector_convertido;
	
	vector = malloc(3*sizeof(int));
	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	
	for(i=0;i<3;i++){
		printf("%i",vector[i]);
	}
	
	printf("\n\n");
	vector_convertido = realloc(vector,5*sizeof(int)); //apliando el arreglo a 5 elementos. 
	
	vector[3]=4;
	vector[4]=5;
	
    	for(i=0;i<5;i++){
		printf("%i",vector[i]);
	}	
	
	return 0;
}
