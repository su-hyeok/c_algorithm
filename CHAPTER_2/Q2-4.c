//사람과 키의 값을 난수로 받아 키의 최대값을 구하는 프로그램을 작성하세요
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int maxof(const int a[], int n){
    int i;
    int max = a[0];
    for ( i = 0; i < n; i++){
        if (a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main(void){
    srand(time(NULL));
    int i;
    int *height;
    int number = 0;
    printf("사람수 난수발생\n");
    while (number<=5 || number>=20){
        number = rand();
    }
    printf("사람수는 %d 입니다\n",number);
    height = (int*)calloc(number,sizeof(int));
    for (i = 0; i < number; i++){
        height[i] = 100 + rand()%90;
        printf("height[%d] = %d\n",i,height[i]);
    }
    printf("최대값은%d입니다",maxof(height,number));
    free(height);
}