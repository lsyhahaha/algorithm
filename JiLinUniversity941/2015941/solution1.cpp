//
// Created by 98708 on 2022/9/24.
//

/*1.���������������ͷָ��ֱ�Ϊhead1��head2�������һ���㷨�ж��������������Ƿ��ཻ����
 * ���ཻ�򷵻ص�һ�����㣬Ҫ���㷨��ʱ�临�Ӷ�ΪO(length1+length2),����length1��length2
 * �ֱ�Ϊ��������ĳ��ȡ�
*/

/*˼·1���ȸ�����һ�εõ������ȵõ����Ȳ�Ϊd,�ó�����������d����㣬Ȼ����������ͬ�������ҵ���ͬ��㡣*/
/*˼·2�����������ͷ�ߵ�β�������ߵ�β��ʱ����ת����һ�������ͷ����������ߵ���һ������β��֮ǰ����������
 * ����˵���ཻ�������ཻ*/

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{ // ���嵥����Ĵ洢�ṹ
    int data;
    struct Node* next;
}Node, *LNode;

bool IsTrue(LNode l1, LNode l2, int length1, int length2){
    int d = length1 - length2;
    LNode p,q;
    if (d>=0){    // pָ�򳤵�����������qָ��̵�����������
        p = l1;
        q = l2;
    } else{
        p = l2;
        q = l1;
    }
    d= abs(d);
    while(d--!=0){p=p->next;} // ��������d��
    while(p!=NULL){          //ֱ��p�ߵ�����β����
        if(p=q) return true;  // ���;��p��q������ͬ�����ʾ�ཻ
        p = p->next;
        q = q->next;
    }
    return false;
};