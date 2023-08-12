/*
Ejercicio 8: 

Escribe un programa que lea de la entrada estándar dos números y muestre en la salida
estándar su suma, resta, multiplicación y división.
*/

#include<stdio.h>

int main(){
	
	float num1, num2, s, r, m, d;
	

	printf("Primer numero: ");
	scanf("%f", &num1);
	
	printf("Segundo numero: ");
	scanf("%f", &num2);
	
	s = num1 + num2;
	r = num1 - num2;
	m = num1 * num2;
	d = num1 / num2;
	
	printf("\nSUMA: %.2f", s);
	printf("\nSUMA: %.f", r);
	printf("\nSUMA: %.2f", m);
	printf("\nSUMA: %.2f", d);
	
	
	return 0;
}
