///*5. �迭 ��Ҹ� �������� �����ϴ� ������ ����ϴ� ���α׷�
//���� : �ǽ� 2-7�� ary_reverse �Լ��� �����ϼ���.*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
///*#define swap(type, x, y) do{type t = x; x = y; y = t;} while(0)*/
//
//void ary_reverse(int a[], int n)
//{
//	int i, j;
//	for (j = 0; j < n; j++) {
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	for (i = 0; i < n / 2; i++) {
//		printf("a[%d]�� a[%d]�� ��ȯ�մϴ�.\n", i, n - i - 1);
//		int temp = a[i];
//		a[i] = a[n - i - 1];
//		a[n - i - 1] = temp;
//		for (j = 0; j < n; j++) {
//			printf("%d ", a[j]);
//		}
//		printf("\n");
//	}
//
//}
//
//int main(void)
//{
//	int i;
//	int* x; /*�迭 ù ��° ����� ������*/
//	int nx; /*�迭 x�� ��� ����*/
//
//	printf("��� ���� : "); scanf_s("%d", &nx);
//	x = (int*)calloc(nx, sizeof(int)); /*��� ������ nx�� int�� �迭 x ����*/
//	printf("%d���� ������ �Է��ϼ���.\n", nx);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i); scanf_s("%d", &x[i]);
//	}
//	ary_reverse(x, nx);
//	printf("���� ������ �����մϴ�.\n");
//	free(x);
//
//	return 0;
//}