///* Q2-2 2-5 �ǽ��� ������ Ű�� �հ� ���ϴ� ���α׷� */

#include <stdio.h>
#include <stdlib.h>

/*--- ��ڼ� n�� �迭 a�� ����� �հ踦 ���մϴ�. ---*/
int sumof(const int a[], int n)
{
	int i;
	int sum = 0; /* �հ� */

	for (i = 0; i <n; i++)
		sum += a[i];

	return sum;
}

int main(void)
{
	int i;
	int *height;	/*������ int*/
	int number;			

	printf("�ο� : ");
	scanf_s("%d", &number);

	height = (int*)calloc(number, sizeof(int)); 

	printf("%d ���� Ű�� �Է��ϼ���.\n", number);
	for (i = 0; i < number; i++) {
		printf("height [%d] : ", i);
		scanf_s("%d", &height[i]);
	}

	printf("�հ�� %d�Դϴ�.\n", sumof(height, number));

	free(height); /*height ���� */

	return 0;
}