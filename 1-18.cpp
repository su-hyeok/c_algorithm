///*18. �Ʒ��� ���� n���� ���� �Ƕ�̵带 ����ϴ� �Լ�*/
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
//	printf("n�� �� : "); scanf_s("%d", &n);
//	nspira(n);
//}