#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define n 50

typedef struct{
	
	char eng[n];
	char es[n];
	int lleno;
	
}traductor;

traductor trad[n];

void Vacio();
void agregar();
void Traducir();
void tradu();

int main(){
	
	char resp;
	int op;
	
	Vacio();
	
	do{
		
		do{
			
			printf(" - Traductor - \n");
			printf("1. Ingrese palabras al traductor: \n");
			printf("2. Busqueda de traduccion \n");
			printf("Ingrese una opcion: \t");
			scanf("%i",&op);
		   
		}while(op<1 || op>2);
					
		
		switch(op){
			case 1: agregar(); getch(); break;
			case 2: Traducir(); getch(); break;
		}
		
		printf("\n Desesa ingresar otra opcion (s/n): \t");
		fflush(stdin);
		scanf("%c",&resp);
		system("cls");
		
	}while(resp!='n' || resp!='N');

	
	return 0;
}

void Vacio(){
	
	int i;
	
	for(i=0;i<0;i++){
		trad[i].lleno = 0;
	}	
}


void agregar(){
	
	int i,aux=0;
	
	printf(" - Ingreso de palabras - \n");
	
	for(i=0;i<n && aux==0;i++){
	printf("Ingrese la palabra en (ES): \t");
	if(trad[i].lleno!=1){
		fflush(stdin);
		fgets(trad[i].es,n,stdin);
		printf("Ingrese la traducion en (ENG): \t");
		fgets(trad[i].eng,n,stdin);
		trad[i].lleno = 1;
		aux=1;
		i++;
	}else{
		printf("Error espacio insuficiente...\n");
	}
	
}

}


void Traducir(){
	
	int op;
		
		do{
		
			printf("1. ESP ---> ENG \n");
			printf("2. ENG ---> ESP \n");
			printf("Ingrese una opcion: \t");
			scanf("%i",&op);
		   
		}while(op<1 || op>2);
					
		
		switch(op){
			case 1: tradu(op); break;
			case 2: tradu(op); break;
		}
	}	
	
	void tradu(int op){
		
		int i;
		char temp[30],temp2[30];
		
		printf("\n Ingrese la palabra que desea traducir: \t");
		fflush(stdin);
		fgets(temp,30,stdin);
		
		if(op==1){
			for(i=0;i<n;i++){
				if((strcmp(temp,trad[i].es))==0){
					strcpy(temp,trad[i].eng);
					printf("La traduccion es: %s",temp);
				}
			}
		
		}else{
			
			for(i=0;i<n;i++){
				if((strcmp(temp,trad[i].eng))==0){
					strcpy(temp,trad[i].es);
				}
			}
			
			printf("La traduccion es: %s",temp);
		
		}
	}
