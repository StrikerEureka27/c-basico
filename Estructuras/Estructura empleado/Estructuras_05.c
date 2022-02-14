#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num;

void CargarStruct();
void MostrarStruct();
void CalcularPuesto();
void MayorMenor();

struct Empleados{
	
	char nombre[20];
	int edad;
	int salario;
	char puesto[30];
	
}arreglo[100];

int main(){
	
	//(printf("Ingres el numero de empleados: "); scanf("%i",&num);
	printf("\n");
	CargarStruct();
	CalcularPuesto();
	MayorMenor();
	MostrarStruct();
	
	return 0;
}


void CargarStruct(){
	
	int i;
	
	printf("Ingrese el numero de empleados: ");
	scanf("%i",&num);
	printf("\n");
	
	
    printf("\t Ingreso de empleados: \n");	
    
	for(i=0;i<num;i++){
		printf("%i. Ingrese nombre: ",i+1); 
		fflush(stdin);
		gets(arreglo[i].nombre);
		printf("%i. Ingrese edad: ",i+1); 
		scanf("%i",&arreglo[i].edad);
	    fflush(stdin);
		printf("%i. Ingrese salario: ",i+1); 
		scanf("%i",&arreglo[i].salario);
		printf("\n");
	}
	
	
}


void CalcularPuesto(){
	
	int i;
	
	for(i=0;i<num;i++){
		if(arreglo[i].salario>=9000){
			strcpy(arreglo[i].puesto,"Ejecutivo");
		}else if((arreglo[i].salario<=8999)&&(arreglo[i].salario>=6000)){
			strcpy(arreglo[i].puesto,"Supervisor");
		}else{
			strcpy(arreglo[i].puesto,"Obrero");
		}
	}
	
}


void MayorMenor(){
	
	int i, max, min;
	
	max = arreglo[0].salario;
	min = arreglo[0].salario;
	
	for(i=0;i<num;i++){
		if(arreglo[i].salario>max){
			max = arreglo[i].salario;
		}
	}
	
	for(i=0;i<num;i++){
		if(arreglo[i].salario<min){
			min = arreglo[i].salario;
		}
	}
	
	printf("\n");
	printf("El mayor salario es: %i",max);
	printf("\n");
	printf("El menor salario es: %i",min);
	printf("\n");
	
}

void MostrarStruct(){
	
	int i;
	
	printf("\n");
	
	for(i=0;i<num;i++){
		
		printf("Nombre: %s \t",arreglo[i].nombre);
		printf("Edad: %i \t",arreglo[i].edad);
		printf("Salario: %i \t",arreglo[i].salario);
		printf("Puesto: %s \t",arreglo[i].puesto);
		printf("\n");
	}
	
}
