//
// Created by 98708 on 2022/9/20.
//

/*��֪�����Ե�������ʽ�洢�����Ա�ÿ������Ԫ��ֵ���ε�������������С���ش��������⣺
 * ��1����д�㷨����������������ϲ�Ϊ����Ԫ��ֵ���εݼ��������еĵ�����
 * ��Ҫ�󣺲����������κδ洢�ռ䣬����ԭ�����������б�Ľڵ��źϲ���ĵ�����
 * ��2�����������������㷨��ʱ�临�Ӷ�
 * */

/*�㷨˼�룺
 * �� �Ƚ�������������
 * �� �Ƚ����������ͷ�Ĵ�С���Ӵ�С��������
 * */

#include "stdio.h"
#include "stdlib.h"

typedef struct Lnode{ // ���嵥����Ĵ洢�ṹ
    int data;
    struct Lnode* next;
}Lnode;

Lnode* Reverse(Lnode* head){ // ������������
    Lnode* pre = (Lnode*) malloc(sizeof(struct Lnode));
    Lnode* cur = head;
    while (head->next != NULL){
        head = head->next;
        cur->next = pre;
        pre = pre->next;
    }
    return pre;
}

Lnode* mergeLink(Lnode* l1, Lnode* l2){ // ��������������ϲ�Ϊ����Ԫ��ֵ���εݼ��������еĵ�����
    l1 = Reverse(l1);
    l2 = Reverse(l2);
    Lnode* ans;
    Lnode* cur = ans;           // ansΪ��������ͷָ�룬curΪ��������βָ�룬��ʼʱ��ָ���ص�

    while (l1 && l2){ // ���l1,l2����Ϊ��
        if (l1->data >= l2->data) {       // ���l1��ͷ�ڵ��ֵ�������������βָ��ָ��l1, βָ���l1���κ���
            cur->next = l1;
            cur = l1;
            l1 = l1->next;
        }else{                             // ���l2��ͷ�ڵ��ֵ�������������βָ��ָ��l2, βָ���l2���κ���
            cur->next = l2;
            cur = l2;
            l2 = l2->next;
        }
        cur->next = NULL;                   // ����������βָ�����һλ�ÿգ���ֹ����Ұָ�룻
    }

    //���������������һ������Ϊ�գ��������������Ȳ�һ��ʱ�����ƻ�������������ֱ�ӽ���������βָ��ָ����һ�������ͷ����
    if (!l1) {
        cur->next = l2;
    }
    if (!l2){
        cur->next = l1;
    }

    return ans->next;
}

/*����ʱ�临�Ӷȣ���������������ĳ��ȷֱ�Ϊm��n��
 * �� ��������O(n)
 * ��  �ϲ����� min(O(m), O(n))
 * ���ϣ��ܵ�ʱ�临�Ӷ�Ϊ min(O(m), O(n))
 * */