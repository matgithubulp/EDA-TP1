/*
Ejercicio 2:

 Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA.

*/

#include<stdio.h>

int main (){
	
	float entrada, calculo;
	
	
	printf("Ingrese el precio del producto\n"); scanf("%f", &entrada);
	
	calculo = (entrada * 1.21);
	
	printf("El precio del producto sin iva: %.f\n", entrada);
	printf("El precio del producto con iva: %.f ", calculo);
	
	
	
	return 0;
}
