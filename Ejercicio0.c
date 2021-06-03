#include <stdio.h> //biblioteca estandar de C
#include <stdbool.h> // agrego a mi proyecto el tipo de dato booleano 

/*
 	Ejercicio:
 		• alterar los  nombres de variables, 'constante' y valores de los mismos

 		• alterar los mensajes que se imprimen por consola

 		• guardar el archivo en su repositorio
*/


#define MSJ_TEXTO "hola, estoy escribiendo mi primer programa" // constante para texto

int main(){
	//inicio
	int numeroEntero = 0; // tipoDato + nombreVariable = valorInicial;
	float numeroReal = 0; 
	char caracter = 'z';
	bool variableBooleana = true; // false = 0  y  true != 0

	
	// el \n sirve para imprimir un salto de linea en la consola
	// printf("texto %formato texto", variableCorrespondiente);
	printf("Imprimi una variable entera: %i \n", numeroEntero);
	printf("Imprimi una variable real: %f \n", numeroReal);  // con %.1f indica mostrar 1 solo decimal
	printf("Imprimi una variable caracter: %c \n", caracter);
	printf("Imprimi una variable logica: %i \n", variableBooleana);
	printf("Imprimi una 'variable' TEXTO: %s ", MSJ_TEXTO);


	return 0; //fin
}


