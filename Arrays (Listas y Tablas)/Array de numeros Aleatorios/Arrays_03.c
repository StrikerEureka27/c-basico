#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main(){
	
	int e,i,alt[100],par[100],impar[100];
	
	srand(time(NULL));
	
	for(i=1;i<101;i++){	
    	alt[i] = 1 + rand() % ((1000+1)-1);
    }
    
    for(i=1;i<101;i++){
    if(alt[i]%2==0){
    	
 	    //printf("%i: par \n",i);		
		par[i] = alt[i];
		
	}else{
		//printf("%i: 0 \n",i);
		par[i] = 0;
	}
}

for(i=1;i<101;i++){
    if(alt[i]%2!=0){
    	
 	    //printf("%i: par \n",i);		
		impar[i] = alt[i];
		
	}else{
		//printf("%i: 0 \n",i);
		impar[i] = 0;
	}
}




    printf("\n \n");
    
    for(i=1;i<101;i++){
    printf("%i : %i \t P: %i \t \t \t I: %i \n",i,alt[i],par[i],impar[i]);
   }
    
	getch();
	return 0;
}





