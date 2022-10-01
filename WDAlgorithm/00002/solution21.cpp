//
// Created by 98708 on 2022/9/26.
//

/*单链表有环，是指单链表的最后一个结点的指针指向了链表中的某个结点（通常单链表的最后一个结点的指针域是空的）。
 * 试编写算法判断单链遍是否存在环；
 * 1）给出算法的基本思想；
 * 2）根据设计思想，采用c/c++语言描述算法，关键之处给出注释；
 * 3）说明你所设计的时间复杂度和空间复杂度；*/

#include "bits/stdc++.h"
using namespace std;
#define ElemType int
#define MaxSize 50

// 定义单链表结点类型
typedef struct LNode{
    ElemType data; //   数据域
    struct LNode *next; // 指针域
}LNode, *LinkList;