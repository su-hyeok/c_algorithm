/* Q2-3 2-5 실습을 수정해 키의 평균 구하는 프로그램 */

#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n)
{
	int i;
	double sum = 0; /* 합계 */

	for (i = 0; i <n; i++)
		sum += a[i];

	return sum / n;
}

int main(void)
{
	int i;
	int *height;	
	int number;	

	printf("인원 : ");
	scanf_s("%d", &number);

	height = (int*)calloc(number, sizeof(int)); 

	printf("%d명의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++) {
		printf("height [%d] : ", i);
		scanf_s("%d", &height[i]);
	}

	printf("평균은 %f입니다.\n", aveof(height, number));

	free(height);

	return 0;
}