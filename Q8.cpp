/*Q8.���콺�� ���� ��� ����� 1���� N������ ���� ��*/
#include <stdio.h>

int main(void) {
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� ��: ");
	scanf_s("%d", &n);
	sum = (1 + n) * (n / 2);

	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);
	return 0;

}