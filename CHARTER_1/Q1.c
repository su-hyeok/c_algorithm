//네 값의 최대값을 구하는 함수 max4를 작성하세요
#include<stdio.h>
int max4(int a, int b, int c, int d){
 int max = a;
 if(b>max) max = b;
 if(c>max) max = c;
 if(d>max) max = d;
 return max;
};
int main(){
 printf("max4(%d,%d,%d,%d) = %d\n", 4,3,2,1,max4(4,3,2,1));
};