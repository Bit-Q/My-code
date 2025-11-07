#include "head.hpp"

int main() {
    SqStack stack={};
    InitStack(&stack);

    cout << "=== »ù´¡¹¦ÄÜ²âÊÔ ===" << endl;

    // ²âÊÔ¿ÕÕ»²Ù×÷
    cout << "1. ¿ÕÕ»²âÊÔ:" << endl;
    print(&stack);
    PopStack(&stack);
    GetTop(&stack);

    // ²âÊÔÕý³£Ñ¹Õ»
    cout << "\n2. Õý³£Ñ¹Õ»²âÊÔ:" << endl;
    for (int i = 1; i <= 5; i++) {
        PushStack(&stack, i * 10);
        cout << "Ñ¹Èë: " << i * 10 << ", µ±Ç°Õ»¶¥: " << GetTop(&stack) << endl;
    }
    print(&stack);

    // ²âÊÔÐÞ¸ÄÕ»¶¥
    cout<< "\n3.¸ÄÕ»²âÊÔ" << endl;
    print(&stack);
    cout<<"µ±Ç°Õ»¶¥ "<<GetTop(&stack)<<endl;

    cout <<"ÐÞ¸ÄÕ»¶¥£º " <<endl;
    ReplaceStack(&stack,520);
    print(&stack);
    cout<<"µ±Ç°Õ»¶¥ "<<GetTop(&stack)<<endl;


    // ²âÊÔµ¯Õ»
    cout << "\n4. µ¯Õ»²âÊÔ:" << endl;
    print(&stack);

    for (int i = 0; i < 3; i++) {
        cout << "µ¯³ö: " << PopStack(&stack) << endl;
    }
    print(&stack);

    // ²âÊÔÕ»Âú
    cout << "\n5. Õ»Âú²âÊÔ:" << endl;
    for (int i = 6; i <= 15; i++) {
        if (PushStack(&stack, i * 10)) {
            cout << "³É¹¦Ñ¹Èë: " << i * 10 << endl;
        }
    }
    print(&stack);

    // Çå¿ÕÕ»
    cout << "\n6. Çå¿ÕÕ»²âÊÔ:" << endl;
    while (!JudgeStackEmpty(&stack)) {
        cout << "µ¯³ö: " << PopStack(&stack) << endl;
    }
    print(&stack);

    return 0;
}