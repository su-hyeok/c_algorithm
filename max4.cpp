/*Q1.�� ���� �ִ��� ���ϴ� �Լ� max4�� �ۼ��ϼ���*/
#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	return max;

}

int main(void)
{
	int a, b, c, d;

	printf("�� ������ �ִ��� ���մϴ�\\n");
	printf("a�� ��: "); scanf_s("%d", &a);
	printf("b�� ��: "); scanf_s("%d", &b);
	printf("c�� ��: "); scanf_s("%d", &c);
	printf("d�� ��: "); scanf_s("%d", &d);

	printf("�ִ��� %d�Դϴ�\\n", max4(a, b, c, d));

	return 0;

}