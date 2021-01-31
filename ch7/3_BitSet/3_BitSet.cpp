/* 비트 벡터로 정수 집합 표현 */
#include <stdio.h>
#include "BitSet.h"

enum { ADD, RMV, SCH };

/*--- 데이터 입력 ---*/
int scan_data(int sw)
{
	int data;

	switch (sw) {
	case ADD: printf("추가할 데이터 : "); break;
	case RMV: printf("삭제할 데이터 : "); break;
	case SCH: printf("검색할 데이터 : "); break;
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
		printf("(1) s1에 추가 (2) s1에서 삭제 (3) s1에서 검색 (4) s1←s2 (5) 여러 연산\n"
			"(6) s2에 추가 (7) s2에서 삭제 (8) s2에서 검색 (9) s2←s1 (0) 종료 : ");
		scanf_s("%d", &m);
		if (m == 0) break;
		switch (m) {
		case 1: x = scan_data(ADD); Add(&s1, x);	break; 	/* 추가 */
		case 2: x = scan_data(RMV); Remove(&s1, x);	break; 	/* 삭제 */
		case 3: x = scan_data(SCH); idx = IsMember(s1, x);	/* 검색 */
			printf("s1에 들어있%s.\n", idx != 0 ? "습니다" : "지 않습니다"); break;
		case 4: s1 = s2; break;								/* s2를 s1에 대입 */
		case 5: printf("s1 == s2 = %s\n", s1 == s2 ? "true" : "false");
			printf("s1 & s2 = "); PrintLn(s1 & s2);
			printf("s1 | s2 = "); PrintLn(s1 | s2);
			printf("s1 - s2 = "); PrintLn(s1 & ~s2);
			/*대칭 차집합 = 합집합 - 교집합*/
			printf("s1 | s2 - s1 & s2 = "); PrintLn((s1 | s2) - (s1 & s2));
			break;
		case 6: x = scan_data(ADD); Add(&s2, x); break;		/* 추가 */
		case 7: x = scan_data(RMV); Remove(&s2, x); break;	/* 삭제 */
		case 8: x = scan_data(SCH); idx = IsMember(s2, x);	/* 검색 */
			printf("s2에 들어있%s.\n", idx != 0 ? "습니다" : "지 않습니다"); break;
		case 9: s2 = s1; break;								/* s1을 s2에 대입 */
		}
	}

	return 0;
}