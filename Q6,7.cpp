/*Q6. while, for���� ����� �� ���� i���� n+1�� ���� Ȯ��*/
#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�."); /*�ڵ����� �� �ٲ�, ���ڿ� ��Ÿ��*/
	printf("n�� ��: "); scanf_s("%d", &n);
	sum = 0;
	i = 1;

	while (i <= n) { /*���� �ϳ��� ���� for�� ��� ����*/
		sum += i;
		i++;
	}

	/*for �� ����� ��
	sum = 0;
	for (i = 1; i <= n; i++) {
		sum += i;
	}*/

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	printf("���� i�� ���� %d�̰� n + 1�� %s.\n", i, (i == n + 1) ? "�����ϴ�." : "���� �ʽ��ϴ�.");

	return 0;
}