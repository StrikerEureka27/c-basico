#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void CopiaArray(int a[], int b[], int t);

int main(){
	
	int e,array2[5], array1[5]={1,7,3,4,5};
	
	for(e=0;e<5;e++){
		
		printf("%i \t ",array1[e]);
		
	}
	
	printf("\n \n");
	
	printf("Copiando Arrays... \n");
	CopiaArray(array2,array1,5);
	
	
	getch();
	return 0;
}

void CopiaArray(int a[], int b[], int t){
	
	int i;
	
	for(i=0;i<t;i++){
		
		a[i] = b[i];
		
	}
	
	for(i=0;i<t;i++){
		
		printf("%i \t",b[i]);
		
	}
	
	
	
}

