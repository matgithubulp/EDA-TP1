#include<stdio.h>

/*

Ejercicio 7: 
La calificaci�n final de un estudiante es la media ponderada de tres notas: la nota de
pr�cticas que cuenta un 30% del total, la nota te�rica que cuenta un 60% y la nota de participaci�n
que cuenta el 10% restante. Escriba un programa que lea de la entrada est�ndar las tres notas de
un alumno y escriba en la salida est�ndar su nota final.

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
