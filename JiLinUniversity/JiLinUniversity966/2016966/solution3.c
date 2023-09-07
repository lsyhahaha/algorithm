//
// Created by 98708 on 2022/7/27.
//
#include "stdio.h"
#include "stdlib.h"

typedef struct LNode{
    int val;
    struct LNode *next;
}* List;

List insert(int index, List L){
    // 在链表L的第index位置插入值
    int n = 0; // 记录链表长度
    List h = L;
    while(h) {
        n++;
        h = h->next;
    }
    if (n < 1 || index > n) {
        printf("无法插入");
    }
    List cur = L;
    while (n) {
        cur = cur->next;
        n--;
    }
    List data = (List) malloc(sizeof (struct LNode));
    data->val = cur->val + cur->next->val;
    data->next = cur->next;
    cur->next = data;

    return L;
}