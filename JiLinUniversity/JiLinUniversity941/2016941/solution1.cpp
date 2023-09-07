//
// Created by 98708 on 2022/9/24.
//

/*1.已知一个带头结点的单链表，结点结构为(data,link)。假设该链表只给出了头指针list。
 * 在不改变链表的前提下，请设计一个尽可能高效的算法，查找出链表中倒数第k（k为正整数）个
 * 位置上的结点。若查找成功，算法输出该结点的data域的值，并返回1；否则返回0.*/

/*算法思路：
 * 使用快慢指针，让快指针先走k步，然后慢指针和快指针一起后移，当快指针走到链表尾部的时候，
 * 慢指针就走到了倒数第k步的位置了。*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *link;
}Node, *LNode;

void Find_k(LNode head, int k){
    LNode quick = head;
    LNode slow = head;
    while(k--!=0){ // 让快指针先走k步
        quick = quick->link;
    }

    while(quick->link != NULL){
        slow = slow->link;
        quick = quick->link;
    }
    printf("%d", slow->data);
}