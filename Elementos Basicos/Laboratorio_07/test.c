#include <stdio.h>

int main(){
	
		int op;
	int cuenta=4500, cajero=2000,dep,ret;
	char resp;

	
	do{
		printf("\t **Cajero automatico** \n");
		printf("1. \t Manejo de cuenta \n");
		printf("2. \t Deposito \n");
		printf("3. \t Retiro \n");
		
		
		printf("Ingrese una opcion: ");
		scanf("%i",&op);
		system("cls");
		
		switch(op){
			
			case 1:
				
				printf("El saldo de su cuenta es: %i \n",cuenta);
				system("pause");
				system("cls");
				
				break;
				
				case 2:
					
					printf("Ingrese el monto que desea depositar: "); 
					fflush(stdin);
					scanf("%i",&dep);
					
					//calculo
					//cuenta = cuenta + dep;
					cuenta += dep;
					
					printf("Monto depositado con exito \n");
					system("pause");
					system("cls");
					
					break;
					
					case 3:
						
						printf("Ingrese el monto que desea retirar: ");
						fflush(stdin);
						scanf("i%",&ret);
						
						if(ret<cajero){
							
							cuenta -= ret;
							printf("Monto retirado con exito \n");
						    system("pause");
						    system("cls");
							
						}else{
							
							printf("Sin fondos \n");
							printf("Transaccion NO realizada. \n ");
							system("pause");
						    system("cls");
							
							
						}
						
					
						break;
						
						default:
							
							printf("Opcion fuera de rango...\n");
							system("pause");
							system("cls");
							
							break;
			
			
			
		}
		
	printf("Desea ingresar otra opcion? (s/n)");
	fflush(stdin);
	scanf("%c",&resp);
	system("cls");
		
	}while(resp!='n');
	
	
	
	
	
	return 0;
	
}
