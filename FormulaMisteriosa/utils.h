#ifndef UTILS_H
#define UTILS_H
#define CASES 30
#define POSITIVE 20
#define NEGATIVE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "solucion.h"

int phits = 0, nhits = 0;

int ss(int x){
	int i = 0, tot = 0;
	for ( ; i < abs(x); i++) tot += x;
	if (x < 0){ tot--; } else{ tot++; }
	return tot;
}

void test(){
	int i;
	for (i = 0; i < POSITIVE; i++){
		int bench = rand() % 100;
		if (solucion(bench) == ss(bench)) phits++;
	}

	for (i = 0; i < NEGATIVE; i++){
		int bench = rand() % 50;
		if (solucion(-bench) == ss(-bench)) nhits++;
	}
}

void show(){
	printf("Positive cases: %d/%d\n", phits, POSITIVE);
	printf("Negative cases: %d/%d\n\n--\n", nhits, NEGATIVE);
	printf("Total: %d/%d\n", phits + nhits, CASES);
	if (phits + nhits == CASES) printf("FELICIDADES!\n");
}

#endif
