#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

/*
Menu de Operaciones Artimeticas:
 + , - , * , /

*/

void tabla();
void cubo();

int main() {
	
	
	int op;
	int val1, val2, tot,operador,i,e,res,cuad,num;
	
	do{
	
	
	printf(" Menu \n ");
	printf("1. Calculadora \n ");
	printf("2. Tablas de Multiplicar \n ");
	printf("3. Calcular el cubo de un numero \n");
    printf("4. Salir \n");

	printf("Seleccione una opcion:  ");
	fflush(stdin);
    scanf("%d", &op);
    
   
	
	switch(op){
		
		case 1:
		     
		    system("cls"); 
		    printf("Calculadora: \n");
			printf("1. Suma \n");
			printf("2. Resta \n");
			printf("3. Multiplicacion \n");
			printf("4. Division \n");
			 
			 printf("Selecciones una operacion: ");
			 scanf("%d",&operador);
			 
			 
			 if(operador==1){
			 
			 
			tot = calculadora();
			printf(" ");
			printf("El resultado es: %d \n", tot);
		
			system("pause");
			system("cls");
			
		}else if(operador==2){
			
			tot = resta();
			printf("El resultado es: %d \n", tot);
			printf(" ");
			system("pause");
			system("cls");
			
			
		}else if(operador==3){
			
			tot = multiplicacion();
			printf("El resultado es: %d \n", tot);
		
			system("pause");
			system("cls");
			

		}else{
			
			tot = division();
			printf("El resultado es: %d \n", tot);
		
			system("pause");
			system("cls");
			
			
			
		}

			
			case 2:
				
			   tabla();
	
				
				break;
				
				
				case 3:
					
					cubo();
					
				break;	
			
			
				
				

	}
	
	
	
	
  }while(op!=4);

}


int calculadora(int val1, int val2, int tot){
	
		printf("Ingrese valor #1: ");
			scanf("%d", &val1);
			
			printf("Ingrese valor #2: ");
			scanf("%d",&val2);
			
			tot = val1 + val2;	
			
	   return tot;
}

int suma(int val1, int val2, int tot){
	
		printf("Ingrese valor #1: ");
			scanf("%d", &val1);
			
			printf("Ingrese valor #2: ");
			scanf("%d",&val2);
			
			tot = val1 + val2;	
			
	   return tot;
}

int resta(int val1, int val2, int tot){
	
		printf("Ingrese valor #1: ");
			scanf("%d", &val1);
			
			printf("Ingrese valor #2: ");
			scanf("%d",&val2);
			
			tot = val1 - val2;	
			
	   return tot;
}

int multiplicacion(int val1, int val2, int tot){
	
		printf("Ingrese valor #1: ");
			scanf("%d", &val1);
			
			printf("Ingrese valor #2: ");
			scanf("%d",&val2);
			
			tot = val1 * val2;	
			
	   return tot;
}


int division(int val1, int val2, int tot){
	
		printf("Ingrese valor #1: ");
			scanf("%d", &val1);
			
			printf("Ingrese valor #2: ");
			scanf("%d",&val2);
			
			tot = val1 / val2;	
			
	   return tot;
}



void tabla(i,e,res){

	printf("Ingrese el # que desea: ");
	fflush(stdin);
	scanf("%d",&e);
			
			system("cls");	
			for (i=1; i<11; i++){
				
				
				res = e * i;
				
			    printf(" %d  *  %d  =  %d   \n",e,i,res);

			}
			
			
			system("pause");
			system("cls");



}


void cubo(int cuad, int num){
	
	    system("cls");
		printf("Ingrese el numero que desea calcular: ");
		fflush(stdin);
	    scanf("%d ", &num);
	                
		cuad = pow(num,2); 
					
		printf("El cubo de %d es %d: ",num,cuad);
					
		system("pause");
		system("cls");
					
		
				
	
	
	
	
}







