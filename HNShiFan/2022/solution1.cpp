//
// Created by 98708 on 2023/9/5.
//

//����������1��

//��L��һ����ͷ�ڵ�ĵ���������㷨��L��Ϊ����������ͬ�ṹ������L1��L2,����L1�Ľ��
//��L�е�λ�����Ϊ��������L2�Ľ����L��λ�����Ϊż�������ҽ������λ�ò��䡣Ҫ��L1
//L2����L�Ľ�㡣

#include "iostream"
using namespace std;

//������Ķ��壬23������p29ҳ
typedef struct LNode{
    int data;
    struct LNode* next;
}LNode, *LinkList;

//β�巨
void Insert(LinkList head, LinkList cur){
    LinkList tail = head;
    //��tailָ������β��
    while (tail->next!= nullptr){
        tail = tail->next;
    }
    //����
    tail->next = cur;
    cur->next = nullptr;
}

// ��ӡ����
void PrintList(LinkList L) {
    if(L== nullptr){
        cout<<"����Ϊ��"<<endl;
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
    // ��������
    int k=1;

    LinkList cur = L->next; // ָ���һ�����
    LinkList pre = L;// cur��ǰ��

    while(cur!= nullptr){
        if(k%2==1){
            //������cur����L1;
            //��Ϊ��ĿҪ�����λ�ò��䣬����ʹ��β�巨
            Insert(L1, cur); // ��curͨ��β�巨������L1
        }else{
            //ż����cur����L2;
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

    // ����ԭʼ����L
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
