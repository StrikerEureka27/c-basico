#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define numParti 2

void AsignarCat();
void CargarEstructura();

struct Corredor{
	
	char nombre[30];
	int edad;
	char sexo[30];
	char club[30];
	char categoria[30];
	
}corre1[numParti];

int main(){
	
	//printf("Ingrese el # de competidores: "); scanf("%i",&numParti);
	CargarEstructura();
	AsignarCat();
	
	
	return 0;
}


void CargarEstructura(){

    int i;
	
	for(i=0;i<numParti;i++){
		printf("\t Ingreso de corredores: \n");
		printf("\t %i. Nombre: ",i+1); gets(corre1[i].nombre);
		printf("\t %i. Edad:",i+1); scanf("%i",&corre1[i].edad);
		fflush(stdin);
		printf("\t %i. Sexo:",i+1); gets(corre1[i].sexo);
		printf("\t %i. Club:",i+1); gets(corre1[i].club);
		printf("\n");
	}
	
	
}

void AsignarCat(){
	
	int i;
	
	for(i=0;i<numParti;i++){
		if(corre1[i].edad<=18){
			strcpy(corre1[i].categoria,"Juvenil");
		}else if((corre1[i].edad>18)&&(corre1[i].edad<=40)){
			strcpy(corre1[i].categoria,"Senior");
		}else{
			strcpy(corre1[i].categoria,"Veterano");
		}
	}
	
	for(i=0;i<numParti;i++){
		printf("%i. Participante: %s \t \t Categoria: %s \t \n",i+1,corre1[i].nombre,corre1[i].categoria);
	}
	
}
