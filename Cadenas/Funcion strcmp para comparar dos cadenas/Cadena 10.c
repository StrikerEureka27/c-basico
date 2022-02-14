#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(){
	
	char p1[30],p2[30];
	
	printf("Ingrese cadena 1:\t");
	gets(p1);
	
	printf("Ingrese cadena 2:\t");
	gets(p2);
	
	if((strcmp(p1,p2))==0){
		printf("Cadenas iguales");
	}else{
		printf("Cadenas diferentes");
	}
	
	
	return 0;
}
