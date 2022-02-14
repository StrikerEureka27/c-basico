#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Definir variables de algun tipo*/
typedef struct{
	char *nombre;
	struct nodo *sig;
}Contacto;

Contacto *ListaContacto(Contacto *lista){  /* *lista --> NULL */ 
	lista = NULL;
	return NULL;
}

Contacto *AgregarContacto(Contacto *lista, char *nombre){
	Contacto *nuevocontacto, *aux;
	nuevocontacto = (Contacto*)malloc(sizeof(Contacto));
	if(nuevocontacto==NULL){
		printf("Error al asignar memoria");
	}
	nuevocontacto->nombre = nombre;
	nuevocontacto->sig= NULL;
	if(lista==NULL){ /*  1. lista--> NULL 2. lista ---> [Pablo | *sig ] --> NULL  */
		lista = nuevocontacto;
	}else{ /* lista ---> [Pablo | *sig ] --> NULL */
		aux = lista; /* aux ---> [Pablo | *sig ] -->NULL  */
		while(aux->sig!=NULL){ /*  */
			aux = aux->sig;
		}
		aux->sig = nuevocontacto;
	}
	
	return lista;
}





int main(){
	
	Contacto *lista = ListaContacto(lista);
	lista = AgregarContacto(lista,"Pablo");
	lista = AgregarContacto(lista,"Pablo");
	printf("%s\n",lista->nombre);
	printf("%p\n",lista->sig);
	
	return 0;
}
