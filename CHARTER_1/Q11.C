//입력한 숫자의 자리수를 출력하는 프로그램 작성
#include<stdio.h>

int main(){
    int n;
    int i = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d",&n);
    while (n != 0){
        n = n/10;
        ++i;
    }
    printf("입력한 숫자의 자리수는 %d자리 입니다",i);
}