/*
Ejercicio 10: 

Realice un programa que pida valores enteros para hora, otra para minutos, y otra para
segundos, como resultado lo transforma y muestra el total a cantidad de segundos.

*/

#include<stdio.h>

int main(){
	
	int hora, minutos, segundos, cantidadSegundos;
	
	printf("Ingrese hora: ");
	scanf("%i", &hora);
	
	printf("\nIngrese minutos: ");
	scanf("%i", &minutos);
	
	printf("\nIngrese Segundos: ");
	scanf("%i", &segundos);
	
	cantidadSegundos = (hora * 3600) + (minutos * 60) + segundos;
	
	printf("Segundos totales: %i", cantidadSegundos);
	
	return 0;
}
