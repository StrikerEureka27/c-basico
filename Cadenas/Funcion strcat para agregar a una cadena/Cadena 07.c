#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char cadena_c[30],cadena[30];
	int len;
	
	printf("Digite una palabra:\t");
	gets(cadena);
	
	strcpy(cadena_c,cadena);
	printf("%s\n",cadena_c);
	
	strcat(cadena_c," buena broma");
	printf("%s",cadena_c);
	
	
	
	
	return 0;
}
