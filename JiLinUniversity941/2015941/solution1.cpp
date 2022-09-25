//
// Created by 98708 on 2022/9/24.
//

/*1.给定两个单链表的头指针分别为head1和head2，请设计一个算法判断这两个单链表是否相交，如
 * 果相交则返回第一个交点，要求算法的时间复杂度为O(length1+length2),其中length1和length2
 * 分别为两个链表的长度。
*/

/*思路1：先各遍历一次得到链表长度得到长度差为d,让长的链表先走d个结点，然后两个链表同步遍历找到共同结点。*/
/*思路2：两个链表从头走到尾部，当走到尾部时，跳转到另一个链表的头部，如果在走到另一个链表尾部之前，相遇相遇
 * ，则说明相交，否则不相交*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // 定义单链表的存储结构
    int data;
    struct Node* next;
}Node, *LNode;

bool IsTrue(LNode l1, LNode l2, int length1, int length2){
    int d = length1 - length2;
    LNode p,q;
    if (d>=0){    // p指向长的那条单链表，q指向短的那条单链表
        p = l1;
        q = l2;
    } else{
        p = l2;
        q = l1;
    }
    d= abs(d);
    while(d--!=0){p=p->next;} // 长的先走d步
    while(p!=NULL){          //直到p走到链表尾部，
        if(p=q) return true;  // 如果途中p与q链表相同，则表示相交
        p = p->next;
        q = q->next;
    }
    return false;
};