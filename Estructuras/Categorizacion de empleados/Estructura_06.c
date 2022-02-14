#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int num;

void CargarEstructura();
void MostrarEstructura();
void CalculoMM();

struct Atleta{
	
	char nombre[35];
	char pais[35];
	int num_med;
	
}atletas[100];


int main(){
	
	char resp;
	
	do{
	
	printf("Ingrese el # de Atletas: \t");
	scanf("%i",&num);
	CargarEstructura();
	CalculoMM();
	MostrarEstructura();
	system("pause");
	
	system("cls");
	printf("Desea repetir el programa? (s/n) \t");
	fflush(stdin);
	scanf("%c",&resp);
	
	}while(resp!='n');
	
	return 0;
}

void CargarEstructura(){
	
	int i;
	
	printf("*Ingreso de Atletas* \n");
	
	for(i=0;i<num;i++){
		printf("%i. Nombre: ",i+1); fflush(stdin); gets(atletas[i].nombre);
		printf("%i. Pais: ",i+1); fflush(stdin); gets(atletas[i].pais);
		printf("%i. Numero de medallas: ",i+1); scanf("%i",&atletas[i].num_med);
		printf("\n");
		fflush(stdin);
	}
}


void CalculoMM(){
	
	int i, max, min;
	int posatle;
	
	max = atletas[0].num_med;
	min = atletas[0].num_med;
	
	
	for(i=0;i<num;i++){
		if(atletas[i].num_med>max){
			max = atletas[i].num_med;
			posatle = i;
		}else if(atletas[i].num_med<min){
			min = atletas[i].num_med;
		}
		
	}
	
	printf("\n");
	printf("Atleta %s es el que posee mayor # de medallas, actualmente tiene: %i ",atletas[posatle].nombre,max);
	printf("\n");
}

void MostrarEstructura(){
	
	int i;
	
	printf("\n");
	for(i=0;i<num;i++){
		printf("Nombre: %s \t",atletas[i].nombre);
		printf("Pais: %s \t",atletas[i].pais);
		printf("Medallas: %i \t ",atletas[i].num_med);
		printf("\n");
	}
	
	
}


