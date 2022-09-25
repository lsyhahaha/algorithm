//
// Created by 98708 on 2022/9/20.
//

/*已知两个以单链表形式存储的线性表，每个表按照元素值依次递增次序进行排列。请回答下列问题：
 * （1）编写算法，将这俩个单链表合并为按照元素值依次递减次序排列的单链表
 * （要求：不额外增加任何存储空间，利用原来的两个单列表的节点存放合并后的单链表）
 * （2）分析你所给出的算法的时间复杂度
 * */

/*算法思想：
 * ① 先将两个链表逆序；
 * ② 比较两个链表的头的大小，从大到小依次排列
 * */

#include "stdio.h"
#include "stdlib.h"

typedef struct Lnode{ // 定义单链表的存储结构
    int data;
    struct Lnode* next;
}Lnode;

Lnode* Reverse(Lnode* head){ // 将单链表逆序
    Lnode* pre = (Lnode*) malloc(sizeof(struct Lnode));
    Lnode* cur = head;
    while (head->next != NULL){
        head = head->next;
        cur->next = pre;
        pre = pre->next;
    }
    return pre;
}

Lnode* mergeLink(Lnode* l1, Lnode* l2){ // 将这俩个单链表合并为按照元素值依次递减次序排列的单链表
    l1 = Reverse(l1);
    l2 = Reverse(l2);
    Lnode* ans;
    Lnode* cur = ans;           // ans为结果链表的头指针，cur为结果链表的尾指针，初始时两指针重叠

    while (l1 && l2){ // 如果l1,l2都不为空
        if (l1->data >= l2->data) {       // 如果l1的头节点的值更大，则结果链表的尾指针指向l1, 尾指针和l1依次后移
            cur->next = l1;
            cur = l1;
            l1 = l1->next;
        }else{                             // 如果l2的头节点的值更大，则结果链表的尾指针指向l2, 尾指针和l2依次后移
            cur->next = l2;
            cur = l2;
            l2 = l2->next;
        }
        cur->next = NULL;                   // 将结果链表的尾指针的下一位置空，防止出现野指针；
    }

    //特殊情况，当其中一个链表为空，或者两个链表长度不一样时，后移会出现这种情况，直接将结果链表的尾指针指向另一个链表的头即可
    if (!l1) {
        cur->next = l2;
    }
    if (!l2){
        cur->next = l1;
    }

    return ans->next;
}

/*分析时间复杂度：（设置两个链表的长度分别为m和n）
 * ① 链表逆序：O(n)
 * ②  合并链表 min(O(m), O(n))
 * 综上：总的时间复杂度为 min(O(m), O(n))
 * */