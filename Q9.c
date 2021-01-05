// 정수 a,b를 포함하여 그 사이의 모든 정수의 합을 구하는 아래함수를 작성하세요.
#include<stdio.h>

int sumof(int a, int b){
    int sum;
    if (a>b){
        sum = 0;
        for (int i = b; i <= a; i++){
            sum += i;
        }
    }else if (a<b){
        sum = 0;
        for (int i = a; i <= b; i++){
            sum += i;
        }
    }
    return sum;
}

int main(){
    int n,m;
    printf("두 숫자를 입력하세요: ");
    scanf("%d %d",&n,&m);
    printf("두숫자를 포함한 그 사이의 모든 정수의 합은 %d 입니다",sumof(n,m));
}