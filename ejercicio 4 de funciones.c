#include <stdio.h>
#include <math.h>

void ecuaciones (double a, double b, double c, double *x1, double *x2){
	
	*x1= (-b+(sqrt(b*b-4*a*c)))/2*a;
	*x2= (-b-(sqrt(b*b-4*a*c)))/2*a;	
}

void main(void){
	
	double a,b,c,x1,x2;
	printf("++++++++ Ingresar los datos para resolver la ecuacion de segundo grado ++++++++");
	while(1+1==2){	
	printf("\n\n Introduzca a:");
	scanf("%lf",&a);
	printf("\nIntroduzca b:");
	scanf("%lf",&b);
	printf("\nIntroduzca c:");
	scanf("%lf",&c);	
	ecuaciones(a,b,c,&x1,&x2);
	printf("\n                 Las soluciones son: %lf y %lf \n \n",x1,x2);
	}
	return 0;
}
