/* Q4 ���ڿ��� ���� ���ϱ�(a) */
//strlen �� '\0' NULL ���ڸ� ���� ������ ���ڿ��� ���̸� ����մϴ�.
#include <stdio.h>

size_t strlen(const char *s)
{
	size_t len = 0;

	while (*(s + len) != '\0') 
		len++;
	return len;
}

int main(void)
{
	char str[256];

	printf("���ڿ���");
	scanf_s("%s", &str, 256);

	printf("���ڿ��� ���̴� %d�Դϴ�.\n", strlen(str));

	return 0;
}