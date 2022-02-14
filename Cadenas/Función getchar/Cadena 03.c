#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	int c;
	
	while(EOF!=(c=getchar())){
		putchar(c);
	}
	
	return 0;
}
