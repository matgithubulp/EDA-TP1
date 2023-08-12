/*
Ejercicio 6: Escriba un programa que lea de la entrada est�ndar los dos catetos de un tri�ngulo
rect�ngulo y escriba en la salida est�ndar su hipotenusa.

*/

#include <stdio.h>
#include <math.h> // Necesario para la funci�n sqrt()

int main() {
	
    float cateto1, cateto2, hipotenusa;

    
    printf("Ingrese el valor del primer cateto: ");
    scanf("%f", &cateto1);

    printf("\nIngrese el valor del segundo cateto: ");
    scanf("%f", &cateto2);

    
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    
    printf("\nLa hipotenusa del tri�ngulo rect�ngulo es: %.2f\n", hipotenusa);


    return 0;
}
