///*Q11. 양의 정수를 입력하고 자릿수를 출력하는 프로그램*/
#include <stdio.h>

int main(void)
{
	int a;
	int i;
	puts("양의 정수를 입력하면 자릿수를 출력합니다.");
	/*do while(제어식)문*/
	do {
		printf("양의 정수를 입력하세요: "); scanf_s("%d", &a);	
	} while (a<= 0); 
	
	for (i = 0; a > 0; i++) {
		a /= 10;
	}
	printf("입력한 수의 자릿수는 %d입니다." ,i);

	return 0;
}

