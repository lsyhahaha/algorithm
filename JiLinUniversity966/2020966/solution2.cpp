//
// Created by 98708 on 2022/7/23.
//

// 删除链表的重复节点

#include <bits/stdc++.h>
using namespace std;
// 定义一个单链表
typedef struct LNode{
    int data;
    struct LNode *next;
}* List;

void del(List head){
    List pre = head;
    List tail = head;
    while (pre != NULL){
        while (tail != NULL && tail->data == pre->data){
            tail = tail->next;
        }
        pre->next = tail;
        pre = tail;
    }
}

void print(List head){
    List p = head->next;
    while (p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

List head = (List) malloc(sizeof(LNode));
void build(){
    List p1 = head;
    const int n = 10;
    int a[n] = {4,7,2,7,7,6,9,12,2,3};
    List p;
    for (int i = 0; i < n; i++) {
        p = (List)malloc(sizeof(LNode));
        p->data = a[i];
        p1->next = p;
        p1 = p;
    }
    p->next = NULL;
}

int main(){
    build();
    print(head);
    del(head);
    print(head);
}