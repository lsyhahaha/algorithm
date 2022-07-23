#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *LLink,*RLink;
    int Freq;
}* List;

void locate(List L, int x)
{
    List p=L->RLink,q;
    while(p!=NULL){
        if(p->data==x){
            p->Freq++;
            break;
        }
        p=p->RLink;
    }
    if(p->LLink==L)return;//如果p是第一个结点则不处理
    else{
        p->LLink->RLink=p->RLink;//将p去除
        if(p->RLink!=NULL)
            p->RLink->LLink=p->LLink;
        q=L->RLink;//找到p的插入位置
        while(q!=NULL&&q->Freq>p->Freq){
            q=q->RLink;
        }
        q->LLink->RLink=p;//p插入到q之前
        p->LLink=q->LLink;
        q->LLink=p;
        p->RLink=q;
    }
}