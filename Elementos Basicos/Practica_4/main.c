#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	
	int op;
	
	printf("(1). Mercurio \n");
	printf("(2). Venus \n");
	printf("(3). Tierra \n");
	printf("(4). Marte \n");
	printf("(5). Jupiter \n");
	printf("(6). Saturno \n");
	printf("(7). Urano \n");
	printf("(8). Neptuno \n");
	printf("(9). Pluton \n");
	printf("Selecione un plantea: \t");
	scanf("%d", &op);
	
	
	switch(op){
		
		case 1:
			
			system("Cls");
			printf(" \n Mercurio se encuenta a 59M de años luz del sol \n");
			
			break;
			
		case 2:
			
			system("Cls");
			printf(" \n Venus se encuenta a 108M de años luz del sol \n");
			
			break;
			
		case 3:
			
				system("Cls");
			printf(" \n Tierra se encuenta a 150M de años luz del sol \n");
			
			break;			
		
		case 4:
			
				system("Cls");
			printf(" \n Marte se encuenta a 228M de años luz del sol \n");
			
			break;
			
		case 5:
			
				system("Cls");
			printf(" \n Jupiter se encuenta a 750M de años luz del sol \n");
			
			break;
			
		case 6:
			
				system("Cls");
			printf(" \n Saturno se encuenta a 1431M de años luz del sol \n");
			
			break;
			
		case 7:
			
				system("Cls");
			printf(" \n Urano se encuenta a 2877M de años luz del sol \n");
			
			break;
			
		case 8:
			
				system("Cls");
			printf(" \n Neptuno se encuenta a 4509M de años luz del sol \n");
			
			break;
			
		case 9:
			
				system("Cls");
			printf(" \n Pluton se encuenta a 5916M de años luz del sol \n");
			
			break;										
		
	    default:
	    	
	    	printf("Ingreso un valor invalido");
	    	
		    break;	
	}
	
	
	
	
	
	
	return 0;
}
