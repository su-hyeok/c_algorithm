/*shell 4-2-1정렬
보초법 사용해봄*/

#include <stdio.h>	
#include <stdlib.h>	

void shell(int a[], int n)
{
	int i, j, h;
	a[0] = -1;
	for (h = n / 2; h > 0; h /= 2)
		for (i = h; i < n; i++)
		{
			int tmp = a[i + 1];
			for (j = i - h; a[j + 1] >= tmp; j -= h)
			{
				a[j + h + 1] = a[j + 1];
			}
			a[j + h + 1] = tmp;
		}
}

int main(void)
{
	int i, nx;
	int* x; 						/* 배열의 첫 번째 요소에 대한 포인터 */
	puts("shell");
	printf("요소수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx + 1, sizeof(int)); 	/* 요소의 개수가 nx인 int형 배열을 생성 */

	for (i = 1; i <= nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	shell(x, nx);		/* 배열 x를 단순 삽입 정렬 */

	puts("오름차순으로 정렬했습니다.");
	for (i = 1; i <= nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);				/* 배열을 해제 */

	return 0;
}