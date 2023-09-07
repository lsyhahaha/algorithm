//
// Created by 98708 on 2022/9/25.
//

/*带头结点的双向循环链表L（a1,a2,…,an）转化为L2(a1,a3,…,an,…,a4,a2)。*/

/*算法思想：
 * ①尾插法构建双链表；
 * ②*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // 双链表的存储结构
    int data;
    struct Node *lLink, *rLink; // 左右链域
}Node, *LNode;
