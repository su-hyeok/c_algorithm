//네 값의 최소값을 구하는 함수 min4를 작성하세요
#include<stdio.h>
int min4(int a, int b, int c, int d){
 int min = a;
 if(b<min) min = b;
 if(c<min) min = c;
 if(d<min) min = d;
 return min;
};
int main(){
 printf("min4(%d,%d,%d,%d) = %d\n", 4,3,2,1,min4(4,3,2,1));
};