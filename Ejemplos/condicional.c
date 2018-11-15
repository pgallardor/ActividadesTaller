#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);

	if (a % 2 == 0){
		printf("El número es par ");
	}

	else{
		printf("El número es impar ");
	}

	if (a < 20){
		printf("y es menor que 20.\n");
	}

	else{
		printf("y es mayor o igual a 20\n");
	}

	return 0;
}

/*

	En C, existen diversos operadores 'booleanos' (o que tienen un valor de verdad)
	y que pueden ser utilizados para condicionar la ejecución de algunos bloques de código

	Ejemplos:
		a < b // es verdad si b es mayor que a
		a <= b // incluye la igualdad
		a == b // es verdad cuando son iguales
		a != b // es verdad cuando son distintos

		(a >= b) && (a <= c) // es verdad si a pertenece al intervalo [b, c]
							 // si quitan los signos de igualdad, queda el intervalo ]b, c[ 
*/