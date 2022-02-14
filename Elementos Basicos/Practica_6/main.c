#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



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
    
	
	}while(base!=0 && alt!=0);
		
   system("Pause");
}
