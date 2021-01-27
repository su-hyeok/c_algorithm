/* 삽입 정렬 + 보초 */
#include <stdio.h>
#include <stdlib.h>

/*a[0]을 제일 작은 수 -1로 설정하면, j > 0조건을 없앨 수 있음!*/
void insertion(int a[], int n)
{
	int i, j;
	a[0] = -1;
	for (i = 1; i < n; i++) {
		int tmp = a[i];
		for (j = i; a[j - 1] > tmp; j--)
			a[j] = a[j - 1];
		a[j] = tmp;
	}
}

int main(void)
{
	int i, nx;
	int* x; 						/* 배열의 첫 번째 요소에 대한 포인터 */
	puts("단순 삽입 정렬");
	printf("요소수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int)); 	/* 요소의 개수가 nx인 int형 배열을 생성 */

	for (i = 1; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	insertion(x, nx);		/* 배열 x를 단순 삽입 정렬 */

	puts("오름차순으로 정렬했습니다.");
	for (i = 1; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				/* 배열을 해제 */

	return 0;
}