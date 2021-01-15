//키의 평균값을 구하는 프로그램을 작성하세요
#include<stdio.h>
#include<stdlib.h>

double aveof(const int a[],int n){
    int i;
    float sum = 0;
    float average;
    for (i = 0; i < n; i++){
        sum +=a[i]; 
    }
    average = sum / n;
    return average;
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
    printf("키의 평균값은%f입니다",aveof(height,number));
    free(height);
}