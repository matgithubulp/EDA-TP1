/*
Ejercicio 6: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
rectángulo y escriba en la salida estándar su hipotenusa.

*/

#include <stdio.h>
#include <math.h> // Necesario para la función sqrt()

int main() {
	
    float cateto1, cateto2, hipotenusa;

    
    printf("Ingrese el valor del primer cateto: ");
    scanf("%f", &cateto1);

    printf("\nIngrese el valor del segundo cateto: ");
    scanf("%f", &cateto2);

    
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    
    printf("\nLa hipotenusa del triángulo rectángulo es: %.2f\n", hipotenusa);


    return 0;
}
