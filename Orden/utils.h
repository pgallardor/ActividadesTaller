#ifndef UTILS_H
#define UTILS_H
#define MAX 1 << 20
#include <stdio.h>

int nums[1000], min_idx = -1, SIZE, availible;

void save(int N){
	int i;
	for (i = 0; i < N; i++)
		scanf("%d", &nums[i]);

	SIZE = availible = N;
}

int pedirMenor(){
	if (availible == 0) return -1;
	min_idx = 0;
	int i;
	for (i = 1; i < SIZE; i++){
		if (nums[min_idx] > nums[i]) min_idx = i;
	}

	return nums[min_idx];
}

void guardarMenor(){
	if (!availible) return;
	if (min_idx != -1){
		nums[min_idx] = MAX;
		min_idx = -1;
		availible--;
		return;
	} 

	min_idx = 0;
	int i;
	for (i = 1; i < SIZE; i++){
		if (nums[min_idx] > nums[i]) min_idx = i;
	}

	nums[min_idx] = MAX;
	availible--;
	min_idx = -1;
}

#endif
