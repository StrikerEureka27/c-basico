//Arrays bidimensinales (Matrices)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*
//Matriz de enteros 
int main(){
	
	//int matrix[2][3] = {51,52,53,54,55,55};
	int matrix[2][3] = {{51,52,53},{54,55,56}};
	int fil,col;
	
	for(fil=0;fil<2;fil++){
		for(col=0;col<3;col++){
			
			printf("%i \t",matrix[fil][col]);
		}
		printf("\n");
	}
	
	return 0;
}
*/

/*
//Matrices de flotantes
int main(){
	
	int fil, col,i,j;
	float matrix[2][3];
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			
			printf("fil: %i col: %i \t --> ",i+1,j+1);
			scanf("%f",&matrix[i][j]);
			
		}
		
		printf("\n");
	}
	
     	
  		for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\t %.2f",matrix[i][j]);
		}
		printf(" \n ");
	}
	
	
	
	return 0;
}
*/


//Matrices de caracteres
int main(){
	
	int i,j;
	char matrix[2][3];
	
	for(i=0;i<2;i++){
		
		for(j=0;j<3;j++){
			printf("fil: %i col: %i \t --> ",i+1,j+1); 
			fflush(stdin);
			scanf("%c",&matrix[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf(" %c \t",matrix[i][j]);
		}
		printf(" \n ");
	}
	
	return 0;
}




