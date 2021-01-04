///*16. 직각 이등변 삼각형을 출력하는 부분을 아래와 같은 형식의 함수로 작성하세요
//triangleRB 오류.*/
//
//#include <stdio.h>
//
//void triangleLB(int n)
//{
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//void triangleLU(int n)
//{
//	int i, j;
//	for (i = n; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//void triangleRU(int n)
//{
//    int i, j;
//    for (i = n; i >= 1; i--) {
//        for (j = 1; j <= (n - i); j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//}
//
//void triangleRB(int n)
//{
//	int i, j;
//	for (i = n - 1; i >= 0; i--) {
//		for (j = i; j >= 1; j--) {
//			putchar('  ');
//		}
//		for (j = 1; j <= n-i; j++) {
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//
//int main(void)
//{
//	int n;
//	printf("n의 값 : "); scanf_s("%d", &n);
//	triangleLB(n);
//	triangleLU(n);
//	triangleRU(n);
//	triangleRB(n);
//	return 0;
//}
