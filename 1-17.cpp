///*17. n���� �Ƕ�̵带 ����ϴ� �Լ�*/
//
//#include <stdio.h>
//
//void spira(int n)
//{
//	int i, j;
//	for (i = 0; i <= n; i++)
//	{
//		for (j = n - i; j > 0; j--) {
//			putchar('  ');
//		}
//		for (j = 1; j <= 2 * i + 1; j++) {
//			putchar('*');
//		}
//		for (j = n - 1; j > 0; j--) {
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
//	spira(n);
//}