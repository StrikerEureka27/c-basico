#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
	
	int vector[10]={2,4,6,3,6,7,2,2,1,};
	int i;
	int *pos_num;
	
	
	for(i=0;i<10;i++){
	pos_num = &vector[i];
	printf("%i. Value: %i \t Pos:%p \n",i+1,*pos_num,pos_num);
	
	}
	
	
	return 0;
}
