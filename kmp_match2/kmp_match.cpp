#include <stdio.h>
/*--- kmp������ ���ڿ��� �˻� ---*/
int kmp_match(const char txt[], const char pat[])
{
	int pt = 1;		/* txt Ŀ�� */
	int pp = 0;		/* pat Ŀ�� */
	int skip[1024]; /* �ǳʶٱ� ǥ */

	/* ǥ ����� */
	skip[pt] = 0;
	while (pat[pt] != '\0') {
		if (pat[pt] == pat[pp])
			skip[++pt] = ++pp;
		else if (pp == 0)
			skip[++pt] = pp;
		else
			pp = skip[pp];
	}

	/* �˻� */
	pt = pp = 0;
	while (txt[pt] != '\0' && pat[pp] != '\0') {
		if (txt[pt] == pat[pp]) {
			pt++; pp++;
		}
		else if (pp == 0)
			pt++;
		else
			pp = skip[pp];
	}

	if (pat[pp] == '\0')
		return pt - pp;

	return -1;
}

int main(void)
{
	int idx;
	char s1[256];		/* �ؽ�Ʈ */
	char s2[256];		/* ���� */

	puts("kmp��");
	printf("�ؽ�Ʈ : ");
	scanf_s("%s", &s1, 256);
	printf("���� : ");
	scanf_s("%s", &s2, 256);

	idx = kmp_match(s1, s2);	/* �ؽ�Ʈ(s1)���� ����(s2)�� ���Ʈ-���������� �˻��մϴ�. */
	if (idx == -1)
		puts("�ؽ�Ʈ�� ������ �����ϴ�.");
	else
		printf("%d��° ���ں��� match�մϴ�.\n", idx + 1);

	return 0;
}