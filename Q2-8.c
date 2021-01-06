//배열b의 모든 요소를 배열a에 복사하는 함수를 작성하세요
#include<stdio.h>
#include<stdlib.h>

void ary_copy(int a[],const int b[],int n){
    int i;
    int t;
    for (i = 0; i < n; i++){
        t = b[i];
        a[i] = t;
        printf("%3d",a[i]);
    }
    printf("\n");
}

int main(){
    int *x,*y;
    int number;
    printf("요소의 개수를 입력하세요: ");
    scanf("%3d",&number);
    
    x = (int*)calloc(number,sizeof(int));
    y = (int*)calloc(number,sizeof(int));

    for (int i = 0; i < number; i++){
        printf("y[%d]: ",i);
        scanf("%3d",&y[i]);
    }
    ary_copy(x,y,number);
    free(x);
    free(y);
}