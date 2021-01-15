//세 값의 최소값을 구하는 함수 min4를 작성하세요
#include<stdio.h>
int min3(int a, int b, int c){
 int min = a;
 if(b<min) min = b;
 if(c<min) min = c;
 return min;
};
int main(){
 printf("min3(%d,%d,%d) = %d\n", 4,3,2,min3(4,3,2));
};