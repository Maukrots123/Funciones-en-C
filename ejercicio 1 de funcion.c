#include <stdio.h>
void pantalla(){
	printf("       \n");
	printf("       \n");
}

int myFunction(int nu1, int nu2){
  
  	return(nu1+nu2);
  }
  
int main(){
	
int acumulacion, n1,n2;

    pantalla ();
	printf("+++++++++++++++++ Programa para determinar la suma de dos numeros ++++++++++++++ \n");
    pantalla ();
	printf("       Ingrese el Primer Numero: ");
	scanf("%i",&n1);
	pantalla ();
	printf("       Ingrese el segundo Numero: ");
	scanf("%i",&n2);
    pantalla ();	              
    printf("       La Suma Total:%d",myFunction(n1,n2));
    
    return 0;
	}
		
	

