#ifndef SEQ_QUEUE_H
#define SEQ_QUEUE_H

typedef int ElemType;

const static unsigned MaxSize = 100;

struct SeqQueue {
    ElemType data[MaxSize];
    unsigned front, rear;
};

void InitQueue_seq(SeqQueue &Q);

bool QueueEmpty_seq(SeqQueue &Q);

bool EnQueue_seq(SeqQueue &Q, ElemType x);

bool DeQueue_seq(SeqQueue &Q, ElemType &x);

bool GetHead_seq(SeqQueue &Q, ElemType &x);

void DestroyQueue_seq(SeqQueue &Q);

#endif
