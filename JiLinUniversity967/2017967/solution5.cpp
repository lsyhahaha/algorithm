//
// Created by 98708 on 2022/9/22.
//

/*�����ȸ��������һ�ö�����������������㷨��
 * ������нڵ�Ĺؼ��֣��Լ�������ڵĲ�Σ�
 * */

/*�㷨˼�룺
 * */

#include<stdio.h>
#include "stdlib.h"
#include "string.h"
#include "algorithm"
#include "bits/stdc++.h"
using namespace std;

typedef struct Node{//����������Ĵ洢�ṹ
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;


void PreOrder(Tree root, int level){
    // �������������
    // ����˵���� root Ϊһ�ö������� levelΪ���ڵ����ڵĲ��
    if (root == NULL) return;
    printf("%d ��s level is %d\n", root->data, level);
    PreOrder(root->left, level+1);
    PreOrder(root->right, level+1);
}

Tree Create(string pre, string mid){
    //��������������������һ�ö�����
    // ����˵����pre��mid,�ֱ�Ϊ���������������������
    /*˼·��
     * �ֱ���ø��ڵ�����������������������������������������У�
     * �ֱ�����������������Ϊ�������е�һ��������
     * ֱ��û������Ϊֹ*/
    if (pre.size() == 0) return NULL; /*�ݹ���ֹ����*/
    Tree root = (Tree)malloc(sizeof(Node));
    root->data = pre[0] - '0';
    /*����������������ͺ���������зֱ�Ϊ  pre[1...index] mid[0...(index-1)]
     * ������������ͺ���������зֱ�Ϊ    pre[(index+1)....n-1] mid[index.....n-1]*/
    int pos = mid.find(pre[0]);
    if (pos == -1) return NULL;
    root->left = Create(pre.substr(1,pos), mid.substr(0,pos));
    root->right = Create(pre.substr(pos+1), mid.substr(pos+1));

    return root;
}

int main(){
    Tree root = Create("1245367", "4251637");
    PreOrder(root, 0);

    return 0;
}