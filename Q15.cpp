/*Q15. 직사각형 기호 출력*/
#include <stdio.h>

int main(void) {
	int i, j;
	int n,m;
	puts("직사각형을 출력합니다.");
	printf("높이: "); scanf_s("%d", &n);
	printf("너비: "); scanf_s("%d", &m);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++)
			printf("*");
		putchar('\n');
	}

	return 0;
}