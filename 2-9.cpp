/*9. �迭 b�� ��� ��Ҹ� �迭 a�� �������� �����ϴ� �Լ�, n�� ��� ������*/

#include <stdio.h>
#define SIZE 5

void ary_rcopy(int a[], int b[], int n)
{
	int i, j;
	for (i = 0; i <= n - 1; i++) {
		a[i] = b[i];
	}
	for (j = 0; j < n / 2; j++) {
		do {
			int temp = a[j]; a[j] = a[n - j - 1]; a[n - j - 1] = temp;
		} while (0);
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
	ary_rcopy(y, x, SIZE);
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