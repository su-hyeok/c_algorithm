//사람 키의 최솟값을 구하는 프로그램을 작성하세요
#include<stdio.h>
#include<stdlib.h>

int minof(const int a[], int n){
    int i;
    int min = a[0];
    for ( i = 0; i < n; i++){
        if (a[i]<min){
            min = a[i];
        }
    }
    return min;
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
    printf("최솟값은%d입니다",minof(height,number));
    free(height);
}