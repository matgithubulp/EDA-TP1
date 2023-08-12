#include<stdio.h>
#include<maht.h>

/*
Ejercicio 13: 
Escriba un programa que calcule las soluciones de una ecuación de segundo grado de
la forma ax^2 + bx + c = 0

*/
int main(){
	
	double a, b, c, x1, x2;
	
	printf("Ingrese el valor de X: ");
	scanf("%lf", &a);
	
	printf("\nIngrese el valor de Y: ");
	scanf("%lf", &b);
	
	printf("\nIngrese el valor de Y: ");
	scanf("%lf", &c);
	
	
	x1 = (-b+(sqrt( (b*b) - (4*a*c)))/2*a;
	x1 = (-b-(sqrt( (b*b) - (4*a*c)))/2*a;
	
	printf("\nEl resultado es: %.2lf y %0.2lf ", x1, x2);
	
	
	
	
	return 0;
}
