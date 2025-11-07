#pragma once
#include <iostream>
using namespace std;
class SqStack {
public:
    int top;         //数组下标
    int data[10];
};
//初始化函数
void inline InitStack(SqStack* ptr) {
    ptr->top = -1;   //将下标初始化-1，后续判断是否为空
}

//判断栈是否为空
bool inline JudgeStackEmpty(const SqStack* ptr) {
    if (ptr->top == -1)
        return true;
    else
        return false;
}

//封装多次使用的输出空栈函数
bool inline OutputEmptyStack(const SqStack* ptr) {
    bool IsEmpty=JudgeStackEmpty(ptr);
    if (IsEmpty) {
        cout<<"当前栈区为空栈"<<endl;
    }
    return IsEmpty;
}
//压
bool inline PushStack(SqStack* ptr, const int x) {
    if (ptr->top>=9) {
        cout<<"现在是满栈"<<endl;
        return false;
    }

    ptr->top = ptr->top + 1;
    ptr->data[ptr->top] = x;
    return true;
}

//弹
int inline PopStack(SqStack* ptr) {
    if (OutputEmptyStack(ptr))
        return -1;

    int p = ptr->data[ptr->top];
    ptr->data[ptr->top] = 0;
    ptr->top = ptr->top - 1;
    return p;
}
//改
bool inline ReplaceStack(SqStack *ptr,const int element) {
    if (OutputEmptyStack(ptr))
        return false;

    ptr->data[ptr->top]=element;
    return true;
}

//提取栈顶函数
int inline GetTop(const SqStack* ptr)
{
    if (OutputEmptyStack(ptr))
        return -1;

    return ptr->data[ptr->top];
}

//栈区全体输出函数
bool inline print(const SqStack* ptr) {
    if (OutputEmptyStack(ptr))
        return false;

    for (int i = 0; i < ptr->top + 1; i++) {
        cout << ptr->data[i] << " ";
    }
    cout << endl;
    return true;
}
