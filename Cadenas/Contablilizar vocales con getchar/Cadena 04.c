#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int c,cont=0;
	
	while(EOF!=(c=getchar())){
		switch(c){
			case 'a': cont++; break;
			case 'e': cont++; break;
			case 'i': cont++; break;
			case 'o': cont++; break;
			case 'u': cont++; break; 
		}
	}
	
	printf("# Vocales: %i",cont);
	
	
	return 0;
}
