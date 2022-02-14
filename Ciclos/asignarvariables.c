#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int v1, v2;
	int c1;
	
	printf("Ingrese valor para V1: ");
	scanf("%d", &v1);
	
	printf("Ingrese valor para V2: ");
	scanf("%d", &v2);
	
	
	c1=v1;
    v1=v2;
    
	
		
	printf("El nuevo valor de V1 es: %d ", v1);
	
	
	v2=c1;
	
	
	printf("El nuevo valor de V2 es: %d ", v2);
	
	
	
	
	
}
