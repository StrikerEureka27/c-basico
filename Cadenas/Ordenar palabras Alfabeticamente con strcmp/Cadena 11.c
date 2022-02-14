#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char p1[30],p2[30];
	
	
	printf("Ingrese palabra 1:\t");
	gets(p1);
	printf("\n");
	printf("Ingrese palabra 2:\t");
	gets(p2);
	
	printf("\n");
	
    if((strcmp(p1,p2))>0){
    	printf("%s %s",p2,p1);
	}else{
		printf("%s %s",p1,p2);
	}
	
	return 0;
}
