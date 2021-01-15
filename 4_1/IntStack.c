#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

int initialize(IntStack *s,int max){
    s ->ptr =0;
    if ((s->stk = calloc(max,sizeof(int))) == NULL){
        s->max = 0;
        return -1;
    }
    s -> max = max;
    return 0;
}
int push(IntStack *s,int x){
    if (s->ptr >= s->max){
        return -1;
    }else{
        s ->stk[s->ptr++] = x;
        return 0;
    }
}
int pop(IntStack *s,int *x){
    if (s->ptr<=0){
        return -1;
    }else{
        *x = s->stk[s->ptr--];
        return 0;
    }
}
int peek(IntStack *s, int *x){
    if (s->ptr<=0){
        return -1;
    }else{
        *x = s->stk[s->ptr-1];
        return 0;
    }
}
void clear(IntStack *s){
    s->ptr = 0;
}
int capacity(const IntStack *s){
    return s->max;
}
int size(const IntStack *s){
    return s->ptr;
}
int isempty(const IntStack *s){
    if (s->ptr<=0){
        return 1;
    }else{
        return 0;
    }
}
int isfull(const IntStack *s){
    if (s->ptr>=s->max){
        return 1;
    }else{
        return 0;
    }
}
int search(const IntStack *s, int x){
    for (int i = s->ptr-1; i >= 0; i--){
        if (s->stk[i] == x){
            return i;
        }
    return -1;
}
}

void Print(const IntStack *s){
	int i;
	for (i = 0; i < s->ptr; i++)		
		printf("%d ", s->stk[i]);
	putchar('\n');
}
void terminate(IntStack *s){
    if (s->stk != NULL){
        free(s->stk);
        s->max = 0;
        s->ptr =0;
    }
}