/*Q6. while, for문이 종료될 때 변수 i값이 n+1이 됨을 확인*/
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1부터 n까지의 합을 구합니다."); /*자동으로 줄 바꿈, 문자열 나타냄*/
	printf("n의 값: "); scanf_s("%d", &n);
	sum = 0;
	i = 1;

	while (i <= n) { /*변수 하나일 때는 for문 사용 권장*/
		sum += i;
		i++;
	}

	/*for 문 사용할 때
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
	}*/

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	printf("변수 i의 값은 %d이고 n + 1과 %s.\n", i, (i == n + 1) ? "같습니다." : "같지 않습니다.");

	return 0;
}