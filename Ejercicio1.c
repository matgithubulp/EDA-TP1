/*
jercicio 1:
A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del
usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)

B) Ejemplifique, como se coloca un comentario de una o varias líneas.

C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.

*/



#include <stdio.h>

int main(){
	//A) Haga un programa que permita la entrada de datos, ingresando el nombre y apellido del
	//usuario, además debe mostrar el nombre_completo por pantalla. (considera los espacios)
	
	char nombre[15];
	char apellido[15];
	
	printf("Ingrese su nombre\n "); scanf("%s",&nombre);
	
	printf("Ingrese su apellido\n "); scanf("%s",&apellido);
	
	printf("Su nombre completo es: %s %s",nombre,apellido);
	
  //B) Ejemplifique, como se coloca un comentario de una o varias líneas. Este es un comentario de una linea.
  
  /*
  	Este es un comentario de varias lineas
  	aaa
  	aaa
   */
   
	/*
	C) Como se baja un renglón al mostrar algo por pantalla, nombre alternativas.
	
	    Para bajar un renglon se puede utilizar \n
	    
	*/
	return 0;
}
