//
// Created by 98708 on 2022/11/4.
//

/*(2020软专程序题四)
 * ①写一个结构体，要求是一个单链表，里面装的是学生的学号，姓名，成绩，还要把
 * 这个链表按照成绩的高低由低到高排序。
 * ②在上题的基础上，有一个和上一题一样的单链表，读取一个文
 * 件里面的学生成绩等信息放到新生成的链表里，最后再把两道题的链表递归排序。*/

/*算法思想：
 * A:定义学生结构体；
 * B:定义bubble()函数对链表按照成绩进行由低到高排序
 * C:定义create()函数读取文件生成新的单链表
 * D:定义diguisort()函数对两链表进行递归排序
 * */

#include "stdio.h"
#include "stdlib.h"

//学生结构定义
typedef struct student{
    int code;
    char name[20];
    int score;
    struct student *next; // 指向下一个节点
}*ListNode;

struct student* bubble(struct student* head){
    struct student *i, *j,*j_next,*tail;
    i=head;
    while(i!=NULL){
        j=i;
        tail->next=j; // j的前置指针
        j_next=j->next;
        while(j!=NULL){
            if(j->score>j_next->score){// 如果分数是逆序的，则交换
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
    if(file= fopen("in.txt", "r") == NULL){// 打开文件失败
        printf("文件打开失败");
        return NULL;
    }
    struct student *head=NULL, *p;
    while(!feof(file)){ // 重点重点重点重点重点重点重点重点重点重点重点重点重点重点重点重点重点
        p=(struct student*)malloc(sizeof(ListNode));
        fscanf(file, "%d%10s%d", &(p->code), &(p->name), &(p->score));
        p->next=head;  // 头插法建立单链表
        head=p;
    }
    fclose(file);
    return head;
}

ListNode diguisort(ListNode l1, ListNode l2){
    // 对有序链表递归排序
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    if(l1->score<l2->score){
        l1->next = diguisort(l1->next, l2);
        return l1;
    }
    l2->next = diguisort(l1, l2->next);
    return l2;
}