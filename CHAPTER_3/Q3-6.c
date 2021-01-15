//요소의 값이 내림차순으로 정렬된 long형 배열에서의 검색을 bsearch함수를 사용하여 프로그램을 작성하세요
#include<stdio.h>
#include<stdlib.h>

int compare(const int *a,const int *b){
    if (*a<*b){
        return 1;
    }else if (*a>*b){
        return -1;
    }else{
        return 0;
    }
}
int main(){
    int n,ky,i;
    int *x,*p;
    printf("bsearch 함수를 이용하여 검색");
    printf("요소 개수: ");
    scanf("%d",&n);
    printf("내림차순으로 입력하세요");
    x = calloc(n,sizeof(long));
    printf("x[0]:");
    scanf("%d",&x[0]);
    do{
        for (i = 1; i < n; i++){
            printf("x[%d]:",i);
            scanf("%d",&x[i]);
        }
    } while (x[i] > x[i-1]);
    printf("검색값: ");
    scanf("%d",&ky);
    p = bsearch(&ky,x,n,sizeof(long),(int(*)(const void *,const void *))compare);
    if (p == NULL){
        printf("검색대상을 찾을 수 없습니다");
    }else{
        printf("%d는 x[%d]에 있습니다.",ky,(int)(p-x));
    }
    free(x);
}