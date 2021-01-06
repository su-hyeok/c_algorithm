/* Q2-5 배열요소를 역순으로 정렬하는 과정 일일이 출력하도록 2-7을 수정한 프로그램 */

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)


void ary_print(const int a[], int n)
{
	int i;
	for (i = 0; i  <n; i++)
		printf("%d", a[i]);
	putchar('\n');
}


void ary_reverse(int a[], int n)
{
	int i;

	for (i = 0; i < n / 2; i++) {
		ary_print(a, n);
		printf("a[%d]와 a[%d]를 교환합니다.\n", i, n - i - 1);
		swap(int, a[i], a[n - i - 1]);
	}
	ary_print(a, n);
	puts("역순정렬이 끝났습니다.");
}

int main(void)
{
	int i;
	int *x;		
	int nx;			

	printf("요솟수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));				

	printf("%d 개의 정수를 입력하세요.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	ary_reverse(x, nx);							

	printf("배열 요소를 역순으로 정렬했습니다.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d입니다.\n", i, x[i]);

	free(x); 

	return 0;
}