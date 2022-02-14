#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void Suma(int x, int y);
void Resta(int x, int y);
void Multi(int x, int y);
void Div(int x, int y);

int main(){
	
	int op,a,b;
    
	
    printf("Digite dos digitos: "); scanf("%i %i", &a, &b);
 
	
	do{
		
		
		printf("\t **Menu** \n");
		printf("\t  1. Suma \n");
		printf("\t  2. Restar \n ");
		printf("\t  3  Multiplicar \n");
		printf("\t  4. Dividir \n");
		printf("\t  5. Salir \n");
		printf("Seleccione una opcion: "); scanf("%i",&op);
		system("cls");
		
		switch(op){
		
		 case 1:
		 	
		 	system("cls");
		 	Suma(a,b);
		 	system("pause");
		 	system("cls");
		 	
		 	break;
		 	
		 case 2:
		 	
		 	system("cls");
		 	Resta(a,b);
		 	system("pause");
		 	system("cls");
		 	
		    break;
				
		 case 3:
		 	
		 	system("cls");
		 	Multi(a,b);
		 	system("pause");
		 	system("cls");
		 	
		    break;	
		 
		 case 4: 
		     
		    system("cls");
		 	Div(a,b);
		 	system("pause");
		 	system("cls"); 
		 
		    break;	
		 	 
		 default:
		   break;	
		
			
		}
	
		
	}while(op!=5);
	
	
	
		
	return 0;
}

void Suma(int x, int y){
	
	int suma=0;
	
	suma = x + y;
	
	printf("La suma de %i y %i  es  %i \n", x ,y, suma);
	
}

void Resta(int x, int y){
	
	int suma=0;
	
	suma = x - y;
	
	
	printf("La resta de %i y %i  es  %i \n", x ,y, suma);
	
}

void Multi(int x, int y){
	
	int suma=0;
	
	suma = x * y;
	
	
	printf("La Multiplicación de %i y %i  es  %i \n", x ,y, suma);
	
}

void Div(int x, int y){
	
	int suma=0;
	
	suma = x / y;
	
	
	printf("La Division de %i y %i  es  %i \n", x ,y, suma);
	
}



