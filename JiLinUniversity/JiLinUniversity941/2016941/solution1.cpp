//
// Created by 98708 on 2022/9/24.
//

/*1.��֪һ����ͷ���ĵ��������ṹΪ(data,link)�����������ֻ������ͷָ��list��
 * �ڲ��ı������ǰ���£������һ�������ܸ�Ч���㷨�����ҳ������е�����k��kΪ����������
 * λ���ϵĽ�㡣�����ҳɹ����㷨����ý���data���ֵ��������1�����򷵻�0.*/

/*�㷨˼·��
 * ʹ�ÿ���ָ�룬�ÿ�ָ������k����Ȼ����ָ��Ϳ�ָ��һ����ƣ�����ָ���ߵ�����β����ʱ��
 * ��ָ����ߵ��˵�����k����λ���ˡ�*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *link;
}Node, *LNode;

void Find_k(LNode head, int k){
    LNode quick = head;
    LNode slow = head;
    while(k--!=0){ // �ÿ�ָ������k��
        quick = quick->link;
    }

    while(quick->link != NULL){
        slow = slow->link;
        quick = quick->link;
    }
    printf("%d", slow->data);
}