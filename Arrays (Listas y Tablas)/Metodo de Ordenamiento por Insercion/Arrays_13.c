#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int array[5]={4,3,2,1,5};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(array[j-1]>array[j]){
				aux = array[j-1];
				array[j-1] = array[j];
				array[j] = aux;
				
			}
		}
	}
	
	for(i=4;i>=0;i--){
		printf("%i",array[i]);
	}
	
	return 0;
}
