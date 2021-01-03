/////*Q16.  직각 이등변 삼각형 출력*/
#include <stdio.h>

void triangleLB(int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}
}

void triangleLU(int n) {
	int i, j;
	for (i = n; i >=1; i--) {
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}



void triangleRU(int n) {
	int i, j,k;

	for (i = 1; i <= n; i++) {				
		for (k = 1; k <= i; k++)		
			putchar(' ');
		for (j = n; j >=i; j--)		
			putchar('*');
		putchar('\n');
	}
}

void triangleRB(int n) {
	int i, j,k;
	for (i = 1; i <= n; i++) {
		for (k = n; k >= i; k--)
			putchar(' ');
		for (j = 1; j <= i; j++)	
			putchar('*');
		putchar('\n');
	}
}


int main(void){
	int n;

	puts("직각 이등변 삼각형을 출력합니다.");
	do {
		printf("크기 : "); scanf_s("%d", &n);
	} while (n <= 0);

	printf("\n"); triangleLB(n);
	printf("\n"); triangleLU(n);
	printf("\n"); triangleRU(n);
	printf("\n"); triangleRB(n);

	return 0;
}

