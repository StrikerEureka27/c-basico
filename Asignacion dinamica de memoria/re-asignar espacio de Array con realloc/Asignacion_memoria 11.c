#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
	
	int *p_num,i,p_ampliado;
	
	p_num = malloc(5*sizeof(int));
	
	for(i=0;i<5;i++){
		p_num[i]= i+1;
		printf("%i",p_num[i]);
	}
	
	printf("\n");
	
	p_ampliado = realloc(p_num,10*sizeof(int));
	
	for(i=0;i<10;i++){
		p_num[i]= i+1;
		printf("%i",p_num[i]);
	}
	
	
	
	
	
	
	return 0;
}
