/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FALSE 0
#define TRUE 1
#define MAX_LENGTH 16

struct humanBeing {
	char name[10];
	int age;
	float salary;
};


typedef struct {
  char name[10];
  int age;
  float salary;
} humanBeing;


// 이렇게 하면 struct를 생략할 수 있음


int humans_equal(struct humanBeing person1, struct humanBeing person2);



void main6() {
	struct humanBeing person1, person2;
	int rv;

	strcpy_s(person1.name, MAX_LENGTH, "Hwang");
	person1.age = 30;
	person1.salary = 4000;

	strcpy_s(person2.name,MAX_LENGTH, "Han");
	person2.age = 40;
	person2.salary = 8000;

	if (humans_equal(person1, person2))
		printf("The two human beings are the same.\n");
	else
		printf("The two human beings are NOT the same.\n");
}
 
int humans_equal(struct humanBeing person1, struct humanBeing person2) {
	// returns TRUE if person1 and person2 are the same human being
	if (strcmp(person1.name, person2.name))
		return FALSE;
	if (person1.age != person2.age)
		return FALSE;
	if (person1.salary != person2.salary)
		return FALSE;
	return TRUE;
}
*/