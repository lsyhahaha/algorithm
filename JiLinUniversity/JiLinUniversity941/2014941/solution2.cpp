//
// Created by 98708 on 2022/9/24.
//

/*2.�����������������Ӵ洢�ṹ��������Ĺؼ��ʾ�����ͬ��
 * ���д�ǵݹ��㷨�����ݼ������ӡ�����������ǿգ�������Ϊ�յĽ��Ĺؼ��ʡ�
 */

/*˼·������������ı��Σ��Ҹ��󣬽��б������Ϳ��Եõ�һ���ݼ���������С��ڷ��ʽ��ʱ�ж��Ƿ���������*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*����������������ķǵݹ��㷨*/
void midOrderSort(Tree root){
    Tree stack[N], p = root; // ��ʼ��ջ, p�Ǳ���ָ��
    int top=-1; // top��ջ��ָ��
    while(p||top!=-1) { // ջ���ջ���p������ѭ��
        if(p!=NULL){ // һ·����
            stack[top++] = p; // ��ǰ�����ջ
            p=p->left; // ���Ӳ��գ�һ·������
        }else{              // ��ջ������ת���ջ����������
            p=stack[top--]; // ջ��Ԫ�س�ջ�����ʳ�ջ���
            if(root->left != NULL && root->right==NULL){
                printf("%d ", root->data);
            }
            p=p->right;  // ���������ߣ�p��ֵΪ��ǰ�����Һ���
        }
    }
}

/*�ݹ��㷨����ĿҪ��ǵݹ��㷨*//*
void midOrderSort(Tree root){
    if(root==NULL) return;

    midOrderSort(root->left);
    if(root->left != NULL && root->right==NULL){
        printf("%d ", root->data);
    }
    midOrderSort(root->right);
}*/
