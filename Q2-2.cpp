///* Q2-2 2-5 실습을 수정해 키의 합계 구하는 프로그램 */

#include <stdio.h>
#include <stdlib.h>

/*--- 요솟수 n인 배열 a의 요소의 합계를 구합니다. ---*/
int sumof(const int a[], int n)
{
	int i;
	int sum = 0; /* 합계 */

	for (i = 0; i <n; i++)
		sum += a[i];

	return sum;
}

int main(void)
{
	int i;
	int *height;	/*포인터 int*/
	int number;			

	printf("인원 : ");
	scanf_s("%d", &number);

	height = (int*)calloc(number, sizeof(int)); 

	printf("%d 명의 키를 입력하세요.\n", number);
	for (i = 0; i < number; i++) {
		printf("height [%d] : ", i);
		scanf_s("%d", &height[i]);
	}

	printf("합계는 %d입니다.\n", sumof(height, number));

	free(height); /*height 해제 */

	return 0;
}