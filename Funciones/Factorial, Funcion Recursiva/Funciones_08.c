#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//factorial con recursividad

long fact(int num);

int main(){
	
	int num;
	
	printf("Digite un numero: "); scanf("%i",&num);
	printf("El factorial es: %i", fact(num));
	
	return 0;
	
}


/*

4! 4*3*2*1


*/

long fact(int num){
	
	if(num<=1){
		return 1;
		
	}else{
		
		return (num*fact(num-1));
		
	}
	
	
}
