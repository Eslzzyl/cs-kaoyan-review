#include "linked_stack.h"

#include <iostream>

// 初始化栈
void InitStack_linked(LinkedStack &S)
{
    S.length = 0;
    S.top = nullptr;
}

// 判空
bool StackEmpty_linked(LinkedStack &S)
{
    return S.length == 0;
}

// 入栈
bool Push_linked(LinkedStack &S, ElemType x)
{
    Node *p = new Node;
    if (p == nullptr) {
        return false;
    }
    p->data = x;
    p->next = S.top;
    S.top = p;
    ++S.length;
    return true;
}

// 出栈
bool Pop_linked(LinkedStack &S, ElemType &x)
{
    if (S.length == 0) {
        return false;
    }
    Node *p = S.top;
    x = p->data;
    S.top = p->next;
    delete p;
    --S.length;
    return true;
}

// 取栈顶元素
bool GetTop_linked(LinkedStack &S, ElemType &x)
{
    if (S.length == 0) {
        return false;
    }
    x = S.top->data;
    return true;
}

// 销毁栈
void DestroyStack_linked(LinkedStack &S)
{
    Node *p = S.top;
    while (p != nullptr) {
        Node *q = p->next;
        delete p;
        p = q;
    }
    S.length = 0;
    S.top = nullptr;
}
