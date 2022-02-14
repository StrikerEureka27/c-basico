/* Repositorio de Lenguaje C */

/*<---------Imprimir y mostrar un entero, cadena, decimal.------------------------------------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>


int main(){

	char nombre[30];
	
	printf("Ingrese su nombre: \t");
	scanf("%s",nombre); 
	/* Se puede capturar una cadena con Scanf pero no es recomendable 
	ya que solo va a escanear hasta el primer espacio que encuentre */	

	printf("Ingrese su nombre: \t");
	gets(nombre);
    /*gets sirve para leer cadenas de caracteres exclusivamente*/




	return 0;
}


/*<--------Estructura de selección con Switch--------------------------------------------------------------------------*/

int main(){
	
	int m;
	
	printf("Ingrese un numero (1/12): "); scanf("%i",&m);
	
	switch(m){
		
		case 1: printf("Enero"); break;
		case 2: printf("Febrero"); break;
		case 3: printf("Marzo"); break;
	}
	
	return 0;
}

/*<---------Estructura de Menu con Switch.-----------------------------------------------------------------------------*/

int main(){
	
    int op;

	do{ /*Hacer esto hasta que resp sea diferente de 'n' */
		printf("\t *Menu* \n");
		printf("1. \t A \n");
		printf("2. \t B \n");
		printf("3. \t C \n");
		
		printf("Ingrese una opcion: "); scanf("%i",&op);
		system("cls"); /*Limpiar pantalla*/
		system("pause"): /*Presionar una tecla para continuar*/

		switch(op){
			
			case 1: printf("A"); break;
			case 2: printf("B"); break;
			case 3: printf("C"); break;	

			default: printf("Opcion fuera de rango...\n"); break;
		}
		
	printf("Desea ingresar otra opcion? (s/n)");
	fflush(stdin); /*Para liberar el buffer */
	scanf("%c",&resp);
	system("cls");
		
	}while(resp!='n');
	
	return 0;
}

/*<----------Condicional para # par e inpar.-------------------------------------------------------------------------->*/

int int main(){
		
	int num;

	printf("Ingrese un numero: \t"); scanf("%i",&num);

	if((num%2)==0){
     	printf("Par");
     }else{
     	printf("Inpar");
     }
	return 0;
}

/*<---------Suma de dos numeros con funciones------------------------------------------------------------------------->*/

int Suma();
/* Protipos */

int main(){
	
	int a, b,suma=0;
	
	printf("Digite dos numeros: \n ");
	scanf("\n %i \n %i, ",&a, &b); /* Perdir dos numeros */
	
	printf("El resultado de las suma es: %i ",Suma(a,b));
	
	return 0;
}

/* Paso de atributos a las funciones */
int Suma (int n1, int n2){
	int suma=0;
	suma = n1 + n2;
}

/*<---------Funcion Aleatoria.---------------------------------------------------------------------------------------->*/

void funcion_aleatoria(){
	
	int num, i,infe,super;
	
	srand(time(NULL)); /* Prototipo */
	
	printf("Digite el limite inferior: "); scanf("%i",&infe);
	printf("Digite el limite superior: "); scanf("%i",&super);
	
	for(i=0;i<10;i++){
		
		num = 1 + rand() % ((super+1) -infe);
		printf("%i \n",num);
	
    }
}

/*<---------Factorial, función recursiva.------------------------------------------------------------------------------>*/

long fact(int num){  /* 4! 4*3*2*1 */
	
	if(num<=1){
		return 1;
	}else{
		return (num*fact(num-1));
	}
}


/*<---------Función Serie Fibonacci------------------------------------------------------------------------------------>*/


int calculo(int n){  /* 1 1 2 3 5 8 .... f(1) = 1.... f(n) = f(n-1) + f(n-2) */
	if(n==1 || n==0){	
		return 1;
	}else{
		return calculo(n-1) + calculo(n-2);	
	}
}

/*<---------Array de numeros aleatorios, separados por pae e inpar----------------------------------------------------->*/

int main(){
	
	int e,i,alt[100],par[100],impar[100];
	srand(time(NULL));
	
	for(i=1;i<101;i++){	
    	alt[i] = 1 + rand() % ((1000+1)-1);
    }
    
    for(i=1;i<101;i++){
    	if(alt[i]%2==0){
			par[i] = alt[i];  	    //printf("%i: par \n",i);		
		}else{
		//printf("%i: 0 \n",i);
			par[i] = 0;
	}
}
	for(i=1;i<101;i++){
    	if(alt[i]%2!=0){  	
			impar[i] = alt[i];  //printf("%i: par \n",i);
	}else{
		impar[i] = 0; //printf("%i: 0 \n",i);
	}
}
    for(i=1;i<101;i++){
    	printf("%i : %i \t P: %i \t \t \t I: %i \n",i,alt[i],par[i],impar[i]);
   }
	getch();
	return 0;
}

/*<---------Crear y mostrar una matriz.------------------------------------------------------------------------------->*/

int fil,col;

void Crear(int matrix[][col]);
void Mostar(int matrix[][col]);

int main(){
	
int matrix[fil][col];	
	
	printf("\t Creacion de matriz... \n");
	printf("\t Ingrese # filas: \t"); scanf("%i",&fil);
	printf("\t Ingrese # columnas: \t"); scanf("%i",&col);
	printf(" \n \n ");
	
	Crear(matrix);
	printf("\t Pulse una tecla para mostrar la matriz ingresada... \n");
	getch();
	printf("\n");
	Mostrar(matrix);
	
	return 0;
}


void Crear(int matrix[][col]){
	
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf(" \t fil: %i col: %i \t --> ",i+1,j+1); 
			fflush(stdin);
			scanf("%i",&matrix[i][j]);
		}
		printf(" \n ");
	}
}

void Mostrar(int matrix[][col]){
	
	int i,j;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %i",matrix[i][j]);
		}
		printf(" \n ");
	}
}


/*<---------Copiar una matriz.----------------------------------------------------------------------------------------->*/

void Copiar(int matrix[][col]){

int i,j;	
int copia[fil][col];

for(i=0;i<fil;i++){
	for(j=0;j<col;j++){
		copia[i][j]=matrix[i][j];
	}
}
printf("Matriz copia: \n");
printf(" \n ");
Mostrar(copia);

}


/*<----------Suma de dos matrizes.------------------------------------------------------------------------------------>*/

	printf("\n\n");
	printf("Matriz resultante: \n");
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			suma[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	
	MostrarSuma(suma);


/*<---------Metodo de Burbuja----------------------------------------------------------------------------------------->*/

int main(){
	/* NumeroAterior > NumeroSiguiente = Cambio  */
	int array[5]={4,3,2,1,5};
	int i,j,aux;
       for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(array[j]>array[j+1]){
				    aux = array[j]; 
				    array[j] = array[j+1];
				    array[j+1] = aux;
		  }
	   }
   }
	  for(i=4;i>=0;i--){
	  	printf("%i", array[i]);
	  }
	return 0;
}	

/*<---------Metodo de Ordenamiento por inserción----------------------------------------------------------------------->*/

int main(){
	/* NumeroIzquierdo > NumeroActual = Cambio  */
	int array[5]={4,3,2,1,5};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(array[j-1]>array[j]){
				aux = array[j-1];
				array[j-1] = array[j];
				array[j] = aux;
				
			}
		}
	}
	for(i=4;i>=0;i--){
		printf("%i",array[i]);
	}
	
	return 0;
}

/*<---------Metodo de Ordenamiento por Seleccion.---------------------------------------------------------------------->*/

int main(){
	
	int i,j,aux,min;
	int array[5];
	
	for(i=0;i<5;i++){
		printf("Ingrese [%i] pos: ",i+1); scanf("%i",&array[i]);
	}
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
			if(array[j]<array[min]){
				min = j;
			}
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;		
		}
	}
	for(i=0;i<5;i++){
		printf("%i",array[i]);
	}
	
	return 0;
}


/*<---------Busqueda Secuencial------------------------------------------------------------------------------------------>*/

void BusquedaSecuencial(int info, int arreglo[]);

int main(){
	
	int arreglo[10];
	int i,dato;
	
	for(i=0;i<10;i++){
		printf("Digite posicion [%i]: \t",i+1); scanf("%i",&arreglo[i]);
	}
	
	printf("\n\n");
	printf("Ingrese un # de la lista: \t");
	scanf("%i",&dato);
	printf("\n\n");
	fflush(stdin);
	BusquedaSecuencial(dato,arreglo);

	return 0;
}

void BusquedaSecuencial(int info, int arreglo2[]){
	
	int i, j;
	char band = 'F';
	
	i=0;
	while((band=='F')&&(i<10)){
		if(arreglo2[i]==info){
			band=='V';
			printf("El dato %i se encuentra en la lista, en la pos: %i",info,i+1);
		}
		i++;
	}
}

/*<---------Arreglo de Estructuras------------------------------------------------------------------------------------>*/

struct persona{
	
	char nombre[20];
	int edad;
	
}personas[5];

int main(){
	
	int i;
	
	for(i=0;i<5;i++){
		
		printf(" %i Digite el nombre:  ",i+1);
		fflush(stdin);
		gets(personas[i].nombre);
		printf(" %i Digite la edad: ",i+1);
		scanf("%i",&personas[i].edad);
		
	}
	
	printf(" \n \n ");
	
	for(i=0;i<5;i++){
		printf("%i Intregrante: %s Edad: %i \n",i+1,personas[i].nombre,personas[i].edad);
	}

	return 0;
}

/*<---------Calculo de promedio con Estructuras------------------------------------------------------------------------>*/

void CalcularPromedio(){
	
	int i,j;
	float max,min;
	
	max = estudiante[0].promedio;
	
    for(i=0;i<numEstu;i++){
    	if(estudiante[i].promedio>max){
    		max = estudiante[i].promedio;
		}else{
		
		}
	}
	printf("El promedio mayor es: %f",max);
	 
}


/*<---------Estructuras Anidadas---------------------------------------------------------------------------------------->*/

struct promedio{
	
	int mate;
	int ciencia;
	int social;
	int ingles;
};

struct alumno{
	
	char nombre[30];
	char sexo[30];
	int  edad;
	struct promedio nota;
	float promedio;
	
}alumnos[100];


/*<---------Declaracion y coneptos basicos de punteros------------------------------------------------------------------>*/

int main(){
	
	int num = 50;
	int *p_num;
	
	p_num = &num; // Posicion de memoria de la variable num;

	/*
	printf("%i \n",num);
	printf("%p",&num); //Imprimir la posicion en memoria. 	
	*/
	
	printf("Valor de la variable: \n");
	printf("Dato: %i \n",num);
	printf("Dato: %i",*p_num); //El aterisco se usa cuando queremos referirnos al valor que esta en esa dire de memoria. 
	printf("\n\n");
	printf("Posicion de memoria: \n");
	printf("Dato: %p \n",&num);
	printf("Dato: %p",p_num);

	return 0;
}

/*<----------Imprimir el Alfabeto con punteros------------------------------------------------------------------------->*/

int main(){
	
	char letra;
	char *p_letra;
	p_letra = &letra;
	
	for(letra='A';letra<='Z';letra++){
		printf("%c",*p_letra);
	}

	return 0;
}

/*<---------Asignacion dinamica de memoria Malloc---------------------------------------------------------------------->*/

int main(){
	
	char nombre[30],*p_nombre,longitud; 
	
	strcpy(nombre,"Pablo");
	longitud = strlen(nombre);
	p_nombre = malloc((longitud+1)*sizeof(char));
	strcpy(p_nombre,nombre);
	
	printf("Nombre %s",p_nombre);
	
	return 0;
}


/*<--------Puntero Array------------------------------------------------------------------------------------------------>*/

#define TOPE 1000

int main(){
	
	double *p_array;
	int i;
	
	p_array = malloc(TOPE * sizeof(double)); /*Al asignar una cantidad de memorria especifica con un puntero no es 
	                                          necesario declarar el Array de forma habitual */
	if(p_array==NULL){
		printf("Error en la asignacion de memoria. ");
		return -1; //recuperando memoria 
	}else{
		srand(time(NULL));
		for(i=0;i<TOPE;i++){
			p_array[i] = 1 + rand() % ((TOPE+1)-1); 
			printf("%lf \n",p_array[i]);
		}
	}
	free(p_array); /*Liberar la memoria, buena practia?*/
	return 0;
}

/*<---------Cambiar el tamaño de un Array con realloc------------------------------------------------------------------->*/

int main(){
	int *vector,i,*vector_convertido;
	
	vector = malloc(3*sizeof(int));
	vector[0] = 1;
	vector[1] = 2;
	vector[2] = 3;
	
	for(i=0;i<3;i++){
		printf("%i",vector[i]);
	}
	
	printf("\n\n");
	vector_convertido = realloc(vector,5*sizeof(int)); //apliando el arreglo a 5 elementos. 
	
	vector[3]=4;
	vector[4]=5;
	
    	for(i=0;i<5;i++){
		printf("%i",vector[i]);
	}	
	
	return 0;
}

/*<---------Asignación dinamica de memoria con Calloc------------------------------------------------------------------->*/
int main(){
	
	int *p1;
	int i;
	
	p1 = calloc(5,sizeof(int));
	
	for(i=0;i<5;i++){
		printf("Digite un numero:\t");
		scanf("%i",&p1[i]);
	}
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		printf("%i",p1[i]);
	}
	
	
	
	return 0;
}


/*<---------Funcion getchar() para leer caracteres--------------------------------------------------------------------->*/

int main(){
	
	int c;
	
	while(EOF!=(c=getchar())){
		putchar(c);
	}

	return 0;
}

/*<---------Contabilizar vocales con getchar()-------------------------------------------------------------------------->*/

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

/*<--------Ordenar de manera Alfabetica con strcmp --------------------------------------------------------------------->*/

int main(){
	
	char p1[30],p2[30];
	
	
	printf("Ingrese palabra 1:\t");
	gets(p1);
	printf("\n");
	printf("Ingrese palabra 2:\t");
	gets(p2);
	
	printf("\n");
	
    if((strcmp(p1,p2))>0){  /* p1>p2 */
    	printf("%s %s",p2,p1);
	}else{
		printf("%s %s",p1,p2);
	}
	
	return 0;
}




