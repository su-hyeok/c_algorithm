///*16. ���� �̵ �ﰢ���� ����ϴ� �κ��� �Ʒ��� ���� ������ �Լ��� �ۼ��ϼ���
//triangleRB ����.*/
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
//	printf("n�� �� : "); scanf_s("%d", &n);
//	triangleLB(n);
//	triangleLU(n);
//	triangleRU(n);
//	triangleRB(n);
//	return 0;
//}
