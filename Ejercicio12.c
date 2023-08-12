#include<stdio.h>

#include<math.h>//libreria necesaria para las funciones matematicas.

int main(){
	
	double x, y, funcion;
	
	printf("Ingrese el valor de X: ");
	scanf("%lf", &x);
	
	printf("\nIngrese el valor de Y: ");
	scanf("%lf", &y);
	
	funcion = ( sqrt(x) / (pow(y, 2) - 1));

	
	
	printf("\nEl resultado es: %lf ", funcion);
	
	
	
	
	
	
	return 0;
}
