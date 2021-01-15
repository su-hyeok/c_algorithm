//선형검색(보초법 이용) 프로그램
#include<stdio.h>
#include<stdlib.h>
int search(int a[],int nx,int fd){
    int i;
    a[nx] = fd;
    for (i = 0; i < nx + 1; i++){
        if (a[i] == fd){
            break;
        }
        i++;
    }
    return i == nx ? -1 : i;
}

int main(){
    int n;
    int *x;
    int find1;
    int key;
    printf("선형검색(보초법)");
    printf("요소 개수: ");
    scanf("%d",&n);
    x = calloc(n+1,sizeof(int));
    for (int i = 0; i < n; i++){
        printf("x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    printf("검색 값: ");
    scanf("%d",&find1);
    key = search(x,n,find1);
    if (key == -1){
        printf("검색에 실패했습니다");
    }else{
        printf("%d는 x[%d]에 있습니다",find1,key);
    }
    free(x);
}