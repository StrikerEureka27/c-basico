#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Recursividad serie fibonacci 

int calculo(int n);

int main(){
	
	int num,i;
	
	printf("Ingrese el numero de elementos: \t ");
	scanf("%i",&num);
	
	for(i=0; i<num; i++){
		
		printf("%i \t",calculo(i));
		
	}
	
	
	return 0;
}


 /*
 
 1 1 2 3 5 8 ....
 f(1) = 1
 f(n) = f(n-1) + f(n-2)
 
 
 
 */

int calculo(int n){
	
	if(n==1 || n==0){	
		return 1;
	}else{
		
		return calculo(n-1) + calculo(n-2);	
	}
}
