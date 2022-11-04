//
// Created by 98708 on 2022/11/4.
//

/*(2020��ר��������)
 * ��дһ���ṹ�壬Ҫ����һ������������װ����ѧ����ѧ�ţ��������ɼ�����Ҫ��
 * ��������ճɼ��ĸߵ��ɵ͵�������
 * ��������Ļ����ϣ���һ������һ��һ���ĵ�������ȡһ����
 * �������ѧ���ɼ�����Ϣ�ŵ������ɵ����������ٰ������������ݹ�����*/

/*�㷨˼�룺
 * A:����ѧ���ṹ�壻
 * B:����bubble()�����������ճɼ������ɵ͵�������
 * C:����create()������ȡ�ļ������µĵ�����
 * D:����diguisort()��������������еݹ�����
 * */

#include "stdio.h"
#include "stdlib.h"

//ѧ���ṹ����
typedef struct student{
    int code;
    char name[20];
    int score;
    struct student *next; // ָ����һ���ڵ�
}*ListNode;

struct student* bubble(struct student* head){
    struct student *i, *j,*j_next,*tail;
    i=head;
    while(i!=NULL){
        j=i;
        tail->next=j; // j��ǰ��ָ��
        j_next=j->next;
        while(j!=NULL){
            if(j->score>j_next->score){// �������������ģ��򽻻�
                j->next = j_next->next;
                j_next->next = j;
                tail->next = j_next;
            }
            tail=tail->next;
            j=j->next;
            j_next=j_next->next;
        }
        i=i->next;
    }

    return head;
}

struct student* create(){
    FILE *file;
    if(file= fopen("in.txt", "r") == NULL){// ���ļ�ʧ��
        printf("�ļ���ʧ��");
        return NULL;
    }
    struct student *head=NULL, *p;
    while(!feof(file)){ // �ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص��ص�
        p=(struct student*)malloc(sizeof(ListNode));
        fscanf(file, "%d%10s%d", &(p->code), &(p->name), &(p->score));
        p->next=head;  // ͷ�巨����������
        head=p;
    }
    fclose(file);
    return head;
}

ListNode diguisort(ListNode l1, ListNode l2){
    // ����������ݹ�����
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1->score<l2->score){
        l1->next = diguisort(l1->next, l2);
        return l1;
    }
    l2->next = diguisort(l1, l2->next);
    return l2;
}