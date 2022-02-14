#include <stdio.h>
#include <stdlib.h>


int conteo(int n);

int main(){
	
	int num,i;
	
	printf("Ingrese un numero: \t"); scanf("%i",&num);
	
	for(i=0;i<num;i++){
		
		printf("%i \t",conteo(i));
		
	}
	
	return 0;
}



int conteo(int n){
	
	if(n==1){
		
		return 1;
		 
	}else{
		
		return conteo(n-1);
		
	}
	
}
