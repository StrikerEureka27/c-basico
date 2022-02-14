#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
	int dato;
	struct nodo *sig;
}Numero;

Numero *ListaNumero(Numero *lista){
	lista = NULL;
	return lista;
}

Numero *AgregarNumero(Numero *lista, int num){
	Numero *nuevo,*aux;
	nuevo = (Numero*)malloc(sizeof(Numero));
	if(nuevo==NULL){
		printf("Error al asignar memoria...");
	}
	nuevo->dato = num;
	nuevo->sig = NULL;
	if(lista==NULL){
		lista = nuevo;
	}
	return lista;
}


int main(){
	
	Numero *lista = ListaNumero(lista);
	lista = AgregarNumero(lista,1);

	
	printf("%i",lista->dato);
	
	return 0;
}
