#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	
	int resp, nota;
	
	printf("Ingrese nota del alumno: \t ");
	scanf("%d", &resp);
  
         while(resp<0 || resp>10 ){
         
    printf("Ingrese de nuevo la nota del alumno: \t ");
	scanf("%d", &resp);
         
    }
   
			if (resp>=0 && resp<=5){
			
			
			printf("Reprobado");

		}else{
			
			printf("Aprobado");
			
			
		}
		
	
	
	
	
	
	return 0;
}
