#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

struct cliente {
	
	char nombre[30];
	char edad[10];
	char correo[40];
	
}clientes[100];


void Crear();
void Mostrar();
void Editar();
void IngresoCliente();

FILE* archivo;
char *p_dire;

int main(){
	
	int c;
	char resp;
	int op;

	do{
		
		printf("\t ** Menu ** \n");
		printf("\t 1. Crear Archivo. \n");
		printf("\t 2. Editar Archivo. \n");
		printf("\t 3. Ingreso Clientes. \n");
		printf("\t 4. Mostrar Archivo \n");
		printf("\t 5. Salir");
		printf("\n");
		printf("\t Ingrese una opcion: \t");
		scanf("%i",&op);
		
		switch(op){
			case 1: system("cls"); Crear(); break;
			case 2: system("cls"); Editar(); break;
			case 3: system("cls"); IngresoCliente(); break;
			case 4: system("cls"); Mostrar(); break;
	}
		
		printf("Desea seleccionar otra opcion:\t");
		fflush(stdin);
		scanf("%c",&resp);
		system("cls");
		
	}while(resp!='n'||resp!='N');
	
	
	return 0;
}


void Crear(){
	
	char dire[30];
	
	printf("Ingresa la ruta para crear el archivo:\t");
	fflush(stdin);
	gets(dire);
	p_dire = malloc((strlen(dire)+1)*sizeof(char));
	strcpy(p_dire,dire);

	printf("\n");
	archivo = fopen(p_dire,"wt");
	if(archivo==NULL){
		printf("Error al abrir el archivo...\n");
	}else{
		printf("Archivo creado con exito...\n");
	}
	
	
}

void Editar(){
	
	int c;
	char cadena[100];
	printf("Archivo: %s",p_dire);
	printf("Pulse Control+Z para salir del editor: \n");
	
	archivo = fopen(p_dire,"a");
	if(archivo==NULL){
		printf("Error al abrir el archivo...");
	}else{
		while((c=getchar())!=EOF){
			fputc(c,archivo);
		}
	fclose(archivo);
	
 }
 
}

void IngresoCliente(){
	
	int num,i;
	
	printf("Archivo: %s \n",p_dire);
	printf("Ingrese el numero de clientes: \t");
	scanf("%i",&num);
	
	for(i=0;i<num;i++){
		printf(" *Ingreso de clientes* \n");
		printf("%i. Nombre: \t",i+1); fflush(stdin);
		gets(clientes[i].nombre);
		printf("%i. Edad: \t",i+1);
		gets(clientes[i].edad);
		printf("%i. Correo: \t",i+1);
		gets(clientes[i].correo);
	}
	
	archivo = fopen(p_dire,"a+");
	if(archivo==NULL){
		printf("Error al abrir el archivo... \n");
		exit(1);
	}
		for(i=0;i<num;i++){
			fprintf(archivo,"Nombre: \n");
			fwrite(clientes[i].nombre,1,strlen(clientes[i].nombre),archivo);
			fprintf(archivo,"Edad: \n");
			fwrite(clientes[i].edad,1,strlen(clientes[i].edad),archivo);
			fprintf(archivo,"Correo: \n");
			fwrite(clientes[i].correo,1,strlen(clientes[i].correo),archivo);
		}
		
		fclose(archivo);
		
	}
	
	void Mostrar(){
		
		int c;
		char cadena[80];
		printf("Archivo: %s\t",p_dire);
		
		archivo = fopen(p_dire,"r");
		if(archivo==NULL){
			printf("Error al cargar el archivo...");
			exit(1);
		}
		
		while((c=fgetc(archivo))!=EOF){
			if(c=='\n'){
				printf("\n");
			}else{
				putchar(c);
			}
		}
		
	}

