#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

//Imprimir el alfabeto con punteros

int main(){
	
	char letra;
	char *p_letra;
	p_letra = &letra;
	
	for(letra='A';letra<='Z';letra++){
		printf("%c",*p_letra);
	}
	
	
	return 0;
}
