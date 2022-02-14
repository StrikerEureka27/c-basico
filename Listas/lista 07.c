#include <stdlib.h>
#include <stdio.h>
#include <conio.h>


typedef struct{
	char *dato;
	struct nodo *sig;	
}Libro;

Libro *declaraLista(Libro *lista){
	lista = NULL;
	return lista;
}

Libro *agregarLibro(Libro *lista, char *dato){
	Libro *nuevoLibro, *aux;
	nuevoLibro = (Libro*)malloc(sizeof(Libro));
	if(nuevoLibro==NULL){
		printf("Error al asignar la memoria");
	}
	nuevoLibro->dato = dato;
	nuevoLibro->sig = NULL;
	
	if(lista==NULL){
		lista = nuevoLibro;
	}else{
		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
	}
	return lista;
}



int main(){
	
	Libro *lista = declaraLista(lista);
	lista = agregarLibro(lista,"Pablo");
	
	while(lista->sig=!NULL){
		printf("%s",lista->dato);
		lista = lista->sig;
	}
	
	
	return 0;
}
