//
// Created by 98708 on 2022/9/25.
//

/*1.�����һ���㷨������һ������ͷ����˫���������н���ԭ�д��򱣳��ڸ�������������rLink�У�
 * ������������ILink�����н�㰴����ֵ�Ӵ�С��˳����������*/

/*�㷨˼·��
 * �����򱣳ֲ��䣬�����򰴽�������*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // ˫����Ĵ洢�ṹ
    int data;
    struct Node *lLink, *rLink; // ��������
}Node, *LNode;

void SortNode(LNode T){
    LNode i = T; // �ƶ���˫�����β��
    while(i->rLink!= nullptr){
        i = i->rLink;
    }

    while(i->lLink != nullptr){
        LNode j = i->lLink;
        while (j->lLink!= nullptr){
            if(i->data < j->data){   // ��������
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