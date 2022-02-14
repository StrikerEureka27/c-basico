#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float CelsiusFahrenheit(float c);
float CelsiusKelvin(float c);

int main(){
	int op;
	float gc;
	
	printf("Ingrese la temperatura en grados Celsius: \t");
	scanf("%f",&gc);
	
	do{
		
		system("cls");
		printf("Menu \n");
		printf("1. Celsius ---> Fahrenheit \n");
		printf("2. Celsius ---> Kelvin \n");
		printf("3. Salir \n");
		scanf("%i", &op);
		
		
	switch(op){
		
		case 1: system("cls"); printf("El resultado es %f: ", CelsiusFahrenheit(gc)); system("pause"); break;
		case 2: system("cls"); printf("El resultado es %f:", CelsiusKelvin(gc)); system("pause"); break;
	}
		
	}while(op!=3);
	

	
}


float CelsiusFahrenheit(float c){
	
	float f;
	
	f = (9*c)/5 +32;
	return f;
	
}

float CelsiusKelvin(float c){
	
	float k;
	
	k = c + 273.15;
	
	return k;
	
}


