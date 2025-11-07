#include "extend.hpp"
int main() {
    linkList Node{};
    initList(&Node);
    for (int i=0;i<5;i++) {
        insertList(&Node,i*10,i);
    }
    deleteList(&Node,2);

    Print(&Node);
    return 0;
}