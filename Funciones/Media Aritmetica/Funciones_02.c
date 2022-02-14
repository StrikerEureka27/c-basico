#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

//Determinar si un numero es par o no. 


/*
int Comprobar(int num);

int main(){
	
	int num,x;
	
	printf("Digite un numero: "); scanf("%i",&num);
	
	x = Comprobar(num);
	
	if(x==0){
		
		printf("El numero es par");
	}else{
		
		printf("El numero es impar");
	}
	
	return 0;
}

int Comprobar(int num){
	
	if(num%2==0){
		
		return 0;
		
	}else{
		
		return 1;
		
	}
	
	
}

*/

//Con retorno de valores 

/*
void Comprobar(int num);

int main(){
	
	int num,x;
	
	printf("Digite un numero: "); scanf("%i",&num);
	
	Comprobar(num);
	
	
	return 0;
}

void Comprobar(int num){
	
	if(num%2==0){
		
		printf("El numero es par");
		
	}else{
		
		printf("El numero es impar");
		
	}
	
	
}

*/

float Media(int x, int y);

int main(){
	
	int a, b;
	
	printf("Digite dos numeros: "); scanf("%i %i", &a, &b);
    printf("La media Aritmetica es: %f", Media(a,b));
     	
	
	
}


float Media(int x, int y){
	
	float med=0;
	med = (x+y)/2;
	return med;
}

