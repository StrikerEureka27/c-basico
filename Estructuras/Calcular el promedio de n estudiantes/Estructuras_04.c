#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define numEstu 4

void CargarEstructura();
void CalcularPromedio();

struct Almuno{
	
	char nombre[30];
	int edad;
	float promedio;
	
}estudiante[numEstu];


int main(){
	
	CargarEstructura();
	CalcularPromedio();
	
	return 0;
}

void CargarEstructura(){
	
	int i;
	
	for(i=0;i<numEstu;i++){
		printf("\t Ingreso de alumnos: \n");
		fflush(stdin);
		printf("\t %i. Nombre: ",i+1); gets(estudiante[i].nombre);
		printf("\t %i. Edad:  ",i+1); scanf("%i",&estudiante[i].edad);
		printf("\t %i. Promedio: ",i+1); scanf("%f",&estudiante[i].promedio);	
		printf("\n");
	}	
}

void CalcularPromedio(){
	
	int i,j;
	float max,min;
	
	max = estudiante[0].promedio;
	
    for(i=0;i<numEstu;i++){
    	if(estudiante[i].promedio>max){
    		max = estudiante[i].promedio;
		}else{
		
		}
	}
	
	printf("El promedio mayor es: %f",max);
	
	/*
	if((estudiante[0].promedio>estudiante[1].promedio)&&(estudiante[0].promedio>estudiante[2].promedio)){
	 printf("El promedio mayor es: %f",estudiante[0].promedio);
	 }else if((estudiante[1].promedio>estudiante[0].promedio)&&(estudiante[1].promedio>estudiante[3].promedio)){
	 printf("El promedio mayor es: %f",estudiante[1].promedio); 	
	 }else{
	 printf("El promedio mayor es: %f",estudiante[2].promedio);	
	 }
	 */
	 
	 
}
