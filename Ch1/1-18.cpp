///*18. 아래를 향한 n단의 숫자 피라미드를 출력하는 함수*/
//
//#include <stdio.h>
//
//void nspira(int n)
//{
//	int i, j;
//	for (i = n; i >= 1; i--) {
//		for (j = 0; j < n - i; j++) {
//			putchar('  ');
//		}
//		for (j = 2 * i - 1; j >= 1; j--) {
//			printf("%d", n - i + 1);
//		}
//		for (j = 0; j < n - i; j++) {
//			putchar('  ');
//		}
//		putchar('\n');
//	}
//}
//
//int main(void)
//{
//	int n;
//	printf("n의 값 : "); scanf_s("%d", &n);
//	nspira(n);
//}