#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char p1[]="Hola";
	char p2[]="Holus";
	
	if(strcmp(p1,p2)==0){
		printf("Ambas cadenas son iguales. ");
	}else{
		printf("Cadenas distintas. ");
	}
	
	
	
	return 0;
}
