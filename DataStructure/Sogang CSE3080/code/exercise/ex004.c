/*
#include <stdio.h>
#include <stdlib.h>

//type�� �� �� �� void�� ��

void main4() { 
	int i, n, m, * data; //data�� array�̹Ƿ� �����ͷ� �����ϴ� ��
	printf("how many integers you want to generate? ");
	scanf_s("%d", &n);

	data = malloc(n * sizeof(int));
	printf("memory allocated at %p\n", data);

	for (i = 0; i < n; i++)
		data[i] = rand()%100;

	printf("how many integers you want to generate additionally? ");
	scanf_s("%d", &m);

	data = realloc(data, (n + m) * sizeof(int));
	printf("memory allocated at %p\n", data); //���� ���� allocate�� -> �ڿ� ������ ���Ƽ� �׳� �÷��� ��

	for (i = 0; i < n+m; i++)
		data[i] = rand()%100;
	for (i = 0; i < n + m; i++)
		printf("%3d: %8d\n", i+1, data[i]);
	free(data);

}

*/