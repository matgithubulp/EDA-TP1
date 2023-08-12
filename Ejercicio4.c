/*
Ejercicio 4: 
Ejecute el programa del ejercicio anterior con entradas erróneas y observe los
resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato de tipo
entero


*/


#include<stdio.h>

int main (){
	
	
	int edad; char sexo; float altura;
	
	printf("Ingrese su edad: "); 
	scanf("%i", &edad);
	
	printf("Ingrese su sexo: M / F:  "); 
	scanf(" %c", &sexo);//agregar un entero
	
	printf("Ingrese su Altura: "); 
	scanf("%f", &altura);
	
	printf("Los datos ingresados son:\n edad: %i \n sexo: %c \n altura: %f", edad , sexo, altura);
	
	
	return 0;
}
