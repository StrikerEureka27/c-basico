#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define n 50

typedef struct{
	
	char eng[n];
	char es[n];
	int lleno;
	
}traductor;

traductor trad[n];
/*
void Vacio();
void Agregar();
void Traducir();*/

int main(void){
	
	char resp;
	int op=0;
	
	do{
		
		do{
			
			printf(" - Traductor - \n");
			printf("1. Ingrese palabras al traductor: \n");
			printf("2. Busqueda de traduccion \n");
			printf("Ingrese una opcion: \t");
			scanf("%i",&op);
		   
		}while(op<1 || op>2);
					
		
		switch(op){
			case 1: printf("caso1 \n"); getch(); /*Agregar();*/ break;
			case 2: printf("caso2"); /*Traducir();*/ break;
		}
		
		printf(" \n Desesa ingresar otra opcion (s/n): \t");
		fflush(stdin);
		scanf("%c",&resp);
		
	}while(resp!='n' || resp!='N');
	return 0;
}

