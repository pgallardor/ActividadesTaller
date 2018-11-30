#include "utils.h"
#include <stdio.h>

/*Desafío de fin de taller: adivinar consistentemente todos los número con algún algoritmo.*/

int main(){
	init();

	int r = 1, N;
	printf("Estoy pensando en un número del 1 al 1000. Adivina. Tienes 12 intentos\n");

	while (r != 0 && r != -2){
		scanf("%d", &N);
		r = intentar(N);
		if (r == 0) printf("Felicidades! Estaba pensando en %d.\n", N);
		else if (r == 1) printf("Pienso en un número mayor a %d.\n", N);
		else if (r == -1) printf("Pienso en un número menor a %d\n", N);
	}

	if (r == -2) printf("Qué lástima... vuelve a intentarlo.\n");
	return 0;
}