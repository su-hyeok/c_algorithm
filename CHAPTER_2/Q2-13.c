//y년m월d일을 나타내는 구조체를 반환하는 함수와 입력 날짜에서 n일 후가 몇일인지 출력하는 프로그램
#include<stdio.h>

typedef struct{
    int y;
    int m;
    int d;
} Date;

Date dateof(void){
    Date time1;
    printf("년, 월, 일 입력: ");
    scanf("%d%d%d",&time1.y,&time1.m,&time1.d);

    return time1;
}
void print1(Date t){
    printf("%d년 %d월 %d일 입니다.",t.y,t.m,t.d);
}
int after(Date g, int n){
    if (g.y % 4 == 0 && g.y % 100 !=0 || g.y % 400 ==0){
        if(g.m == 1 ||g.m == 3 ||g.m == 5 ||g.m == 7 ||g.m == 8 ||g.m == 10 ||g.m == 12){
            if (g.d + n > 31){
                g.d = g.d + n -31;
            }else{
                g.d = g.d + n;
            }
        }else if(g.m == 4 ||g.m == 6 ||g.m == 9 ||g.m == 11){
            if (g.d + n > 30){
                g.d = g.d + n -30 + 1;
            }else{
                g.d = g.d + n;
            }
        }else if(g.m == 2){
            if (g.d + n > 28){
                g.d = g.d + n -28;
            }else{
                g.d = g.d + n;
            }
        }
        
    }else{
        if(g.m == 1 ||g.m == 3 ||g.m == 5 ||g.m == 7 ||g.m == 8 ||g.m == 10 ||g.m == 12){
            if (g.d + n > 31){
                g.d = g.d + n -31;
            }else{
                g.d = g.d + n;
            }
        }else if(g.m == 4 ||g.m == 6 ||g.m == 9 ||g.m == 11){
            if (g.d + n > 30){
                g.d = g.d + n -30 + 1;
            }else{
                g.d = g.d + n;
            }
        }else if(g.m == 2){
            if (g.d + n > 29){
                g.d = g.d + n -29 + 1;
            }else{
                g.d = g.d + n;
            }
        }
    }
    return g.d;
}

int main(){
    int n;
    Date tt = dateof();
    print1(tt);
    printf("\n몇일 후를 원하십니까: ");
    scanf("%d",&n);
    printf("입력한 날짜에서 %d일 후는%d일 입니다",n,after(tt,n));
}
