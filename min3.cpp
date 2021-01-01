/*Q2.세 값의 최솟값을 구하는 함수 min3를 작성하세요*/
#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;

	return min;
}

int main(void)
{
	int a, b, c;

	printf("네 정수의 최솟값을 구합니다.\n");
	printf("a의 값: "); scanf_s("%d", &a);
	printf("b의 값: "); scanf_s("%d", &b);
	printf("c의 값: "); scanf_s("%d", &c);

	printf("최솟값은 %d 입니다.", min3(a, b, c));
	return 0;
}