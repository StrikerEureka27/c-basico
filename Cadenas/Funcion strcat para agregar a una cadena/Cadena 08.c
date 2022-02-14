#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char cadena[30];
	
	printf("Digite una cadena:\n");
	gets(cadena);
	
	printf("%s",cadena);
	printf("\n\n");
	strcat(cadena,"Que tengas buen dia");
	printf("%s",cadena);
	
	return 0;
}
