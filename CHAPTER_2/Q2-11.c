//한 해의 지난 날수를 구하는 프로그램
#include<stdio.h>

int mdays[][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

int isleap(int year){
    return year % 4 == 0 && year % 100 !=0 || year % 400 ==0;
}

int dayofyear(int y, int m,int d){
    int t = 0;
    while (t < m){
        d += mdays[isleap(y)][t - 1]; 
        t++;
    }
    return d;
}

int main(){
    int year;
    int month;
    int day;
    printf("년: ");
    scanf("%d",&year);
    printf("월: ");
    scanf("%d",&month);
    printf("일: ");
    scanf("%d",&day);
    printf("%d년의 %d일째 입니다",year,dayofyear(year,month,day));
}