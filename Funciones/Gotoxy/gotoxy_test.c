#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void dib_cuadro();

int main(){
	
	dib_cuadro(30,10);
	
	
	return 0;
}


void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


void dib_cuadro(int base ,int altura){
	
	int i,j;

	for(i=0;i<altura;i++){
		for(j=0;j<base;j++){
			if(i!=0 || i!=altura){
				if(i==0 || j==0 || j==base-1 || i==altura-1){
				printf("*");
				}else{
					printf(" ");
				}
			}
			
				
		}
		printf("\n");		
	}
	
}
