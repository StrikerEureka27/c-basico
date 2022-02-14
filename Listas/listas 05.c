#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct{
	char *nombre;
	struct nodo *sig;
}Libro;

Libro *AgregarLibro(Libro *lista, char *nombre);
Libro *ListaLibro(Libro *lista);


int main(){
	
	Libro *lista = ListaLibro(lista);
	lista = AgregarLibro(lista,"Harry Potter");
	lista = AgregarLibro(lista,"Ana Frank");
	lista = AgregarLibro(lista,"Narnia");
	
	while(lista!=NULL){
		printf("%s\n",lista->nombre);
		lista = lista->sig;
	}
	
	return 0;
}

Libro *ListaLibro(Libro *lista){
	lista = NULL;
	return lista;
}

Libro *AgregarLibro(Libro *lista, char *nombre){
	Libro *nuevo,*aux;
	nuevo = (Libro*)malloc(sizeof(Libro));
	if(nuevo==NULL){
		printf("Memoria insuficiente..");
	}
	nuevo->nombre = nombre;
	nuevo->sig = NULL;
	if(lista==NULL){
		lista = nuevo;
	}else{
		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
		aux->sig = nuevo;
	}
	return lista;
}


