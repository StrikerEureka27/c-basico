#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main() {
	
	int op, num1, num2, sum;
	
	do{
		
		
		
		
		printf("     _________ Menu _________  \n");
		printf(" (1). Suma de dos numeros.     \n");
		printf(" (2). Resta de dos numeros.    \n");
		printf(" (3). Multiplicar dos numeros. \n");
		printf(" (4). Dividir dos numeros.     \n");
		printf(" (5). Salir                    \n");
		printf(" \n ");
			
		
		do{
		
		printf("     Ingrese una opcion: \t");
		fflush(stdin);
		scanf("%d", &op);
		
			
		}while(op<1 || op>5);
		
		
		switch(op){
			
		case 1:
			
		printf("Ingrese valor 1: \t ");
		scanf("%d", &num1);
		
		printf("Ingrese valor 2: \t ");
		scanf("%d", &num2);
		
		sum = num1 + num2;
		
		printf("El resultado es: %d", sum);
		getch();
		system("cls");
		
		break;	
		
			
		case 2:
			
		printf("Ingrese valor 1: \t ");
		scanf("%d", &num1);
		
		printf("Ingrese valor 2: \t ");
		scanf("%d", &num2);
		
		sum = num1 - num2;
		
		printf("El resultado es: %d", sum);
		getch();
		system("cls");
		
		break;
		
		case 3:
			
		printf("Ingrese valor 1: \t ");
		scanf("%d", &num1);
		
		printf("Ingrese valor 2: \t ");
		scanf("%d", &num2);
		
		sum = num1 * num2;
		
		printf("El resultado es: %d", sum);	
		getch();
		system("cls");
			
		
		break;
		
		case 4:
			
		printf("Ingrese valor 1: \t ");
		scanf("%d", &num1);
		
		printf("Ingrese valor 2: \t ");
		scanf("%d", &num2);
		
		sum = num1 / num2;
		
		printf("El resultado es: %d", sum);	
		getch();
		system("cls");
		
		break;	
			
			
		}
		
		
		
	}while(op!=5);
	
	
	printf("Valor fuera de rango");
	
	
	
	return 0;
}
