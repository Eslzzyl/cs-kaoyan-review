#ifndef SEQ_LIST_H
#define SEQ_LIST_H

typedef int ElemType;

struct SeqList;

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