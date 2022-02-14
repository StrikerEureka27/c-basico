#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


int main(){
	
	int c,cont_a,cont_e,cont_i,cont_o=0,cont_u;
	
	printf("Digite una palabra: ");
	while(EOF!=(c=getchar())){
		switch(c){
			case 'a': cont_a++; break;
			case 'e': cont_e++; break;
			case 'i': cont_i++; break;
			case 'o': cont_o++; break;
			case 'u': cont_u++; break;
		}
	}
	
	printf("a: %i\n",cont_a);
	printf("e: %i\n",cont_e);
	printf("i: %i\n",cont_i);
	printf("o: %i\n",cont_o);
	printf("u: %i\n",cont_u);
	
	return 0;
}

