#include "seq_stack.h"

#include <iostream>

// 初始化栈
void InitStack_seq(SeqStack &S)
{
    S.top = 0;
}

// 判空
bool StackEmpty_seq(SeqStack &S)
{
    return S.top == 0;
}

// 入栈
bool Push_seq(SeqStack &S, ElemType x)
{
    if (S.top == MaxSize) {
        return false;
    }
    S.data[S.top++] = x;
    return true;
}

// 出栈
bool Pop_seq(SeqStack &S, ElemType &x)
{
    if (S.top == 0) {
        return false;
    }
    x = S.data[--S.top];
    return true;
}

// 获取栈顶元素
bool GetTop_seq(SeqStack &S, ElemType &x)
{
    if (S.top == 0) {
        return false;
    }
    x = S.data[S.top - 1];
    return true;
}

// 销毁栈
void DestroyStack_seq(SeqStack &S)
{
    S.top = 0;
}
