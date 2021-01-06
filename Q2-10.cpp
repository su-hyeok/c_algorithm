///* Q2-10 배열a의 모든 요소의 순서 뒤섞는 shuffle 함수 작성 프로그램 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)


void shuffle(int a[], int n)
{
	int i;

	srand(time(NULL));
	for (i = n - 1; i> 0; i--) {		
		int j = rand() % (i + 1);
		if (i != j)
			swap(int, a[i], a[j]);
	}
}

int main(void)
{
	int i;
	int * x;		
	int nx;			

	printf("요솟수 : ");
	scanf_s("%d", &nx);
	x = (int*)calloc(nx, sizeof(int));			

	printf("%d 개의 정수를 입력하세요.\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf_s("%d", &x[i]);
	}

	shuffle(x, nx); 

	printf("배열 요소의 순서를 셔플했습니다.\n");
	for (i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x); 

	return 0;
}