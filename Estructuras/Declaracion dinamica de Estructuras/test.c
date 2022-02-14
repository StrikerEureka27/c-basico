#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

typedef struct{
	int fuerza;
	int vida;
}villano;

villano *vector;

void Mostrar();
void Declaro();
void Asigno();


int main(){
	
	int i, num = 1;
	int *temp;
	
	Asigno(num); /*Asignacion por defecto*/
	for(i=0;i<10;i++){
		
		printf("Turno: %i \n",i);
		if(i%2==0 && i!=0){
			num++;
			vector = realloc(vector,1*sizeof(vector));
		}
		
		Declaro(num);
		Mostrar(num);
		printf("\n");
		getch();
		
		
	}
	
	
	
	
	
	return 0;
}

void Asigno(int num){
	
	vector = malloc(num*sizeof(vector));
	if(vector==NULL){
		printf("Error al almacenar la memoria...");
		
	}
}

void Declaro(num){
	int i;
	for(i=0;i<num;i++){
		vector[i].vida = 100;
	}
}

void Mostrar(int num){
	int i;
	for(i=0;i<num;i++){
		printf("%i",vector[i].vida);
	}
	
}
