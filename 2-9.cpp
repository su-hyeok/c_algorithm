/*9. 배열 b의 모든 요소를 배열 a에 역순으로 복사하는 함수, n은 요소 개수임*/

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
	printf("복사 전 배열 x : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("복사 전 배열 y : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");
	ary_rcopy(y, x, SIZE);
	printf("복사 후 배열 x : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", x[i]);
	}
	printf("\n");
	printf("복사 후 배열 y : ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", y[i]);
	}
	printf("\n");
}