/*
Ejercicio 5: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media
de los cuatro alumnos
*/

#include<stdio.h>

int main(){
	
	float num1 = 0, num2 = 0, num3 = 0, num4 = 0, mediaFinal = 0;
	
	
	printf("Nota 1: "); 
	scanf("%f", &num1);
	
	printf("Nota 2: "); 
	scanf("%f", &num2);
	
	printf("Nota 3: "); 
	scanf("%f", &num3);
	
	printf("Nota 4: "); 
	scanf("%f", &num4);
	
	mediaFinal = (num1 + num2 + num3 + num4) / 4;
	
	printf("\n\nLa media final de los alumnos es de: %0.2f\n\n", mediaFinal);
	
	
	return 0;
}
