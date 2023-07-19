#include "seq_queue.h"

// 初始化队列
void InitQueue_seq(SeqQueue &Q) {
    Q.front = 0;
    Q.rear = 0;
}

// 判断队列是否为空
bool QueueEmpty_seq(SeqQueue &Q) {
    return Q.front == Q.rear;
}

// 入队
bool EnQueue_seq(SeqQueue &Q, ElemType x) {
    if ((Q.rear + 1) % MaxSize == Q.front) {
        return false;
    }
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize;
    return true;
}

// 出队
bool DeQueue_seq(SeqQueue &Q, ElemType &x) {
    if (Q.front == Q.rear) {
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

// 获取队头元素
bool GetHead_seq(SeqQueue &Q, ElemType &x) {
    if (Q.front == Q.rear) {
        return false;
    }
    x = Q.data[Q.front];
    return true;
}

// 销毁队列
void DestroyQueue_seq(SeqQueue &Q) {
    Q.front = 0;
    Q.rear = 0;
}