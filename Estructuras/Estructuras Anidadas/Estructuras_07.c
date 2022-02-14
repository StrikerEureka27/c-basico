#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Cargar();
void Mostrar();
void Calcular();

int num;

struct promedio{
	
	int mate;
	int ciencia;
	int social;
	int ingles;
};

struct alumno{
	
	char nombre[30];
	char sexo[30];
	int  edad;
	struct promedio nota;
	float promedio;
	
}alumnos[100];



int main(){
	
	printf("Ingrese el numero de estudiantes: ");
	scanf("%i",&num);

Cargar();
Calcular();
Mostrar();

	
	return 0;
}


void Cargar(){
	
	int i;
	
	printf("Ingreso de alumnos: \n");
	for(i=0;i<num;i++){
		
		printf("%i. Nombre: \t",i+1);
		fflush(stdin);
		gets(alumnos[i].nombre);
		printf("%i. Sexo: \t",i+1);
		gets(alumnos[i].sexo);
		printf("%i. Edad: \t",i+1);
		scanf("%i",&alumnos[i].edad);
		printf("1. Mate: \t",i+1);
		scanf("%i",&alumnos[i].nota.mate); 
		printf("2. Ciencias: \t");
		scanf("%i",&alumnos[i].nota.ciencia);
		printf("3. Social: \t");
		scanf("%i",&alumnos[i].nota.social);
		printf("4. Ingles: \t");
		scanf("%i",&alumnos[i].nota.ingles);
		printf("\n \n");
	}
}

void Calcular(){

int sum, i;
float prom;

for(i=0;i<num;i++){
	sum = alumnos[i].nota.ciencia + alumnos[i].nota.mate + alumnos[i].nota.social + alumnos[i].nota.ingles;
	prom = sum/4;
	alumnos[i].promedio = prom;
}	
	
}

void Mostrar(){
	
	int i;
	
  for(i=0;i<num;i++){
  	printf("Nombre: %s \t\n",alumnos[i].nombre);
  	printf("Sexo: %s \t\n",alumnos[i].sexo);
  	printf("Edad: %i \t\n",alumnos[i].edad);
  	printf("Mate: %i \t\n",alumnos[i].nota.mate);
  	printf("Ciencias: %i \t\n",alumnos[i].nota.ciencia);
  	printf("Social: %i \t\n",alumnos[i].nota.social);
  	printf("Ingles: %i \t\n",alumnos[i].nota.ingles);
  	printf("Promedio: %f \t\n",alumnos[i].promedio);
  	printf("\n \n");
  }
	
	
	
}



