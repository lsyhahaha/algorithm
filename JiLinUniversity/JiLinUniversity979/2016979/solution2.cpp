//
// Created by 98708 on 2022/9/25.
//

/*�����������ĸ�Ϊroot����д�㷨�Զ������������¶��ϣ�������ҵĲ�α���*/

/*�㷨˼·��
 * �������Ĳ�α����Ļ����ϣ�ÿ��ʹ��һ��ջʹ�����д��ҵ����ܵ�������ʹ��һ��ջ���õ����¶��ϵ�����*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node, *Tree;

void ReverseLevelOrder(Tree root, int A[]){
    // �����¶��ϣ�������ҵĲ�α������б���������A��
    Tree stack[N], levelstack[N];
    int top = -1, leveltop = -1;
    Tree queue[N];   // ��α�����ʹ�õĶ���
    int front = 0, rear = 0;
    queue[rear++] = root; // ���ڵ����
    while(front!=rear){
        int d = rear - front;
        for(int i = 0; i < d; i++){
            Tree cur = queue[front++];// ����
            levelstack[++leveltop] = cur;// ÿһ��Ԫ����ջ
            if(cur->left!=NULL) queue[rear++] = cur->left;
            if(cur->right!=NULL) queue[rear++] = cur->right;
        }

        //ÿһ��������ջ
        while(leveltop!=-1){
            stack[++top] = levelstack[leveltop--];
        }
    }

    int i = 0;
    while(top!=-1){
        A[i++] = stack[top--]->data;
    }
}