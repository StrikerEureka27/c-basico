#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int i,len,cont=0; 
	char cadena[30];
	char *p_cadena;
	
	printf("Ingrese su nombre: ");
	gets(cadena);
	
	len = strlen(cadena);
	
	for(i=0;i<len;i++){
		p_cadena = &cadena[i];
		switch(*p_cadena){
			case 'a': cont++; break;
			case 'e': cont++; break;
			case 'i': cont++; break;
			case 'o': cont++; break;
			case 'u': cont++; break;	
		}
		
	}
	
	printf("\n");
	printf("El numero de vocales es: %i",cont);
	
	
	return 0;
}
