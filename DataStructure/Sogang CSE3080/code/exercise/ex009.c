
#include <stdio.h>
#include <stdlib.h>

#define MAX_TERMS 100 // ��ũ��: �ִ� ������ 100���� ����
#define COMPARE(x,y) (x<y ? -1 : (x>y ? 1 : 0)) // ��ũ��: x�� y�� ������ �� x<y�� -1, x>y�� 1, x==y�̸� 0 ���

typedef struct { // polynomial �� �����ϴ� struct ����
	int coef; // �� ���� coef
	int expon; // �� ���� ����
} polynomial;

//shared memory for storing polynomials
polynomial terms[MAX_TERMS]; //�ϴ� �ִ� ���� ũ�⸸ŭ array ����
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
		case -1:// a�� ���� < b�� ����
			attach
		}

	
}
