/* 'STRING"�� �����ϴ� ��� ������ ���� 16������ 2������ ��� */
#include <stdio.h>
#include <limits.h> /*�ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����*/

/*--- ���ڿ� ���� ���ڸ� 16������ 2������ ��� ---*/
void str_dump(const char *s) /*ù ��° ���� 'S'�� ���� �����͸� ��ȯ*/
{
	do {
		int i;
		/*�ʺ� ��� = (CHAR_BIT + 3) / 4 = 2, �� output : 2�ڸ� ��*/
		printf("%c %0*X ", *s, (CHAR_BIT + 3) / 4, *s);
		/*CHAR_BIT : ������ ��Ʈ �� */
		for (i = CHAR_BIT - 1; i >= 0; i--)
			/* 1. i��ŭ right shift
			2. 1U : unsigned int
			3. 1 & 2 ? TRUE : FALSE; */
			putchar(((*s >> i) & 1U) ? '1' : '0');
		putchar('\n');
	} while (*s++ != '\0'); /*�� ���ڸ� ���� ������*/
}

int main(void)
{
	str_dump("STRING"); /*���ڿ� ���ͷ� "STRING"*/
	return 0;
}

/*
1. �ʺ� ���
2. right shift
3. ���� ������
*/