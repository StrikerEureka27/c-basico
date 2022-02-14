#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	int *vector;
	int i;
	
	printf("Ingrese un valor para el vector:");
	scanf("%i",&num);
	
	
	vector = malloc(num*sizeof(int));
	if(vector==NULL){
		printf("No se a podido reservar la memoria. ");
	}else{
		for(i=0;i<num;i++){
			*(vector + i)=i;/*vector[i] = i;*/
		}
		
		for(i=0;i<num;i++){
			printf("%i\t",*(vector + i));
		}
		
		
		
	}
	
	
	return 0;
}
