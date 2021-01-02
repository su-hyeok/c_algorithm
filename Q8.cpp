/*Q8.가우스의 덧셈 방법 사용해 1부터 N까지의 정수 합*/
#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값: ");
	scanf_s("%d", &n);
	sum = (1 + n) * (n / 2);

	printf("1부터 %d까지의 합은 %d입니다.", n, sum);
	return 0;

}