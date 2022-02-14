#include <stdio.h>
#include <conio.h>

//prototipos 
int Suma();


int main(){
	
	int a, b,suma=0;
	
	printf("Digite dos numeros: \n ");
	scanf("\n %i \n %i, ",&a, &b);
	

	
	printf("El resultado de las suma es: %i ",Suma(a,b));
	
	return 0;
}


int Suma (int n1, int n2){
	
	int suma=0;
	suma = n1 + n2;
	
}
