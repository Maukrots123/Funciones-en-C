#include <stdio.h>

void pantalla(){
	printf("       \n");
}
 float funcion(float ac,float ct){
 	
	 return(ac/ct);
 }
int main(){
	
	int n, i=0;
	int acumulador = 0;
	printf("                      Ingrese la cantidad de numeros: ");
	scanf("%i",&n);	
	pantalla();
	int vector1[n];	
	for(i=0; i < n; i++){
			
		printf("Ingrese el numero:");
		scanf("%i",&vector1[i]);
		pantalla();		
	    acumulador = acumulador + vector1[i];
	}		
	printf("                              La media es de:%lf",funcion(acumulador, n));	
	return 0;	
}
