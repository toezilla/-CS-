/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main15() {
	char pat[] = "world";
	char str[] = "Hello world i am a student";
	char* t;
	
	if (t = strstr(str, pat)) {
		printf("The string returned by strstr is %s\n", t);
	}
	else {
		printf("The pattern was not found with strstr\n");
	}
}
// t 가 포인터이므로, 뒤에 꼐 다 나옴
// world i am a student
*/