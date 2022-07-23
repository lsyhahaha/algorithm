//
// Created by 98708 on 2022/7/23.
//

//教师信息有（工号，性别，姓名，入学年份），有文件input.txt，设计一个文件管理教师信息的程序
#include "bits/stdc++.h"
using namespace std;

typedef struct teacher{
    int num;
    int sex;
    char name[20];
    int year;
    struct teacher *next;
}* Tea;

void insert(Tea head){// 插入过程，按序插入
    Tea p = (Tea)malloc(sizeof(teacher));
    printf("请输入工号，性别，姓名，入学年份：\n");
    scanf("%d %d %s %d", &p->num, &p->sex, &p->name, &p->year);
    Tea q = head->next;
    while (q->next->num < p->num && q->next != NULL) {
        q = q->next;
    }
    p->next = q->next;//接入链表
    q->next = p;
}

void teaSort(Tea head) {// 排序过程
    Tea p = head->next;// 冒泡排序指针
    while(p != NULL) {
        Tea q = p->next;
        while (q != NULL){
            if (p->num > q->num) {
                // 交换内容
                Tea tmp = p;
                p = q;
                q = tmp;
                // 交换next指针
                Tea tmpnext = q->next;
                q->next = p->next;
                p->next = tmpnext;
            }
            q = q->next;//指针后移
        }
        p = p->next;//指针后移
    }
}

void del(Tea pTeacher) {
    printf("请输入要删除教师的工号：\n");
    int n;
    scanf("%d", &n);
    Tea p = pTeacher->next;
    Tea pre = pTeacher;
    while (p!=NULL){
        if (p->num == n){
            pre = p->next;
        }
        pre = pre->next;
        p = p->next;
    }
    return;
}

void print(Tea pTeacher) {
    Tea p = pTeacher->next;
    while (p != NULL) {
        printf("%d %d %s %d\n",  p->num, p->sex, p->name, p->year);
        p = p->next;
    }
}

void build(Tea head) {
    FILE *fp = fopen("C:\\Users\\98708\\Desktop\\algorithm\\JiLinUniversity966\\2019966\\input.txt", "r"); //打开文件
    Tea q = head;
    if (fp == NULL) { printf("文件打开错误");}
    while(1){
        Tea p = (Tea) malloc(sizeof(teacher));
        fscanf(fp, "%d %d %s %d", &p->num, &p->sex, &p->name, &p->year);// 读入数据
        q->next = p; // 接入链表
        q = p;
        if (!feof(fp)) break;//判断是否读到文件尾
    }
    q->next = NULL; // 建立链表尾
}

int main(){
    Tea head = (Tea) malloc(sizeof(teacher));
    head->next = NULL;
    build(head); // 文件建立函数
    print(head);
    teaSort(head);//排序函数
    print(head);
    insert(head);// 插入新的元素
    print(head);
    del(head);
    print(head);
}