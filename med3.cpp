/*Q4.�� ���� ��� ���� 13������ ��� ���տ� ���� �߾Ӱ��� ���Ͽ� ���*/
#include <stdio.h>

int med3(int a, int b, int c) {
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c) /*a�� b���� �۴ٴ� �� ����*/
		return a;
	else if (b > c) /*a�� b���� �۴ٴ� �� ����*/
		return c;
	else
		return b;
}

int main(void)
{
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 1, med3(3, 2, 1));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 2, med3(3, 2, 2));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 1, 2, med3(3, 1, 2));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 2, 3, med3(3, 2, 3));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 1, 3, med3(2, 1, 3));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 2, med3(3, 3, 2));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 3, 3, 3, med3(3, 3, 3));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 2, 3, med3(2, 2, 3));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 1, med3(2, 3, 1));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 2, med3(2, 3, 2));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 3, 2, med3(1, 3, 2));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 2, 3, 3, med3(2, 3, 3));
	printf("med3 (%d %d %d) = %d�Դϴ�.\n", 1, 2, 3, med3(1, 2, 3));
	return 0;
}