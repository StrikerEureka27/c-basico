#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char *palabras[30];
	int i,j,num;
	char *temp;
	
	printf("Ingrese # de palabras:  ");
	scanf("%i",&num);
	
	for(i=0;i<num;i++){
		printf("%i. Ingrese la palabra:\t",i+1);
		fflush(stdin);
		scanf("%s",&palabras[i]);
	}
	
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			if((strcmp(palabras[i],palabras[j]))>0){
				temp = palabras[i];
				palabras[i] = palabras[j];
				palabras[j] = temp;
			}
			
		}
		
	}
     
	for(i=0;i<num;i++){
		printf("%s\n",palabras[i]);
	}
	 	
	
}
