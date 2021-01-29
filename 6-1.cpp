/* Q1 버블 정렬의 각 패스에서 비교, 교환은 왼쪽부터 수행 가능. 수정 프로그램 작성 */
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- 버블 정렬 함수 ---*/
void bubble(int a[], int n)
{
	int i, j;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++)
			if (a[j] > a[j + 1])
				swap(int, a[j], a[j + 1]);
	}
}

int main(void)
{
	int i, nx;
	int *x;		

	puts("버블 정렬");
	printf("요솟수 : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));	

	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	bubble(x, nx);					

	puts("오름차순으로 정렬했습니다.");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);	

	return 0;
}