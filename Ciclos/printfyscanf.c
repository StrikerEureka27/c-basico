#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	// Para mostrar decimales a placer, %.nf //
	
	float area, rad;
	const float pi=3.1416;
	
	
	printf("Ingres el radio: \t");
	scanf("%f", &rad); //& es para poder manipular los valores. 
	
    area = pi* pow(rad,2);	
    
    printf("El area de la circunferencia es: %.2f y el radio es: %f", area, rad); //Concatenación 
    
    return 0;
	
	
}



