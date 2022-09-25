//
// Created by 98708 on 2022/9/25.
//

/*1.试设计一个算法，改造一个带表头结点的双向链表，所有结点的原有次序保持在各个结点的右链域rLink中，
 * 并利用左链域ILink把所有结点按照其值从大到小的顺序连接起来*/

/*算法思路：
 * 右链域保持不变，左链域按降序排序*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // 双链表的存储结构
    int data;
    struct Node *lLink, *rLink; // 左右链域
}Node, *LNode;

void SortNode(LNode T){
    LNode i = T; // 移动到双链表的尾部
    while(i->rLink!= nullptr){
        i = i->rLink;
    }

    while(i->lLink != nullptr){
        LNode j = i->lLink;
        while (j->lLink!= nullptr){
            if(i->data < j->data){   // 交换次序
                LNode temp = j->lLink;
                j->lLink = i;
                i->lLink = temp;
            }
            j = j->lLink;
        }
        i=i->lLink;
    }
}

void create(LNode &T, int A[], int n){
    LNode tail = T;
    for(int i = 0; i < n; i++){
        LNode cur;
        tail->rLink = cur;
        cur->lLink = tail;
        cur->data = A[i];
        tail = cur;
    }
}

int main(){
    LNode T;
    int A[5] = {1,2,4,3,5};
    create(T, A, 5);

    while(T!= nullptr){
        printf("%d ", T->data);
        T=T->rLink;
    }
}