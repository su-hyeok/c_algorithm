﻿/* 브루트-포스법 요약
1. 가능한 모든 경우에 대해 모두 직접 해 보는 방법
2. 효율은 좋지 않음 */
#include <stdio.h>

/*--- 브루트-포스법으로 문자열을 검색하는 함수 ---*/
int bf_match(const char txt[], const char pat[])
{
	int pt = 0;		/* 텍스트 커서 */
	int pp = 0;		/* 패턴 커서 */
	/* 텍스트 : 문자열 원본
	패턴 : 검색할 문자열 */

	while (txt[pt] != '\0' && pat[pp] != '\0') {
		if(txt[pt] == pat[pp]){ /* 일치하면 */
			pt++; /* 텍스트 두번째 문자*/
			pp++; /* 패턴 두번째 문자 */
		}
		else { /* 불일치 > 검사 중단 */
			pt = pt - pp + 1; /* 텍스트 : 한 칸 뒤로 */
			pp = 0; /* 패턴 첫번째 문자 */
		}
	}
	 
	if (pat[pp] == '\0') /* 패턴의 끝까지 검색 완료*/
		return pt - pp; /* 검색 성공 : 텍스트의 위치(인덱스) 반환 */


	return -1; /* 검색 실패 */
}

int main(void)
{
	int idx;
	char s1[256];		/* 텍스트 */
	char s2[256];		/* 패턴 */

	puts("브루트-포스법");
	printf("텍스트 : ");
	scanf_s("%s", &s1, 256); /* 사용자가 입력한 문자의 개수가 메모리의 크기를 넘어서는 문제를 막기 위해 사용할 메모리의 크기를 명시 */
	printf("패턴 : ");
	scanf_s("%s", &s2, 256);
	
	/* 브루트-포스법 결과 : 인덱스 반환*/
	idx = bf_match(s1, s2);	/* 텍스트(s1)에서 패턴(s2)을 브루트-포스법으로 검색합니다. */
	if (idx == -1)
		puts("텍스트에 패턴이 없습니다.");
	else
		printf("%d번째 문자부터 match합니다.\n", idx + 1);
	
	return 0;
}

