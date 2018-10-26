#ifndef UTILS_H
#define UTILS_H
#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CASES 20

int hits;

void compare(int a, int b){
	if (a == b) hits++;
}

void test(){
	hits = 0;
	int i;
	srand(time(NULL));
	for (i = 0; i < CASES; i++){
		int bench = rand() % (1 << 10) * (rand() % 2 - 1);
		compare(func(bench), bench - 1);
	}
}

void show(){
	printf("Casos correctos: %d/%d\n", hits, CASES);
	if (hits == CASES) printf("FELICIDADES!\n");
}

#endif