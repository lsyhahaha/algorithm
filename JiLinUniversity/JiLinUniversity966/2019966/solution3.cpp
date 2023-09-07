//
// Created by 98708 on 2022/7/23.
//

//对指定元素进行删除
#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}* LNode;

LNode head = (LNode) malloc(sizeof(Node));
void build(LNode head){
    LNode p1 = head;
    const int n = 10;
    int a[n] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < n; i++) {
        LNode p = (LNode) malloc(sizeof(Node));
        // 填入内容
        p->data = a[i];
        p1->next = p;
        p1 = p;
    }
    p1->next = NULL;
}

void print(LNode head){
    LNode p = head->next; // !!!不能只想head,因为head的data为随机的值
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
    printf( "\n");
}

void del(LNode head){
    printf("请输入指定元素的值:\n");
    int x;
    scanf("%d", &x);
    LNode pre = head;
    LNode cur = head->next;
    while (cur != NULL){
        if (cur->data == x){
            pre->next = cur->next;
        }
        cur = cur->next;
        pre = pre->next;
    }
}

int main(){
    build(head);
    print(head);
    del(head);
    print(head);
}