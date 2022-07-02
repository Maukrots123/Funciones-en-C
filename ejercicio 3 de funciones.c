#include<stdio.h>
#include<string.h>
int main(){

    char argumento1[20];
    char argumento2[20];
    
	printf("\nIngrese una primera palabra: ");	
	scanf("%s",argumento1);
	printf("\nIngrese una segunda palabra: ");
	scanf("%s",argumento2);
	
	int longitud1=strlen(argumento1);
	int longitud2=strlen(argumento2);
	
	if(longitud1 + longitud2 < 19 ){
			
		strcat(argumento1," ");
	    strcat(argumento1,argumento2);
       	printf("\n Las palabras concatenadas son: %s",argumento1);
	}
	else{
		printf("No se pudo concatenar");
	}

    strrev(argumento1);
    printf("\n\n La frase  volteada es:");
    puts(argumento1);

    getch();
    return 0;
}
