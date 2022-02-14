#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main(){
	
	int hora, v_hora=10,sum;
	
	
	printf("Ingrese las horas de trabajo laboradas: "); scanf("%i",&hora);
	sum = hora * v_hora;
	printf("El salario seria de: %i$",sum);

	
	
	return 0;
}
