/* Q2-4 2-6 키를 난수로 생성한 후 키의 최댓값 구하는 프로그램 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n)
{
	int i;
	int max = a[0]; 

	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];

	return max;
}

int main(void)
{
	int i;
	int *height;		
	int number;			

	srand(time(NULL));									

	number = 5 + rand() % 16;							

	height = (int*)calloc(number, sizeof(int));				

	for (i = 0; i  <number; i++) {
		height[i] = 100 + rand() % 90;					
		printf("height[%d] = %d입니다.\n", i, height[i]);
	}

	printf("최댓값은 %d입니다.\n", maxof(height, number));

	free(height); 

	return 0;
}