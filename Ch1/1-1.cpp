/*네 값의 최댓값을 구하는 함수 max4를 작성하세요.*/

#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}

	return max;
}

int main(void)
{
	int a, b, c, d;
	int max;
	printf("네 정수의 최댓값을 구하시오.\n");
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("c의 값 : "); scanf_s("%d", &c);
	printf("d의 값 : "); scanf_s("%d", &d);
	printf("최댓값은 %d입니다.\n", max4(a, b, c, d));

	return 0;
}
