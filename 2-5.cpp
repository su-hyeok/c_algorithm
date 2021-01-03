///실습 2-5 *요소의 최댓값 구하기 */
#include <stdio.h>
#include <stdlib.h>


int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
		return max;
	}
}

int main (void){
	int i;
	int *height;
	int number;
	printf("사람 수: ");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	printf("%d 사람의 키를 입력하세요\n", number);
	for (i = 0; i < number; i++) {
		printf("height[%d]: ", i);
		scanf_s("%d", &height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);

	return 0;

 }
	