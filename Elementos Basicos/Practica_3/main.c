#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int op, estado;
	    
		printf("Ingrese un numero del 1-7: \t");
	    scanf("%d", &op);

		
		switch(op){
			
		
	case 1: 
	    
	    system("Cls");
        printf("Lunes");
			
		
		break;	
		
	case 2: 
	
	    system("Cls");
        printf("Martes");
		
		break;
		
		
	case 3: 
	
	    system("Cls");
        printf("Miercoles");
		
		break;
		
	case 4: 
		
		system("Cls");
        printf("Jueves");
		
		break;
		
	case 5: 
	
	    system("Cls");
        printf("Viernes");
		
		break;
		
	case 6: 
		
		system("Cls");
        printf("Sabado");
		
		
		break;
		
	case 7: 
		
		system("Cls");
        printf("Domingo"); 
		
		break;
			
	default:
		
		system("Cls");
		printf(" * Valor fuera de rango * ");
			
		
	}while(op!=8);
	
	
	
	
	
	return 0;
}
