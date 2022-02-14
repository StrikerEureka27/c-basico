#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
	
	int *p_array,num;
	int i;
	
	printf("Ingrese un numero: \t");
	scanf("%i",&num);
	
	
	p_array = malloc(num*sizeof(int));
	
	if(p_array==NULL){
		("Error memoria insufuciente...");
	}else{
		srand(time(NULL));
		for(i=0;i<num;i++){
			p_array[i] = 1 + rand() % ((num+1)-1);
			printf("%i \n",p_array[i]);
		}
	}
	
	
	return 0;
}

