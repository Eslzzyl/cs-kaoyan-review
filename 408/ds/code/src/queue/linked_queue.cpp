#include "linked_queue.h"

// 初始化队列
void InitQueue_linked(SeqQueue &Q) {
    Q.length = 0;
    Q.front = nullptr;
    Q.rear = nullptr;
}

// 判断队列是否为空
bool QueueEmpty_linked(SeqQueue &Q) {
    return Q.length == 0;
}

// 入队
bool EnQueue_linked(SeqQueue &Q, ElemType x) {
    Node *p = new Node;
    p->data = x;
    p->next = nullptr;
    if (Q.length == 0) {
        Q.front = p;
        Q.rear = p;
    } else {
        Q.rear->next = p;
        Q.rear = p;
    }
    Q.length++;
    return true;
}

// 出队
bool DeQueue_linked(SeqQueue &Q, ElemType &x) {
    if (Q.length == 0) {
        return false;
    }
    Node *p = Q.front;
    x = p->data;
    Q.front = p->next;
    delete p;
    Q.length--;
    return true;
}

// 获取队头元素
bool GetHead_linked(SeqQueue &Q, ElemType &x) {
    if (Q.length == 0) {
        return false;
    }
    x = Q.front->data;
    return true;
}

// 销毁队列
void DestroyQueue_linked(SeqQueue &Q) {
    Node *p = Q.front;
    while (p != nullptr) {
        Node *q = p;
        p = p->next;
        delete q;
    }
    Q.length = 0;
    Q.front = nullptr;
    Q.rear = nullptr;
}