/*Q14. 정사각형 기호 출력*/
#include <stdio.h>

int main(void) {
	int i, j;
	int n;
	puts("사각형을 출력합니다.");
	printf("입력할 수: "); scanf_s("%d", &n);

	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			printf("*");
		putchar('\n');
	}

	return 0;
}