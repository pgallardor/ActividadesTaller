#ifndef UTILS_H
#define UTILS_H

#define N_TEST 30
#define MAX (1 << 15)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "carol.h"

int hits;

void compare(int a, int b){
	if (a == b) hits++;
}

void evaluar(){
	srand(time(NULL));
	int i, bench;
	hits = 0;
	for (i = 0; i < N_TEST; i++){
		int bench = rand() % MAX;
		compare(calcular(bench), bench << 1);
	}
}

void show(){
	printf("Casos correctos: %d/%d\n", hits, N_TEST);
	if (hits == N_TEST) printf("FELICIDADES!\n");
}

#endif
