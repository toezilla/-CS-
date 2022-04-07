/*
#include <stdio.h>
#include <stdlib.h>

//type을 잘 모를 때 void로 씀

void main4() { 
	int i, n, m, * data; //data가 array이므로 포인터로 선언하는 것
	printf("how many integers you want to generate? ");
	scanf_s("%d", &n);

	data = malloc(n * sizeof(int));
	printf("memory allocated at %p\n", data);

	for (i = 0; i < n; i++)
		data[i] = rand()%100;

	printf("how many integers you want to generate additionally? ");
	scanf_s("%d", &m);

	data = realloc(data, (n + m) * sizeof(int));
	printf("memory allocated at %p\n", data); //같은 곳에 allocate됨 -> 뒤에 공간이 남아서 그냥 늘려준 것

	for (i = 0; i < n+m; i++)
		data[i] = rand()%100;
	for (i = 0; i < n + m; i++)
		printf("%3d: %8d\n", i+1, data[i]);
	free(data);

}

*/