///*2. Ű�� �հ踦 ���ϴ� ���α׷�*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int sumof(const int a[], int n)
//{
//	int i;
//	int sum;
//	sum = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum + a[i];
//	}
//	return sum;
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
//	printf("�հ�� %d�Դϴ�.\n", sumof(height, num));
//	free(height);
//
//	return 0;
//}