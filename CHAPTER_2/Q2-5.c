//배열의 요소를 역순으로 정렬하는 프로그램 과정을 일일히 출력하는 프로그램을 작성하세요
#include<stdio.h>
#include<stdlib.h>

#define swap(type,x,y) do{type t = x; x=y; y=t;}while(0)

void ary_reverse(int a[], int n, int i ){
    int j;
    swap(int, a[i], a[n - i - 1]);
    for (j = 0; j < n; j++){
        printf("%3d",a[j]);
    }
    
}
int main(){
    int i;
    int *x;
    int number;
    printf("요소 개수: ");
    scanf("%d",&number);
    x = (int*)calloc(number,sizeof(int));
    for (i = 0; i < number; i++){
        printf("a[%d] : ",i);
        scanf("%d",&x[i]);
    }
    printf("\n");
    for ( i = 0; i < number; i++){
        printf("%3d",x[i]);
    }
    printf("\n");
    for (i = 0; i < number/2; i++){
        printf("a[%d]와 a[%d]를 교환합니다.\n",i,number - i - 1);
        ary_reverse(x,number,i);
        printf("\n");
    }
    printf("역순배열을 종료합니다.");
}