// #include "head.hpp"
// int main() {
//     Queue ptr={};
//     initQueue(&ptr);
//     for (int i=1;i<=9;i++)
//         inQueue(&ptr,i*10);
//     for (int p=0;p<5;p++)
//         outQueue(&ptr);
//     cout<<getTop(&ptr)<<endl;
//     return 0;
// }
#include "head.hpp"

int main() {
    Queue q={};
    initQueue(&q);

    cout << "=== 队列功能测试 ===" << endl;

    // 测试空队列操作
    cout << "1. 空队列测试:" << endl;
    cout << "出队结果: " << (outQueue(&q) ? "成功" : "失败") << endl;
    cout << "队头元素: " << getTop(&q) << endl;

    // 测试正常入队出队
    cout << "\n2. 正常操作测试:" << endl;
    for (int i = 1; i <= 5; i++) {
        if (inQueue(&q, i * 10)) {
            cout << "入队成功: " << i * 10 << endl;
        }
    }

    cout << "当前队头: " << getTop(&q) << endl;
    cout << "出队结果: " << (outQueue(&q) ? "成功" : "失败") << endl;
    cout << "新队头: " << getTop(&q) << endl;

    // 测试队列满
    cout << "\n3. 队列满测试:" << endl;
    for (int i = 6; i <= 15; i++) {
        if (!inQueue(&q, i * 10)) {
            cout << "入队失败（队列已满）: " << i * 10 << endl;
            break;
        }
    }

    // 清空队列
    cout << "\n4. 清空队列测试:" << endl;
    while (outQueue(&q)) {
        cout << "出队成功" << endl;
    }
    cout << "最终出队结果: " << (outQueue(&q) ? "成功" : "失败") << endl;

    return 0;
}