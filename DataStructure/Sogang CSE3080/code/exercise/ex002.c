/* 

#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 100 // MAX_SIZE�� 100���� ����

int sum(int* list, int n) //list�� �ִ� ���� �� �����ִ� �Լ�
{
	int i, tempsum = 0; // i �� tempsum variable ���� 0���� �ʱ�ȭ
	for (i = 0; i < n; i++)
	{
		tempsum = tempsum + list[i];
	}
	return tempsum;
}

void main2()
{
	int i;
	int input[MAX_SIZE]; //���� ���°� int�� Ȯ���ϸ� int�� �ᵵ �ȴ�.
	int answer;


	//array�� ���� �־��ش�
	for (i = 0;i < MAX_SIZE; i++)
	{
		input[i] = i;
	}

	//function sum�� ȣ���Ѵ�
	answer = sum(input, MAX_SIZE);

	//����� ȭ�鿡 ����Ѵ�
	printf("The sum is %d\n", answer);
	printf("Value of input: %p\n", input);
	printf("Value of input+1: %p\n", input+1); //�����Ϳ��ٰ� 1�� ���ϴ� ���� �׳� ���ڿ� 1�� ���ϴ� �Ͱ��� �ٸ� �ǹ���. �����ʹ� int �����̱� ������ 1���ٰ� 4�� �޸𸮸� �Ҵ��ϴ� ����
	printf("Value of the item in address input[0]: %d\n", *input);
	printf("Value of the item in address input[1]: %d\n", *(input+1));
	printf("Address of input[0]: %p\n", &input[0]);
	printf("Address of input[1]: %p\n", &input[1]);
	printf("Address of input[2]: %p\n", &input[2]);
}

*/