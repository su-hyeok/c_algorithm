/* Q2-8 배열b의 모든 요소 복사 프로그램. */

#include <stdio.h>
#include <stdlib.h>


void ary_copy(int a[], const int b[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int *x, *y;			
	int n;			

	printf("요솟수 : ");
	scanf_s("%d", &n);
	x = (int*)calloc(n, sizeof(int));		
	y = (int*)calloc(n, sizeof(int));			

	printf("%d 개의 정수를 입력하세요.\n", n);
	for (i = 0; i < n; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	ary_copy(y, x, n); 

	printf("배열 x의 모든 요소를 배열 y로 복사했습니다.\n");
	for (i = 0; i < n; i++)
		printf("y[%d] = %d\n", i, y[i]);

	free(x); 
	free(y); 

	return 0;
}