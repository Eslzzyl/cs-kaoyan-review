#include "seq_list.h"

#include <algorithm>
#include <iostream>

// 初始化顺序表
void InitList_seq(SeqList &L) {
    L.length = 0;
    L.capacity = INITSIZE;
    L.data = new ElemType[L.capacity];
}

// 返回表长
unsigned Length_seq(SeqList &L) {
    return L.length;
}

// 查找指定元素的索引
unsigned LocateElem_seq(SeqList &L, ElemType e) {
    for (unsigned i = 0; i < L.length; ++i) {
        if (L.data[i] == e) {
            return i;   // 王道书这里写的是i+1
        }
    }
    return -1;
}

// 获取指定索引下的元素
bool GetElem_seq(SeqList &L, unsigned i, ElemType &e) {
    if (i < 0 || i >= L.length) {
        return false;
    }
    e = L.data[i];
    return true;
}

// 插入元素
bool ListInsert_seq(SeqList &L, unsigned i, ElemType e) {
    if (i < 0 || i > L.length) {
        return false;
    }
    if (L.length == L.capacity) {
        auto prev_addr = L.data;
        L.data = new ElemType[L.capacity * 2];
        std::copy(prev_addr, prev_addr + L.capacity, L.data);
        L.capacity += 2;
        delete [] prev_addr;
    }
    for (unsigned j = L.length; j > i; --j) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i] = e;
    ++L.length;
    return true;
}

// 删除元素
bool ListDelete_seq(SeqList &L, unsigned int i, ElemType &e)
{
    if (i < 0 || i > L.length) {
        return false;
    }
    e = L.data[i];
    for (unsigned j = i; j < L.length; ++j) {
        L.data[j - 1] = L.data[j];
    }
    --L.length;
    return true;
}

// 打印表
void PrintList_seq(SeqList &L)
{
    for (unsigned i = 0; i < L.length; ++i) {
        std::cout << L.data[i] << " " << std::endl;
    }
    std::cout << std::endl;
}

// 判空
bool Empty_seq(SeqList &L)
{
    return L.length == 0;
}

// 销毁表
void DestroyList_seq(SeqList &L)
{
    delete [] L.data;
    L.length = 0;
}
