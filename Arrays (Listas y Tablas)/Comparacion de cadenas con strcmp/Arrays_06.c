#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int i=0,num,hombre=0,mujer=0;
	char  alumnos[30];
	
	printf("Ingrese el numero de estudiantes: "); scanf("%i",&num);
	printf("\n \n");
	
	
	for(i=0;i<num;i++){
		
		fflush(stdin);
		printf("Ingrese el sexo del estudiante: \t");
		gets(alumnos);
		
		
		if(strcmp(alumnos,"masculino")==0){
			
			hombre++;
			
		}else if(strcmp(alumnos,"femenino")==0){
			
			mujer++;

	}
	
}
	
	printf("\n \n");
	
	printf("Hombres: %i || mujeres: %i",hombre,mujer);

	return 0;
}
