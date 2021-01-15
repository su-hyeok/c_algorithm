//세 값의 대소관계 13종류의 모든 조합에 대해 중앙값을 구하여 출력하는 프로그램을 작성하세요
#include<stdio.h>
int med3(int a,int b, int c){
 if (a>=b){
    if (b >=c){
        return b;
    }else if (b<=c){
        if (a>=c){
            return c;
        }else return a;
    }
 }else if(a<=b){
    if (b <=c){
        return b;
    }else if (b>=c){
        if (a>=c){
            return a;
        }else return c;
    }
    }
};

int main(){
    printf("med3(%d,%d,%d) = %d\n",4,5,6,med3(4,5,6));
    printf("med3(%d,%d,%d) = %d\n",5,4,6,med3(5,4,6));
    printf("med3(%d,%d,%d) = %d\n",5,3,2,med3(5,3,2));
};