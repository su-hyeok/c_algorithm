//이진검색 알고리즘(오름차순)에서 같은 수가 있을때 가장 인덱스가 낮은 곳을 출력하는 프로그램
#include<stdio.h>
#include<stdlib.h>

int bin_search2(const int a[], int n, int key){
    int pl = 0;
    int pr = n-1;
    int pc;
    do{
        pc = (pl + pr)/2;
        if (a[pc] == key){
            for (int i = n; i >= 0; i--){
                if (a[pc -1] == key){
                    pc = pc - 1;
                }else{ 
                    break;
                    }
            }
            return pc;
        }else if (a[pc]< key){
            pl = pc + 1;
            }else{
                pr =pc - 1;
                }

    } while (pl <= pr);
    return -1;
}
int main(){
    int n;
    int *x;
    int find1;
    int key;
    printf("이진검색");
    printf("요소 개수: ");
    scanf("%d",&n);
    x = calloc(n,sizeof(int));
    printf("오름차순으로 입력하세요: ");
    printf("x[%d]: ",x[0]);
    scanf("%d",&x[0]);
    for (int i = 1; i < n; i++){
        do{
        printf("x[%d]: ",i);
        scanf("%d",&x[i]);
        } while (x[i]<x[i - 1]);
    }
    printf("검색 값: ");
    scanf("%d",&find1);
    key = bin_search2(x,n,find1);
    if (key == -1){
        printf("검색에 실패했습니다.");
    }else{
        printf("검색값의 최소 위치는 x[%d]입니다",key);
    }
    free(x);
}
