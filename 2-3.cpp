///*3. Ű�� ����� ���ϴ� ���α׷�
//������ �ƴ� �Ǽ��� ��հ��� ���մϴ�.*/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//double aveof(const int a[], int n)
//{
//	int i;
//	double sum;
//	sum = 0;
//	for (i = 0; i < n; i++) {
//		sum = sum + a[i];
//	}
//	double avg = sum / n;
//	return avg;
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
//	printf("����� %f�Դϴ�.\n", aveof(height, num));
//	free(height);
//
//	return 0;
//}