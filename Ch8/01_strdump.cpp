/* 'STRING"을 구성하는 모든 문자의 값을 16진수와 2진수로 출력 */
#include <stdio.h>
#include <limits.h> /*자료형의 최댓값과 최솟값이 정의된 헤더 파일*/

/*--- 문자열 안의 문자를 16진수와 2진수로 출력 ---*/
void str_dump(const char *s) /*첫 번째 글자 'S'에 대한 포인터를 반환*/
{
	do {
		int i;
		/*너비 사양 = (CHAR_BIT + 3) / 4 = 2, 즉 output : 2자리 수*/
		printf("%c %0*X ", *s, (CHAR_BIT + 3) / 4, *s);
		/*CHAR_BIT : 문자의 비트 수 */
		for (i = CHAR_BIT - 1; i >= 0; i--)
			/* 1. i만큼 right shift
			2. 1U : unsigned int
			3. 1 & 2 ? TRUE : FALSE; */
			putchar(((*s >> i) & 1U) ? '1' : '0');
		putchar('\n');
	} while (*s++ != '\0'); /*널 문자를 만날 때까지*/
}

int main(void)
{
	str_dump("STRING"); /*문자열 리터럴 "STRING"*/
	return 0;
}

/*
1. 너비 사양
2. right shift
3. 조건 연산자
*/