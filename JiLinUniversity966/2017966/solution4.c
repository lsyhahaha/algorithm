//
// Created by 98708 on 2022/7/27.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct LNode{
    int val;
    struct LNode *next;
}* List;

List Sort(List pNode);
List UnionSet(List Q, List P) {
    List q = Sort(Q), p = Sort(P);
    List R = malloc(sizeof (struct LNode));
    List tail = R;
    while (q || p) {
        if (q->val < p->val) {
            tail->next = q;
            q = q->next;
        }else if (q->val < p->val){
            tail->next = p;
            p = p->next;
        }else if (q->val == p->val){
            tail->next = q;
            q = q->next;
            p = p->next;
        }
        tail = tail->next;
    }
    if (q) tail->next = q;
    if (p) tail->next = p;
    return R->next;
}

List Sort(List head) {
    // 冒泡排序
    List i = head;
    while (i) {
        List j = head->next;
        while(j) {
            if (i->val > j->val){
                // 交换指针内容
                List temp = i;
                i = j;
                j = temp;
                // 交换next域
                List tempnext = i->next;
                i->next = j->next;
                j->next = i->next;
            }
        }
        i = i->next;
    }
    return head;
}