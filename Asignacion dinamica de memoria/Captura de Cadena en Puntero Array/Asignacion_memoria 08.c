#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	char cadena[30],*p_cadena;
	int len;
	
	printf("Ingrese una palabra: \t");
	printf("\n");
	gets(cadena);
	
	strlen(cadena);
	
	p_cadena = malloc((len+1)*sizeof(char));
	
	strcpy(p_cadena,cadena);
	
	printf("%s\n",p_cadena);

    free(p_cadena);
    
    printf("%s\n",p_cadena);

	return 0;
}
