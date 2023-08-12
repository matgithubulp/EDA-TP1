/*
Ejercicio 3: 

Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
Edad: dato de tipo entero. 
Sexo: dato de tipo carácter. 
Altura en metros: dato de tipo real. 

Tras
leer los datos, el programa debe mostrarlos en la salida estándar.


*/

#include<stdio.h>

int main(){
	
	int edad; char sexo; float altura;
	
	printf("Ingrese su edad: "); 
	scanf("%i", &edad);
	
	printf("Ingrese su sexo: M / F:  "); 
	scanf(" %c", &sexo);
	
	printf("Ingrese su Altura: "); 
	scanf("%f", &altura);
	
	printf("Los datos ingresados son:\n edad: %i \n sexo: %c \n altura: %f", edad , sexo, altura);
	
	
	return 0;
}
