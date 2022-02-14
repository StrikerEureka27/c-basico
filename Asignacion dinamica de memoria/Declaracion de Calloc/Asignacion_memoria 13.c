#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char *p_cadena,cadena[30];
	int len;
	
	printf("Digite una palabra:\t");
	gets(cadena);
	
	len = strlen(cadena);
	p_cadena = calloc(len+1,sizeof(char));
	
	strcpy(p_cadena,cadena);
	
	printf("%s",p_cadena);
	
	free(p_cadena);
	
	return 0;
}
