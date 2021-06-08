#include <stdio.h>

/*
	scanf permite recibir un valor por consola indicando el formato del tipo de dato esperado
	y la direccion de memoria de la variable donde se guardara
	
	scanf("%i", &variable)

	"%i" -> indico el tipo de dato esperado, en este caso un entero

	&variable -> indico la variable donde se guardara la informacion
	 es necesario agregar el operador de direccion & antes de la variable



*/



int main(){
	int numero = 0;// defino e inicializo una variable entero (int)
	float numeroReal = 0.3;
	char caracter = '3';

	printf("numero contiene: %i\n", numero);
	printf("numeroReal contiene: %f\n", numeroReal);
	printf("caracter contiene: %c\n", caracter);

	//Escribir "Ingrese un numero:"
	printf("Ingrese un numero:\n");
	// leer numero;
	scanf("%i", &numero); // & operador de direccion 00X1L3

	//Escribir "Ingrese un caracter:"
	printf("Ingrese un numeroReal:\n");
	// leer numeroReal;
	scanf("%f", &numeroReal); // & operador de direccion 00X1L3

	//Escribir "Ingrese un caracter:"
	printf("Ingrese un caracter:\n");
	// leer caracter;
	scanf(" %c", &caracter); // & operador de direccion 00X1L3
	// para recibir un caracter es recomendable dejar un espacio al formato " %c" para evitar posibles bugs

	printf("ahora numero contiene: %i\n", numero);
	printf("ahora numeroReal contiene: %f\n", numeroReal);
	printf("ahora caracter contiene: %c\n", caracter);

	return 0;
}