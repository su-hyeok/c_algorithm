//while문이 종료될 때 변수 i의 값이 n+1이 됨을 확인하세요
#include<stdio.h>
int main(){
    int i, n;
    int sum;
    puts("1부터 n까지의 합을 구합니다.");
    printf("n의 값 : ");
    scanf("%d",&n);
    sum  = 0;
    i = 1;
    while (i<=n){
     sum +=i;
     i++;
    }
    printf("1부터 %d까지의 합은 %d입니다.\n",n,sum);
    printf("i의 값은 %d입니다.\n",i);
}
