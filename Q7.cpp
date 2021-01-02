///*Q7.n=7, 1+2+3+4+5+6+7=28, for문 사용*/
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값: ");
	scanf_s("%d", &n);

	sum=0; 
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.", n, sum);
	return 0;
}

