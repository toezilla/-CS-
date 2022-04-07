
#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100 // 매크로: 최대 차수를 100으로 설정
#define COMPARE(x,y) (x<y ? -1 : (x>y ? 1 : 0)) // 매크로: x와 y를 비교했을 때 x<y면 -1, x>y면 1, x==y이면 0 출력

typedef struct { // polynomial 을 정의하는 struct 구성
	int coef; // 각 항의 coef
	int expon; // 각 항의 차수
} polynomial;

//shared memory for storing polynomials
polynomial terms[MAX_TERMS]; //일단 최대 차수 크기만큼 array 구성
int avail = 0; //

void polynomial_add(int, int, int, int, int*, int*);
void polynomial_print(int, int);
void attatch(int, int);

void main() {
	

}
void polynomial_add(int starta, int finisha, int startb, int finishb, int*startd, int*finishd) {
	// add a(x) and b(x) to obtain d(x)
	int coefficient;
	*startd = avail;

	printf("-----------------------------------\n");
	printf("| the while loop                   \n");
	printf("-----------------------------------\n");
	while (starta <= finisha && startb <= finishb)
		switch (COMPARE(terms[starta].expon, terms[startb].expon)) {
		case -1:// a의 차수 < b의 차수
			attach
		}

	
}
