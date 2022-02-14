#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	float *a;
	
	a = malloc(sizeof(float)); //int significa el valor de una variable entera
    
    *a = 2.45;
    
	printf("%.2f",*a); 
	

	
	
	
	
	
	return 0;
}
