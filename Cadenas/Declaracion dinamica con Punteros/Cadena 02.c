#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char *p_palabra,palabra[20];
	int len;
	
	printf("Ingrese palabra:\t");
	gets(palabra);
	
	p_palabra = malloc((strlen(palabra)+1)*sizeof(char));
	strcpy(p_palabra,palabra);
	
	
	printf("%s",p_palabra);
	
	/*
	do{
		scanf("%s",palabra);
		if(!feof(stdin)){
			printf("\n%s",palabra);
		}
	}while(!feof(stdin));
	*/
	
	
	
	return 0;
}
