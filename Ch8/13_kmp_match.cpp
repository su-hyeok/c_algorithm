#include <stdio.h>
/* o(n)의 시간복잡도 */
/*--- kmp법으로 문자열을 검색하는 프로그램 ---*/
int kmp_match(const char txt[], const char pat[])
{
	int pt = 1;		/* txt 커서 */
	int pp = 0;		/* pat 커서 */
	int skip[1024]; //테이블?

	/* LPS 테이블 만들기 */

	skip[pt] = 0; //skip[1] = 0;
	while (pat[pt] != '\0') { 
		if (pat[pt] == pat[pp]) //if(pat[1] == pat[0]) 일치하면
			skip[++pt] = ++pp;  //skip[2] = 1 카운트
		else if (pp == 0) //else if (0 == 0) 불일치, pp == 0
			skip[++pt] = pp; //skip[2] = 0 
		else //불일치, pp != 0
			pp = skip[pp]; 
	}

	/* 검색 */
	pt = pp = 0;
	while (txt[pt] != '\0' && pat[pp] != '\0') { 
		if (txt[pt] == pat[pp]) { /* 일치 */
			pt++; pp++; /* 다음 문자 비교 */
		}
		else if (pp == 0)
			pt++; /* 탐색 idx 증가*/
		else
			pp = skip[pp];
	}

	if (pat[pp] == '\0') /* 해당 인덱스가 패턴의 끝과 일치? */
		return pt - pp; /* 검색 성공 > 인덱스 반환 */

	return -1; /* 검색 실패 */
}

int main(void)
{
	int idx;
	char s1[256];		/* 텍스트 */
	char s2[256];		/* 패턴 */
	
	puts("kmp법");
	printf("텍스트 : ");
	scanf_s("%s", &s1, 256);
	printf("패턴 : ");
	scanf_s("%s", &s2, 256);
	
	idx = kmp_match(s1, s2);	/* 텍스트(s1)에서 패턴(s2)을 브루트-포스법으로 검색합니다. */
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다.");
	else
		printf("%d번째 문자부터 match합니다.\n", idx + 1);
	
	return 0;
}