#ifndef SEQ_LIST_H
#define SEQ_LIST_H

typedef int ElemType;

const static unsigned INITSIZE = 100;

// 动态分配的顺序表
struct SeqList {
    ElemType *data;
    unsigned length;
    unsigned capacity;
};

void InitList_seq(SeqList &L);

unsigned Length_seq(SeqList &L);

unsigned LocateElem_seq(SeqList &L, ElemType e);

bool GetElem_seq(SeqList &L, unsigned i, ElemType &e);

bool ListInsert_seq(SeqList &L, unsigned i, ElemType e);

bool ListDelete_seq(SeqList &L, unsigned i, ElemType &e);

void PrintList_seq(SeqList &L);

bool Empty_seq(SeqList &L);

void DestroyList_seq(SeqList &L);

#endif