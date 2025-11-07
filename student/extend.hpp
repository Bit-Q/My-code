#pragma once
#include <iostream>
using namespace std;
class linkList {
public:
    int element;
    linkList *next;
};

inline void initList(linkList *L) {
    L->next= nullptr;
}

inline bool dinsertList(linkList *Node,const int element,const int index){
    if (index<1)
        return false;
    linkList *p=Node;
    for (int i=0;i<index-1;i++) {
        if (p->next==nullptr)
            return false;
        p=p->next;
    }

    linkList *newNode= new linkList; // NOLINT(*-use-auto)
    newNode->element=element;
    newNode->next=p->next;
    p->next=newNode;


    return true;
}

inline bool deleteList(linkList *Node,const int index) {  //按位查找
    if (index<1)
        return false;
    linkList *p=Node;
    for (int i=0;i<index-1;i++) {
        if (p->next==nullptr)
            return false;
        p=p->next;
    }
    const linkList *newDelete=p->next;
    p->next=p->next->next;
    delete newDelete;
    return true;
}

inline void Print(const linkList *Node) {
    linkList* p=Node->next;
    while (p!=nullptr) {
        cout<<p->element<<endl;;
        p=p->next;
    }
}