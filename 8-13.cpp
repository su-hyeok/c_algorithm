///* Q13 strstr �Լ��� ���� �Լ� */
#include <stdio.h>
#include <string.h>

char *str_str(const char *s1, const char *s2)
{
	const char *p1 = s1;
	const char *p2 = s2;

	while (*p1 && *p2) {
		if (*p1 == *p2) {
			p1++;
			p2++;
		}
		else {
			p1 -= p2 - s2 - 1;
			p2 = s2;
		}
	}
	return *p2 ? NULL : (char *)(p1 - (p2 - s2));
}

int main(void)
{
	char s1[256], s2[256];
	char *p;

	puts("strstr �Լ�");

	printf("�ؽ�Ʈ: ");
	scanf_s("%s", s1);

	printf("����: ");
	scanf_s("%s", s2);

	p = str_str(s1, s2);

	if (p == NULL)
		printf("�ؽ�Ʈ�� ������ �����ϴ�.\n");
	else {
		int ofs = p - s1;
		printf("\n%s\n",	s1);
		printf("%*s|\n",	ofs, "");
		printf("%*s%s\n",	ofs, "", s2);
	}

	return 0;
}