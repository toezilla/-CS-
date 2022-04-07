/* 

#include <stdio.h>
#include <stdlib.h>


#define MAX_SIZE 100 // MAX_SIZE는 100으로 지정

int sum(int* list, int n) //list에 있는 값들 다 더해주는 함수
{
	int i, tempsum = 0; // i 와 tempsum variable 변수 0으로 초기화
	for (i = 0; i < n; i++)
	{
		tempsum = tempsum + list[i];
	}
	return tempsum;
}

void main2()
{
	int i;
	int input[MAX_SIZE]; //내가 쓰는게 int가 확실하면 int를 써도 된다.
	int answer;


	//array에 값을 넣어준다
	for (i = 0;i < MAX_SIZE; i++)
	{
		input[i] = i;
	}

	//function sum을 호출한다
	answer = sum(input, MAX_SIZE);

	//결과를 화면에 출력한다
	printf("The sum is %d\n", answer);
	printf("Value of input: %p\n", input);
	printf("Value of input+1: %p\n", input+1); //포인터에다가 1을 더하는 것은 그냥 숫자에 1을 더하는 것과는 다른 의미임. 포인터는 int 형태이기 떄문에 1에다가 4의 메모리를 할당하는 거임
	printf("Value of the item in address input[0]: %d\n", *input);
	printf("Value of the item in address input[1]: %d\n", *(input+1));
	printf("Address of input[0]: %p\n", &input[0]);
	printf("Address of input[1]: %p\n", &input[1]);
	printf("Address of input[2]: %p\n", &input[2]);
}

*/