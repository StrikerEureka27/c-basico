#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	
	int vector[10];
    int num,i;
    int *p_num;
    
	
	for(i=0;i<10;i++){
		printf("%i. Ingrese un numero: ",i+1);
		scanf("%i",&vector[i]);
	}
	
	printf("\n \n");
	
    for(i=0;i<10;i++){
    	p_num = &vector[i];
    	if(*p_num%2==0){
    		printf("Numero %i es par en pos: %p \n",*p_num,p_num);
		}else{
			printf("Numero %i es impar en pos \n",*p_num,p_num);
		}
	}
	
	
	return 0;
}
