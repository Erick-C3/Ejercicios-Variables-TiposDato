#include <stdio.h>

/*
Copa de Quidditch Interescolar 1996-1997
	
Organice la puntuacion para que el mensaje mostrado en consola sea el siguiente: 

	Resultados:
		Gryffindor derrotó a Slytherin
		Hufflepuff derrotó a Gryffindor, 320-60
		Gryffindor derrotó a Ravenclaw, 450-140

*/


int main(){
	//NO MODIIFICAR
	int puntosHuff = 320;
	int puntosGryffUno = 60;
	int puntosGryffDos = 450;
	int puntosRaven = 140;
	//NO MODIIFICAR

	printf("Resultados:\n");
	printf("Gryffindor derroto a Slytherin\n");
	printf("Hufflepuff derroto a Gryffindor, %i-%i \n", puntosGryffUno, puntosRaven);
	printf("Gryffindor derroto a Ravenclaw, %i-%i \n", puntosHuff, puntosGryffDos);

	return 0;
}