#include<stdio.h>

/*

Ejercicio 7: 
La calificación final de un estudiante es la media ponderada de tres notas: la nota de
prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación
que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de
un alumno y escriba en la salida estándar su nota final.

*/

int main(){
	
	float notaPractica, notaTeorica, notaParticipacion, notaFinal;
	
	printf("Nota practica: "); 
	scanf("%f", &notaPractica);
	
	printf("\nNota teorica: ");
	scanf("%f", &notaTeorica);
	
	printf("\nNota teorica: ");
	scanf("%f", &notaParticipacion);
	
	notaFinal = (0.30 * notaPractica) + (0.60 * notaTeorica) + (0.10 * notaParticipacion);
	
	
	printf("\nLa nota final es: %.2f ", notaFinal);
	
	
	
	return 0;
}
