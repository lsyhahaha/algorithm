//
// Created by 98708 on 2023/9/5.
//

//程序设计题第1题

//若L是一个带头节点的单链表，设计算法将L分为两个具有相同结构的链表L1和L2,其中L1的结点
//在L中的位置序号为奇数，而L2的结点在L的位置序号为偶数，并且结点的相对位置不变。要求L1
//L2利用L的结点。

#include "iostream"
using namespace std;

//单链表的定义，23王道书p29页
typedef struct LNode{
    int data;
    struct LNode* next;
}LNode, *LinkList;

//尾插法
void Insert(LinkList head, LinkList cur){
    LinkList tail = head;
    //让tail指向链表尾部
    while (tail->next!= nullptr){
        tail = tail->next;
    }
    //插入
    tail->next = cur;
    cur->next = nullptr;
}

// 打印链表
void PrintList(LinkList L) {
    if(L== nullptr){
        cout<<"链表为空"<<endl;
        return;
    }
    LinkList p = L->next;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void Divide_list(LinkList L, LinkList L1, LinkList L2){
    // 分离链表
    int k=1;

    LinkList cur = L->next; // 指向第一个结点
    LinkList pre = L;// cur的前驱

    while(cur!= nullptr){
        if(k%2==1){
            //奇数，cur属于L1;
            //因为题目要求相对位置不变，所以使用尾插法
            Insert(L1, cur); // 将cur通过尾插法，插入L1
        }else{
            //偶数，cur属于L2;
            Insert(L2, cur);
        }

        if(cur->next!= nullptr){
            pre->next = pre->next->next;
            cur=pre->next;
        }else{
            cur = cur->next;
        }
    }
}


int main() {
    LinkList L = new LNode();
    LinkList L1 = new LNode();
    LinkList L2 = new LNode();

    // 构建原始链表L
    for (int i = 1; i <= 6; i++) {
        LinkList newNode = new LNode();
        newNode->data = i;
        Insert(L, newNode);
    }
    PrintList(L);

    Divide_list(L, L1, L2);

    cout << "L1: ";
    PrintList(L1);

    cout << "L2: ";
    PrintList(L2);

    return 0;
}
