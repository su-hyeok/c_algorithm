///*1. Ű�� �ּڰ��� ���ϴ� ���α׷�*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int minof(const int a[], int n)
//{
//	int i;
//	int min = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] < min) {
//			min = a[i];
//		}
//	}
//	return min;
//}
//
//int main(void)
//{
//	int i;
//	int* height;
//	int num;
//	printf("��� �� : "); scanf_s("%d", &num);
//	height = (int*)calloc(num, sizeof(int));
//	printf("%d ����� Ű�� �Է��ϼ���.\n", num);
//	for (i = 0; i < num; i++) {
//		printf("height[%d] : ", i); scanf_s("%d", &height[i]);
//	}
//	printf("�ּڰ��� %d�Դϴ�.\n", minof(height, num));
//	free(height);
//
//	return 0;
//}