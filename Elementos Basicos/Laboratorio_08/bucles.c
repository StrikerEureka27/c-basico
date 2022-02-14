#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){
	
	int cont,n,suma=0;
	
	cont = 1;
	
	printf("Digite el # de sumas: "); scanf("%i",&n);
	
	while(cont<=n){
		
		suma += cont;
		cont++;
		
		
	}

	printf("La suma es %i",suma);
	
	return 0;
}
