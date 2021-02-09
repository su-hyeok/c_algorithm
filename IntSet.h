#pragma once
#ifndef ___IntStack
#define ___IntStack

typedef struct {
	int max;/*스택 용량*/
	int num;/*스택 포인터*/
	int *set;/*스택의 첫 요소에 대한 포인터*/
}IntSet;

int Initialize(IntSet *s, int max);
int IsMember(const IntSet* s, int n);

void Add(IntSet* s, int n);

void Remove(IntSet* s, int n);

int Capacity(const IntSet *s);
int Size(const IntSet *s);
void Assign(IntSet *s1, const IntSet *s2);
int Equal(const IntSet* s1, const IntSet* s2);
IntSet* Union(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Intersection(IntSet* s1, const IntSet* s2, const IntSet* s3);
IntSet* Difference(IntSet* s1, const IntSet* s2, const IntSet* s3);


void Print(const IntSet* s);
void PrintLn(const IntSet* s);
void Terminate(IntSet* s);
#endif

