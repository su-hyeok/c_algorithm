/*8. �迭 b�� ��� ��Ҹ� �迭 a�� �����ϴ� �Լ�, n�� ��� ������*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void ary_copy(int a[], int b[], int n)
{
	int i;
	for (i = 0; i <= n - 1; i++) {
		a[i] = b[i];
	}
}

int main(void)
{
	int i;
	int x[SIZE] = { 1, 2, 3, 4, 5 };
	int y[SIZE] = { 0 };
	printf("���� �� �迭 x : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("���� �� �迭 y : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");
	ary_copy(y, x, SIZE);
	printf("���� �� �迭 x : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("���� �� �迭 y : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");
}