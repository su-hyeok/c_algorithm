#ifndef ___IntStack
#define ___IntStack

typedef struct{
    int max; //스택의 최대 용량
    int ptr; //스택 포인터(스택에 쌓여있는 데이터의 개수)
    int *stk; //스택으로사용할 배열을 가리키는 포인터
}IntStack;

int initialize(IntStack *s,int max);

int push(IntStack *s,int x);

int pop(IntStack *s,int *x);

int peek(IntStack *s, int *x);

void clear(IntStack *s);

int capacity(const IntStack *s);

int size(const IntStack *s);

int isempty(const IntStack *s);

int isfull(const IntStack *s);

int search(const IntStack *s, int x);

void Print(const IntStack *s);

void terminate(IntStack *s);
#endif
