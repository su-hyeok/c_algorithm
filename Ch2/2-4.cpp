///*Ű�� ��� ���� ������ ������ �� Ű�� �ִ��� ���ϴ� ���α׷�
//��� ���� 5 �̻� 20 ������ ������ �Է��ϼ���.*/
//
//#include <time.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int maxof(const int a[], int n)
//{
//	int i;
//	int max = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	return max;
//}
//
//int main(void)
//{
//	int i;
//	int* height = NULL;
//	srand((unsigned int)time(NULL)); /*�ð����� ������ seed �ʱ�ȭ*/
//	int num = (rand() % 21) + 5; /*5 ~ 20�� ���� ���� - ����*/
//	height = (int*)calloc(num, sizeof(int)); /*��� ������ num�� �迭 ����*/
//	for (i = 0; i < num; i++) {
//		height[i] = (rand() % 90) + 100; /*100 ~ 189�� ���� ���� - ����*/
//		printf("height[%d] = %d\n", i, height[i]);
//	}
//	printf("�ִ��� %d�Դϴ�.\n", maxof(height, num));
//	free(height); /*�迭 height�� ����*/
//
//	return 0;
//}