//
// Created by 98708 on 2022/9/22.
//

/*给定一个带表头结点的双向链表L，每个结点有4个数据成员：前驱结点的指针LLink,后继结点的指针RLink,数据的成员Data,
 * 和访问频度Freq;且已知双向链表L中结点一直按访问频度递减的顺序排列。即频繁访问的结点总是靠近表头；初始状态L中所
 * 有结点的Freq都为0.
 对双链表L的Locate(x)操作：每操作一次，将数据值为x的结点访问频度Freq加1。请设计一个算法实现对双链表L的Locate(x)
 操作，要求操作后L中结点仍按照访问频度的递减顺序排列.
 */

/*算法思想：
 * ①首先找到数据值为x的结点，修改其访问频度；
 * ②再对双向聊表排序*/

#include "bits/stdc++.h"

typedef struct Node{ /*定义双向链表的存储结构*/
    int data;
    int freq;
    struct Node *LLink, *RLink;
}Node, *LNode;

void Locate(LNode head, int x){
    if (head->RLink == NULL) return; /*如果双向链表为空，直接退出*/
    LNode cur = head->RLink; //cur去遍历链表
    while(cur != NULL){
        if (cur->data == x){ // 修改访问频度
            cur->freq++;
        }
        cur = cur->RLink;
    }

    /*因为双向链表按照访问频度逆序排列，所以从cur开始往前遍历，找到比cur.freq大的值，否则交换值，将新的freq往前冒泡*/
    while(1){
        if (cur->LLink == head) break; // 修改后的频度最大，已知冒泡到了头节点的下一位
        int temp = 0;
        if (cur->LLink->freq < cur->freq){ // 往前冒泡
            temp = cur->freq;
            cur->freq = cur->LLink->freq;
            cur->LLink->freq = temp;
        }else{ // 遇到比该节点访问频度大的结点，停止冒泡
            break;
        }
    }
}