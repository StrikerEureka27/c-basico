#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TAM 20

int main(){
	
	char array1[TAM], array2[TAM], arrayc[TAM];
    
    
    printf("Ingrese nombre #1 "); gets(array1);
    printf("Ingrese nombre #2 "); gets(array2);
    
    strcpy(arrayc,array1);
    strcpy(array1,array2);
    strcpy(array2,arrayc);
    
    printf("Nombre #1: %s || Nombre #2: %s", array1,array2);
    
    
    
	
	return 0;
}
