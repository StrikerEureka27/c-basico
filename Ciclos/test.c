#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	char r1, r2, r3, r4;
	int c1, c2, c3, c4;
	
	
	printf("Ingrese color ( R1 ):\t ");
	scanf("%s", r1);
	
	
	printf("Ingrese color ( R2 ):\t ");
	
	
	printf("Ingrese color ( R3 ):\t ");
   
	
	printf("Ingrese color ( R4 ):\t ");

	
	
	
	
	
	c1=r1;
	r1=r4;
	
	printf("Nuevo color ( R1 ): %d\n ", r1);	
	
	
	c2=r2;
	r2=r3;
	
	printf("Nuevo color ( R2 ): %d\n ", r2);
	
	c3=r3;
	r3=c2;
	
	printf("Nuevo color ( R3 ): %d\n ", r3);
	
	
	c4=r4;
	r4=c1;
	
	printf("Nuevo color ( R4 ): %d\n ", r4);
	

	
}
