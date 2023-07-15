#ifndef SEQ_STACK_H
#define SEQ_STACK_H

typedef int ElemType;

struct SeqStack;

void InitStack_seq(SeqStack &S);

bool StackEmpty_seq(SeqStack &S);

bool Push_seq(SeqStack &S, ElemType x);

bool Pop_seq(SeqStack &S, ElemType &x);

bool GetTop_seq(SeqStack &S, ElemType &x);

void DestroyStack_seq(SeqStack &S);

#endif
