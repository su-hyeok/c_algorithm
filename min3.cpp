/*Q2.�� ���� �ּڰ��� ���ϴ� �Լ� min3�� �ۼ��ϼ���*/
#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;

	return min;
}

int main(void)
{
	int a, b, c;

	printf("�� ������ �ּڰ��� ���մϴ�.\n");
	printf("a�� ��: "); scanf_s("%d", &a);
	printf("b�� ��: "); scanf_s("%d", &b);
	printf("c�� ��: "); scanf_s("%d", &c);

	printf("�ּڰ��� %d �Դϴ�.", min3(a, b, c));
	return 0;
}