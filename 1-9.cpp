/*���� a, b�� �����Ͽ� �� ������ ��� ������ ���� ���ϴ� �Ʒ� �Լ��� �ۼ��ϼ���.*/

#include <stdio.h>

int sumof(int a, int b)
{
	int sum = 0;
	if (a < b) {
		for (a; a <= b; a++) {
			sum = sum + a;
		}
	}
	else if (a > b) {
		for (b; b <= a; b++) {
			sum = sum + b;
		}
	}
	else
		sum = a;
	return sum;
}

int main(void)
{
	int a, b;
	printf("a�� �� : "); scanf_s("%d", &a);
	printf("b�� �� : "); scanf_s("%d", &b);
	printf("%d���� %d������ ��� ������ ���� %d�Դϴ�.\n", a, b, sumof(a, b));
}