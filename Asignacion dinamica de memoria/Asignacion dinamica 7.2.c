#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

// i1 j0 2 1 0 0 1 2 

void Aleatorio(int *vector ,int n);
void Eliminar(int *vector ,int n);
void Analizador(int *vector,int n);


int main(){
	
	int i,num=10, *vector;
	vector = malloc(num*sizeof(int));
	if(vector==NULL){
		printf("Error al asignar memoria...\n");
	}else{
		
	Aleatorio(vector,num);	
		
	}

	
	printf("%i \n",vector[0]);
	
	
	for(i=0;i<num;i++){
		printf("%i \n",vector[i]);
	}
	
	
	
	return 0;
}


void Aleatorio(int *vector ,int n){
	
	int i;
	
	srand(time(NULL));
	
	for(i=0;i<n;i++){
		
		vector[i] = rand() % ((2+1) -0);
		
	}
	
}


