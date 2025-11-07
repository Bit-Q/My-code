#pragma once
#include <iostream>
using namespace std;
class Queue {
public:
    int array[10];    //队列
    int top;         //头
    int tail;        //尾
    int size;        //记录数据个数
};
inline void initQueue(Queue *ptr) {
    ptr->top=0;
    ptr->tail=0;
    ptr->size=0;
}

inline bool inQueue(Queue *ptr,const int element) {
    if (ptr->size==10)
        return false;                 //满队列
    ptr->array[ptr->tail]=element;
    ptr->tail=(ptr->tail+1)%10;
    ptr->size++;
    return true;
}
inline bool outQueue(Queue *ptr) {
    if (ptr->size==0)
        return false;               //空队列

    ptr->top=(ptr->top+1)%10;
    ptr->size--;

    return true;
}

inline int getTop(const Queue *ptr) {
    if (ptr->size==0)
        return -1;
    return ptr->array[ptr->top];
}