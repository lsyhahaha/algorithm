//
// Created by 98708 on 2022/11/26.
// ���ֵݹ����
// ���ַǵݹ���������к�+����
//

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct Node{
    int data;
    struct Node *left, *right;
}Tree, *Bitree;

//�������preOrder(Bitree T)
void preOrder(Bitree T){
    // visit(T);
    preOrder(T->left);
    preOrder(T->right);
}

// �������ĵݹ��㷨����

// ��������ķǵݹ��㷨
void Not_R_preOrder(Bitree T){
    /*��pָ�����ĸ�����ʼ��һ��ջ������ѭ��ǰջΪ�գ�
     *�����p��Ϊ�ջ���ջ��Ϊ�գ���ִ�Тۢܣ�
     *�����p��Ϊ�գ���p��ջ��p�����ߣ�
     *�����pΪ�գ����ջ��pָ�����Ԫ�ص��ұ�*/
    Bitree stack[maxsize];    // ����ջ
    int top = -1;             // ջ��ָ��
    Bitree p = T;

    while(top!=-1 || p!= nullptr){
        if(p!= nullptr){  // ���pΪ�գ�����ջ��Ԫ��
            stack[++top] = p;//��ջ
            //visit(stack[top]);    // ��ȡջ��Ԫ��
            p = p->left;
        }else{ // ���pΪ��
            p = stack[top--]->right; // pָ��ջ��Ԫ�ص��ұ�
        }//if
    }//while
}

// ��������ķǵݹ��㷨
void Not_R_InOrder(Bitree T){
    Bitree stack[maxsize];
    int top = -1;
    Bitree p = T;

    while(p!= nullptr || top!=-1){
        if(p!= nullptr){
            //��ջ
            stack[++top] = p;
            p = p->left;
        }else{
            //��ջ
            //visit(stack[top]);    // ��ȡջ��Ԫ��
            p = stack[top--]->right; // ��ջ��pָ�����Ԫ�ص��Һ���
        }
    }
}

// ��������ķǵݹ����
void Not_R_postOrder(Bitree T){
    /*�ٳ�ʼ��һ������ջ������ѭ��֮ǰΪ�գ���ʼ����������ָ��p,r(pָ�����rֻ��nullptr)
     * �����p��Ϊ�ջ���ջ��Ϊ�գ������ۢ�
     * �����p��Ϊ�գ�����ջ��p�����ߣ��������һģһ����ǰ����������Ѿ������ˣ�
     * �����pΪ�գ���˵������Ѿ�ȫ����ջ�����ˣ��������ߣ�
     *        ���ȶ�ȡջ���ڵ㣬��pָ������ڵ�
     *        if����ڵ���Һ��Ӵ��ڣ����Һ���û�б����ʹ���������ת������p��������Һ���
     *        if�Һ��Ӳ����ڻ����Һ����Ѿ����ʹ��ˣ��򽫽ڵ㵯�������ʸýڵ㣬��r��¼������ʹ��Ľڵ㡣������ڵ�֮������pָ��*/
    Bitree stack[maxsize];
    int top=-1;
    Bitree p=T, r= nullptr;
    while(p||top!=-1){
        if(p){
            //��ջ
            stack[++top] = p;
            p=p->left;
        }else{
            p = stack[top]; // ��ȡջ��Ԫ��
            if(p->right && r!=p->right){ // �������Ҹ���˳������Һ��ӱ������ˣ���һ�������һ�α����ʵ�
                p=p->right;
            }else{
                //visit(p);
                r = stack[top--];//��ջ ����r��¼������ʵĽڵ�
                p = nullptr;
            }
        }
    }
}

//�������
void levelOrder(Bitree T){
    Bitree queue[maxsize], p;
    int front=0, rear=0;
    queue[rear++] = T;
    while(rear-front!=0){
        int k = rear-front;
        for(int i=0; i<k; i++){
            p = queue[front++]; // ����
            // visit(p);
            if(p->left) queue[rear++] = p->left;    // ���
            if(p->right) queue[rear++] = p->right;  // ���
        }
    }
}