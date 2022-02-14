#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define n 50

typedef struct{
	char titulo[n];
	char autor[n];
	int lleno;
}libro;

typedef struct{
	char nombre_bibli[n];
	libro lib[10];
	int lleno_biblio;
}biblio;

biblio bi[3];

/*void vacio();*/
void Agregar_biblio();
void Agregar_libro();
void Consulta();
void Limpiar();
void Cambiar();

int main(){
	
	int op;
	char resp;
	

	Limpiar();
	
	do{
	
		do{
			
			printf("\t >> Biblioteca << \n ");
			printf("\t 1. Agregar una nueva biblioteca. \n");
			printf("\t 2. Agrear una libro a una biblioteca. \n");
			printf("\t 3. Consulte un libro. \n");
			printf("\t Ingrese una opcion: \t");
			scanf("%i",&op);
			printf("\n\n");
			
		}while(op<1 || op>3);
	
	switch(op){
		case 1: Agregar_biblio(); getch(); break;
		case 2: Agregar_libro(); getch(); break;
		case 3: Consulta(); getch(); break;
	}
	
	printf("\t\n Desea ingresar una nueva opcion (S/N):\t");
	fflush(stdin);
	scanf("%c",&resp);
	system("cls");
	
 	}while(resp!='n'||resp!='N');
	
	return 0;
}


void Cambiar(){
	
	int i;
	
	for(i=0;i<n;i++){
		if((strcmp(bi[i].nombre_bibli,"/n"))==0){
			strcpy(bi[i].nombre_bibli,"\0");
		}
	}
	
}


void Limpiar(){
		
		int i,j;
		
		for(i=0;i<3;i++){
			bi[i].lleno_biblio = 0;
			for(j=0;j<3;j++){
				bi[i].lib[i].lleno = 0;
			}
	    }
		
}

void Agregar_biblio(){
	
	int i,aux;
	aux = 0;
	
	printf("\t >> Ingreso de bibliotecas << \n");
	
	for(i=0;i<3&&aux==0;i++){
		if(bi[i].lleno_biblio==0){
			printf("\t Nombre de biblioteca: %i \t",i);
			fflush(stdin);
			fgets(bi[i].nombre_bibli,n,stdin);
			bi[i].lleno_biblio = 1;
			aux=1;
	   }
	}
	
}

void Agregar_libro(){
	
	int i,j,x,aux,pos;
	char temp[n];
	
	aux = 0;
	pos = 0;
		Cambiar();
		printf("\n\t >> Bibliotecas disponibles: << \n");
		for(j=0;j<3;j++){
			printf(" | %i. %s |",j+1,bi[j].nombre_bibli);
		}
			
			printf("\t >> Ingreso de libros << \n");
			printf("\t Seleccione una biblioteca: \t");
			fflush(stdin);
			fgets(temp,n,stdin);
						
			for(x=0;x<3&&aux==0;x++){
				if((strcmp(temp,bi[x].nombre_bibli))==0){
					pos = x;
					printf("\t Ingrese titulo del libro: \t");
					fgets(bi[pos].lib[pos].titulo,n,stdin);
					printf("\t Ingrese autor del libro: \t");
					fgets(bi[pos].lib[pos].autor,n,stdin);
					bi[x].lib[x].lleno = 1;
					aux++;
	        	}
    	}
		
		
      
	}
	
	void Consulta(){
		
		int i,pos;
		char temp[n];
		
	
	
		printf("Ingrese el nombre del libro que desea consultar: \t");
		fflush(stdin);
		fgets(temp,n,stdin);
		for(i=0;i<n;i++){
			if((strcmp(temp,bi[i].lib[i].titulo))==0){
				pos = i;
				printf("\n Titulo: %s \t",bi[pos].lib[pos].titulo);
				printf("\n Autor: %s \t",bi[pos].lib[pos].autor);
				printf("\n Biblioteca : %s \t",bi[i].nombre_bibli);
			}
		}
		
	}
	
	

	

