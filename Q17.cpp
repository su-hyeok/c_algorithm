/////*Q17. 피라미드 삼각형 출력*/
#include <stdio.h>

void spira(int n) {
	int i, j,k;
    for (i = 1; i <= n; i++) {
		for (k = n; k >=i; k--)
			printf(" ");
		for(j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}
}

int main(void) {
	int n;

	puts("피라미드 삼각형을 출력합니다.");
	do {
		printf("n : "); scanf_s("%d", &n);
	} while (n <= 0);

    spira(n);

	return 0;
}

