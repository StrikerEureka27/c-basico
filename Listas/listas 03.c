#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct{
	int num;
	struct nodo *sig; 
}Numero;

Numero *AgregarNumero(Numero *lista, int num);
Numero *ListaNumero(Numero *lista);


int main(){
	int num = 10;
	Numero *lista = ListaNumero(lista);
	lista = AgregarNumero(lista,"1");
	lista = AgregarNumero(lista,"2");
	lista = AgregarNumero(lista,"3");
	while(lista!=NULL){
	printf("%s --> ",lista->num);
	lista = lista->sig;
	}
	
	return 0;
}


/* Declarando la lista */
Numero *ListaNumero(Numero *lista){
	lista = NULL; 
	return lista;
}

Numero *AgregarNumero(Numero *lista, int num){
	Numero *nuevonum,*aux;
	nuevonum = (Numero*)malloc(sizeof(Numero));
	if(nuevonum==NULL){
		printf("Error al asignar memoria...");
	}
	nuevonum->num = num;
	nuevonum->sig = NULL;
	if(lista==NULL){
		lista = nuevonum;
	}else{
		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
		aux->sig = nuevonum;
	}
	return lista;
}

