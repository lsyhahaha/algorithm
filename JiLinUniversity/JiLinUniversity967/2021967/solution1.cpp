//
// Created by 98708 on 2022/10/5.
//

/*�㷨��1��
 * �ǵݹ��㷨д���������������еĵ�k������ֵ*/

/*����˼·��ʹ�÷ǵݹ����������㷨���������õ���ֵ�����������м��ɻ�õ�k������ֵ*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*���Ĵ���*/
int A[100];
int index = 0;
void preord(Tree root, int k){
    // init ջ
    Tree stack[maxsize];
    int top = -1;
    // ���ڵ���ջ
    stack[++top] = root;
    while(top!=-1){ // ջ�ǿգ���ִ��ѭ��
        // ��ջ�������������
        Tree q = stack[top--];
        int a = q->data;
        A[index++] = a;

        // �����ӽ����ջ
        if(q->right != nullptr) stack[++top] = q->right;
        if(q->left != nullptr) stack[++top] = q->left;
    }
}

Tree build(string qx, string zx){// ǰ�����򹹽�������
    if (qx.size() == 0) return NULL;
    Tree root = (Tree) malloc(sizeof (Node));
    int a = int(qx[0]-'0');
    root->data = a;

    int pos = zx.find(qx[0]);
    root->left = build(qx.substr(1, pos), zx.substr(0,pos));
    root->right = build(qx.substr(pos+1), zx.substr(pos+1));

    return root;
}

int main(){
    Tree root = build("125364", "152634");
    preord(root, 2);
    for(int i = 0; i < 7; i++) cout<<A[i]<<" ";

    return 0;
}