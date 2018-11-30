#ifndef UTILS_H
#define UTILS_H
#include <time.h>
#include <stdlib.h>

int calls = 0, num;

void init(){
	srand(time(NULL));
	num = rand() % 1000 + 1;
}

int intentar(int a){
	if (calls >= 12) return -2;
	if (a < num) return 1;
	if (a > num) return -1;
	return 0;
}

#endif