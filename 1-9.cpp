/*정수 a, b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래 함수를 작성하세요.*/

#include <stdio.h>

int sumof(int a, int b)
{
	int sum = 0;
	if (a < b) {
		for (a; a <= b; a++) {
			sum = sum + a;
		}
	}
	else if (a > b) {
		for (b; b <= a; b++) {
			sum = sum + b;
		}
	}
	else
		sum = a;
	return sum;
}

int main(void)
{
	int a, b;
	printf("a의 값 : "); scanf_s("%d", &a);
	printf("b의 값 : "); scanf_s("%d", &b);
	printf("%d부터 %d사이의 모든 정수의 합은 %d입니다.\n", a, b, sumof(a, b));
}