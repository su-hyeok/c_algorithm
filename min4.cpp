/*Q3.�� ���� �ּڰ��� ���ϴ� �Լ� min4�� �ۼ��ϼ���*/
#include <stdio.h>

int min4(int a, int b, int c, int d)
{
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;

	return min;
}

int main(void)
{
	int a, b, c, d;

	printf("�� ������ �ּڰ��� ���մϴ�.\n");
	printf("a�� ��: "); scanf_s("%d", &a);
	printf("b�� ��: "); scanf_s("%d", &b);
	printf("c�� ��: "); scanf_s("%d", &c);
	printf("d�� ��: "); scanf_s("%d", &d);

	printf("�ּڰ��� %d �Դϴ�.", min4(a, b, c, d));
	return 0;
}