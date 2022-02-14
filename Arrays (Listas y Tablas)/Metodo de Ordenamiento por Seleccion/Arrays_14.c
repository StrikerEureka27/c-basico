#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int i,j,aux,min;
	int array[5];
	
	for(i=0;i<5;i++){
		printf("Ingrese [%i] pos: ",i+1); scanf("%i",&array[i]);
	}
	
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(array[j]<array[min]){
				min = j;
			}
			
			
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			 
			
		}
	}
	
	for(i=0;i<5;i++){
		printf("%i",array[i]);
	}
	
	return 0;
}
