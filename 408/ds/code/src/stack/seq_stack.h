#ifndef SEQ_STACK_H
#define SEQ_STACK_H

typedef int ElemType;

const static unsigned MaxSize = 50;

struct SeqStack {
    ElemType data[MaxSize];     // 采用固定长度
    unsigned top;
};

void InitStack_seq(SeqStack &S);

bool StackEmpty_seq(SeqStack &S);

bool Push_seq(SeqStack &S, ElemType x);

bool Pop_seq(SeqStack &S, ElemType &x);

bool GetTop_seq(SeqStack &S, ElemType &x);

void DestroyStack_seq(SeqStack &S);

#endif
