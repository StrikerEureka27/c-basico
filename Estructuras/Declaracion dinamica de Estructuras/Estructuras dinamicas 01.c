#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>  

typedef struct{
	char *nombre;
	int fuerza;
	int magia;
	int vida;
}heroe;

typedef struct{
	int fuerza;
	int vida;
}villano;

heroe p1;
villano *p_vill;

void dec_heroe();
void dec_villano();
void Turnos();
void Limpiar();
void datos_villano();
void asg_vill();


int main(){
	
	int op,i;
	char resp;
	
	do{
		do{
			
			printf("\t - Menu del juego - \n");
			printf("\t 1. Jugar \n");
			printf("\t 2. Opciones \n");
			printf("\t 3. Salir \n ");
			printf("\t Seleccione una opcion: ");
			scanf("%i",&op);
			
		}while(op<1||op>3);
		
		switch(op){
			case 1: system("cls");
			
				dec_heroe();
				system("cls");
				Turnos();
				
			break;
			
		}
		
		printf("\n\n Desea ingresar otra opcion (S/N): \t");
		scanf("%c",resp);
		
	}while(resp=='s' || resp=='S');
	
		
	return 0;
}

void dec_heroe(){
	
	char temp[50];
	
	printf("\n Ingrese su nickname:\t");
	fflush(stdin);
	fgets(temp,50,stdin);
	Limpiar(temp);
	p1.nombre = malloc(strlen(temp)*sizeof(char));

	if(p1.nombre==NULL){
		printf("Error memoria insuficiente...\n");
	}
	strcpy(p1.nombre,temp);
	/* printf("\n %s",p1.nombre); */
	p1.fuerza = 1000;
	p1.magia = 500;
	p1.vida = 1500;	
}

void Turnos(){
		
	int j,i=0,op,ataque;	
	int num=0;
	int obj;
	
		asg_vill(&num); /* Asignacion por defecto */
		
		do{
						
			printf("Turno: \t %i \n\n",i);
			printf("Jugador actual: %s \t",p1.nombre);
			printf("--> Vida: %i    ",p1.vida);
			printf("--> Fuerza: %i  ",p1.fuerza);
			printf("--> Magia: %i   ",p1.magia);
				
			printf("\n\n");	
			
			do{
				printf("1. Atacar\n");
				printf("2. Retirarse\n");
				printf("Que accion desea intentar: \t");
				scanf("%i",&op);
			}while(op<1 || op>2);
			
			printf("Seleccione el villano que deseas atacar:\t");
			
				for(j=0;j<num;j++){
					printf("\n \t \t (x__x) %i \n",j);
					printf("\t \t Fuerza: %i \n",p_vill[j].fuerza);
					printf("\t \t vida: %i \n",p_vill[j].vida);
	           }	
			printf("---> "); scanf("%i",&obj);
			
			if(p_vill[obj].vida>0){
				switch(op){
				case 1: 
					srand(time(NULL));
					ataque = rand() % ((100+1) -10);
					p_vill[obj].vida -= ataque;
									
				 break;
				case 2: printf("\n retirada");  break;
			}
		}
			
			if(i%2==0){	
				p_vill = realloc(p_vill,(num+1)*sizeof(villano));
				if(p_vill==NULL){
					printf("Error para reservar la memoria");
				}
				dec_villano(num);
				num++;
		    }	
			getch();
			system("cls");
			
		i++;
	}while(p1.vida>0);
	
}



void dec_villano(int cont){
	
	p_vill[cont].fuerza = 1000;
	p_vill[cont].vida = 500;
	
}

void asg_vill(int *num){ /*Apunto al valor de la dirección de memorria de " num " */
	
	p_vill = malloc((*num+1)*sizeof(villano));
		if(p_vill==NULL){
			printf("Error al asignar la memoria... ");
		}
		dec_villano(*num);
	    (*num)++;
}

void Limpiar(char cadena[]){
	
	int i;
	
	for(i=0;i<strlen(cadena);i++){
		if(cadena[i]=='\n'){
			cadena[i]='\0';
		}
	}
}





