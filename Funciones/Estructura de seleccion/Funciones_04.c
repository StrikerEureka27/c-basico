#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void conteo();

int num;

int main(){

	printf("Ingresa un # del 1-10 \t");
	scanf("%i",&num);
	conteo();
}


void conteo(){
	
    switch(num){
    	
    	case 1: printf("UNO"); 
    		break;
    		
    	case 2: printf("DOS"); 
		    break;
			
		case 3: printf("TRES"); 
		    break;
			
		case 4: printf("CUARTO"); 
		    break;			
    	
    	case 5: printf("CINCO"); 
    		break;
    	
		case 6: printf("SEIS"); 
		    break;	
		    
		case 7: printf("SIETE"); 
		    break;    
    	
    	case 8: printf("OCHO"); 
    	    break;
    	    
    	case 9: printf("NUEVE"); 
		    break;
			
		case 10: printf("DIEZ"); 
		    break;	    
    	
	    }
	
	}
	

