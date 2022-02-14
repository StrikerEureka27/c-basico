#include <stdio.h>
#include <stdlib.h>

/*Construir la lista*/
typedef struct{
	int dato;
	struct Nodo *sig; /* Auto-referenciar */
}Nodo;
	
Nodo *primer = NULL;
Nodo *ultimo = NULL;

void Agregar(Nodo *nodo){
	
	nodo->sig = NULL; /* *sig ---> NULL */
	
	if(primer==NULL){
		/* *primero: 5 (nodo)   */
		primer = nodo;
		/* *Ultimo: 5 (nodo)   */
		ultimo = nodo;
	}else{/* 5-> 7 -> 3*/
		ultimo->sig = nodo;
		/* *Ultimo: 7 (nodo)   */
		ultimo = nodo;
	}
}

int main(){
	
	/*Le asignamos memoria dinamica al Nodo*/
	Nodo *primerNodo = malloc(sizeof(Nodo));
	/* [  dato  | *primerNodo ] *sig ---> [dato | *segundoNodo ] *sig---> NULL*/
	primerNodo->dato = 5;
	
	Nodo *segundoNodo = malloc(sizeof(Nodo));
	segundoNodo ->dato = 7;
	
	Agregar(primerNodo);
	Agregar(segundoNodo);
	
	/*Recorrer una lista*/
	
	Nodo *i = primerNodo;
	while(i!=NULL){
		printf("%i -->  ",i->dato);
		i = i->sig;
	}
	
	
	return 0;
}
