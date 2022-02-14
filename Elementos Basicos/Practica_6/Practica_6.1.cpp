#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>



int main() {
	
	int base, alt, area, cont;
	
	do{
	
    
	printf(" Ingrese base:   \t ");
	scanf("%d", &base);
	
	printf(" Ingrese Altura: \t ");
	scanf("%d", &alt);
	
	area = base * alt;
	cont++;
	
	printf("%d",area);
	printf("Triangulos calculados: \t %d", cont);
    fflush(stdin);
	
	}while(base!=0 && alt!=0);
		
   return 0;
}
