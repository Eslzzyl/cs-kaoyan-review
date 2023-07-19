#include "single_linked_list.h"

#include <iostream>

// 初始化表
void InitList_single_link(SingleLinkedList &L)
{
    L.length = 0;
    L.node = nullptr;
}

// 获取指定索引下的元素
bool GetElem_single_link(SingleLinkedList &L, unsigned i, ElemType &e)
{
    if (i < 0 || i >= L.length) {
        return false;
    }
    auto p = L.node;
    for (unsigned j = 0; j < i; ++j) {
        p = p->next;
    }
    e = p->data;
    return true;
}

// 插入元素
bool ListInsert_single_link(SingleLinkedList &L, unsigned i, ElemType e)
{
    if (i < 0 || i > L.length) {
        return false;
    }
    auto p = L.node;
    for (unsigned j = 0; j < i - 1; ++j) {
        p = p->next;
    }
    auto node = new Node;
    node->data = e;
    node->next = p->next;
    p->next = node;
    ++L.length;
    return true;
}

// 删除元素
bool ListDelete_single_link(SingleLinkedList &L, unsigned int i, ElemType &e)
{
    if (i < 0 || i > L.length) {
        return false;
    }
    auto p = L.node;
    for (unsigned j = 0; j < i - 1; ++j) {
        p = p->next;
    }
    auto q = p->next;
    e = q->data;
    p->next = q->next;
    delete q;
    --L.length;
    return true;
}

// 打印表
void PrintList_single_link(SingleLinkedList &L)
{
    auto p = L.node;
    while (p) {
        std::cout << p->data << " " << std::endl;
        p = p->next;
    }
    std::cout << std::endl;
}

// 判空
bool Empty_single_link(SingleLinkedList &L)
{
    return L.length == 0;
}

// 销毁表
void DestroyList_single_link(SingleLinkedList &L)
{
    auto p = L.node;
    while (p) {
        auto q = p->next;
        delete p;
        p = q;
    }
    L.length = 0;
    L.node = nullptr;
}