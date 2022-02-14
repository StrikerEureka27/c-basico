#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>

//funciones aleatorias

void funcion_aleatoria();

int main(){
	
	funcion_aleatoria();	
	
	return 0;
}


void funcion_aleatoria(){
	
	int num, i,infe,super;
	
	srand(time(NULL));
	
	printf("Digite el limite inferior: "); scanf("%i",&infe);
	printf("Digite el limite superior: "); scanf("%i",&super);
	
	for(i=0;i<10;i++){
		
	num = 1 + rand() % ((super+1) -infe);
	printf("%i \n",num);
	
    }
}
