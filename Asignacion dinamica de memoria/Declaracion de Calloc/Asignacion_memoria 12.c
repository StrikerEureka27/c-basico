#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int *p1;
	int i;
	
	p1 = calloc(5,sizeof(int));
	
	for(i=0;i<5;i++){
		printf("Digite un numero:\t");
		scanf("%i",&p1[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%i",p1[i]);
	}
	
	
	
	return 0;
}
