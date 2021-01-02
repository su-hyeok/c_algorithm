/*Q10. b-a를 출력하는 프로그램*/
#include <stdio.h>

int main(void)
{
	int a, b;
	int i;
	puts("1부터 n까지의 합을 구합니다.");
	/*do while(제어식)문*/
	do {
		printf("a의 값: "); scanf_s("%d", &a);
		printf("b의 값: "); scanf_s("%d", &b);

		if (b <= a) {
			printf("a보다 큰 값을 입력하세요!\n");
		}
	} while (b <= a); 
	
	i = b - a;
	printf("b-a는 %d입니다." ,i);

	return 0;
}