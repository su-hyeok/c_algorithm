/* ��Ʈ ���ͷ� ���� ���� ǥ�� */
#include <stdio.h>
#include "BitSet.h"

enum { ADD, RMV, SCH };

/*--- ������ �Է� ---*/
int scan_data(int sw)
{
	int data;

	switch (sw) {
	case ADD: printf("�߰��� ������ : "); break;
	case RMV: printf("������ ������ : "); break;
	case SCH: printf("�˻��� ������ : "); break;
	}

	scanf_s("%d", &data);

	return data;
}

int main(void)
{
	BitSet s1 = BitSetNull;
	BitSet s2 = BitSetNull;

	while (1) {
		int m, x, idx;

		printf("s1 = "); PrintLn(s1);
		printf("s2 = "); PrintLn(s2);
		printf("(1) s1�� �߰� (2) s1���� ���� (3) s1���� �˻� (4) s1��s2 (5) ���� ����\n"
			"(6) s2�� �߰� (7) s2���� ���� (8) s2���� �˻� (9) s2��s1 (0) ���� : ");
		scanf_s("%d", &m);
		if (m == 0) break;
		switch (m) {
		case 1: x = scan_data(ADD); Add(&s1, x);	break; 	/* �߰� */
		case 2: x = scan_data(RMV); Remove(&s1, x);	break; 	/* ���� */
		case 3: x = scan_data(SCH); idx = IsMember(s1, x);	/* �˻� */
			printf("s1�� �����%s.\n", idx != 0 ? "���ϴ�" : "�� �ʽ��ϴ�"); break;
		case 4: s1 = s2; break;								/* s2�� s1�� ���� */
		case 5: printf("s1 == s2 = %s\n", s1 == s2 ? "true" : "false");
			printf("s1 & s2 = "); PrintLn(s1 & s2);
			printf("s1 | s2 = "); PrintLn(s1 | s2);
			printf("s1 - s2 = "); PrintLn(s1 & ~s2);
			/*��Ī ������ = ������ - ������*/
			printf("s1 | s2 - s1 & s2 = "); PrintLn((s1 | s2) - (s1 & s2));
			break;
		case 6: x = scan_data(ADD); Add(&s2, x); break;		/* �߰� */
		case 7: x = scan_data(RMV); Remove(&s2, x); break;	/* ���� */
		case 8: x = scan_data(SCH); idx = IsMember(s2, x);	/* �˻� */
			printf("s2�� �����%s.\n", idx != 0 ? "���ϴ�" : "�� �ʽ��ϴ�"); break;
		case 9: s2 = s1; break;								/* s1�� s2�� ���� */
		}
	}

	return 0;
}