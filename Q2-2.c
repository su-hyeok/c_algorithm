//키의 합계를 구하는 프로그램을 작성하세요
#include<stdio.h>
#include<stdlib.h>

int sumof(const int a[],int n){
    int i;
    int sum = 0;
    for (i = 0; i < n; i++){
        sum +=a[i]; 
    }
    return sum;
}

int main(void){
    int i;
    int *height;
    int number;
    printf("사람수: ");
    scanf("%d",&number);
    height = (int*)calloc(number,sizeof(int));
    printf("사람키를 입력하세요: ");
    for (i = 0; i < number; i++){
        printf("height[%d]",i);
        scanf("%d",&height[i]);
    }
    printf("키의 합계는%d입니다",sumof(height,number));
    free(height);
}