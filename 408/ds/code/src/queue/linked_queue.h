#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

typedef int ElemType;

struct Node {
    ElemType data;
    Node *next;
};

struct SeqQueue {
    unsigned length;
    Node *front, *rear;
};

void InitQueue_linked(SeqQueue &Q);

bool QueueEmpty_linked(SeqQueue &Q);

bool EnQueue_linked(SeqQueue &Q, ElemType x);

bool DeQueue_linked(SeqQueue &Q, ElemType &x);

bool GetHead_linked(SeqQueue &Q, ElemType &x);

void DestroyQueue_linked(SeqQueue &Q);

#endif
