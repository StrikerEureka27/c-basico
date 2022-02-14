#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	char *nombre;
	struct Nodo *sig;
}Libro;

Libro *ListaLibro(Libro *lista){
	lista=NULL;
	return lista;
}

Libro *AgregarLista(Libro *lista, char *nombre){
	Libro *nuevolibro,*aux;
	nuevolibro = (Libro*)malloc(sizeof(Libro));
	if(nuevolibro==NULL){
		printf("Error al asignar memoria.");
	}
	nuevolibro->nombre = nombre;
	nuevolibro->sig = NULL;
	if(lista==NULL){
		lista = nuevolibro;
	}else{
		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
		aux->sig = nuevolibro;
	}
	return lista;
}


int main(){
	
	Libro *lista = ListaLibro(lista);
	lista = AgregarLista(lista,"Hola mundo");
	lista = AgregarLista(lista,"Hola Marte");
	while(lista!=NULL){
	printf("%s --> ",lista->nombre);
	lista = lista->sig;
	}
	
	
	return 0;
}
