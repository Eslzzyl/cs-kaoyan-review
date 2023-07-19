#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

typedef int ElemType;

struct Node {
    ElemType data;
    Node *next;
};

struct SingleLinkedList {
    unsigned length;
    Node *node;
};

void InitList_single_link(SingleLinkedList &L);

unsigned Length_single_link(SingleLinkedList &L);

unsigned LocateElem_single_link(SingleLinkedList &L, ElemType e);

bool GetElem_single_link(SingleLinkedList &L, unsigned i, ElemType &e);

bool ListInsert_single_link(SingleLinkedList &L, unsigned i, ElemType e);

bool ListDelete_single_link(SingleLinkedList &L, unsigned i, ElemType &e);

void PrintList_single_link(SingleLinkedList &L);

bool Empty_single_link(SingleLinkedList &L);

void DestroyList_single_link(SingleLinkedList &L);

#endif