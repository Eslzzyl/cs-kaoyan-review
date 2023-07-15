#ifndef LINKED_STACK_H
#define LINKED_STACK_H

typedef int ElemType;

struct LinkedStack;

void InitStack_linked(LinkedStack &S);

bool StackEmpty_linked(LinkedStack &S);

bool Push_linked(LinkedStack &S, ElemType x);

bool Pop_linked(LinkedStack &S, ElemType &x);

bool GetTop_linked(LinkedStack &S, ElemType &x);

void DestroyStack_linked(LinkedStack &S);

#endif
