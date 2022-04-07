/*
#include <stdio.h>
#include <stdlib.h>

void print1(int*, int);

void main3()
{
	int one[] = { 0, 1, 2, 3, 4 };
	print1(one, 5);
	printf(one);
}

void print1(int* ptr, int rows) {
	// print out a one-dimensional array using a pointer
	int i;
	printf("address contents\n");
	for (i = 0; i < rows; i++)
		printf("%8p %5d\n", ptr + 1, *(ptr + i));
	printf("\n");
}
*/