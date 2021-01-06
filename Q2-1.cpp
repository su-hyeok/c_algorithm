/* Q2-1 배열 요소의 최솟값 */
#include <stdio.h>
#include <stdlib.h>

int minof(const int a[], int n)
{
	int i;
	int min = a[0];

	for (i = 1; i < n; i++)
		if (a[i] < min) min = a[i];

	return min;
}

int main(void)
{
	int i;
	int *height;		
	int number;		

	printf("인원 :");
	scanf_s("%d", &number);

	height = (int*)calloc(number, sizeof(int));

	printf("%d 명의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d] : ", i);
		scanf_s("%d", &height[i]);
	}

	printf("최솟값은 %d입니다.\n", minof(height, number));

	free(height); 

	return 0;
}