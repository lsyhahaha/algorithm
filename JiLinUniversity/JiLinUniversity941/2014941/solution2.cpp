//
// Created by 98708 on 2022/9/24.
//

/*2.设二叉查找树采用链接存储结构，其各结点的关键词均不相同，
 * 请编写非递归算法，按递减次序打印所有左子树非空，右子树为空的结点的关键词。
 */

/*思路：用中序遍历的变形，右根左，进行遍历，就可以得到一个递减次序的序列。在访问结点时判断是否满足条件*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*二叉树的中序遍历的非递归算法*/
void midOrderSort(Tree root){
    Tree stack[N], p = root; // 初始化栈, p是遍历指针
    int top=-1; // top是栈顶指针
    while(p||top!=-1) { // 栈不空或者p不空是循环
        if(p!=NULL){ // 一路向左
            stack[top++] = p; // 当前结点入栈
            p=p->left; // 左孩子不空，一路向左走
        }else{              // 出栈，并且转向出栈结点的右子树
            p=stack[top--]; // 栈顶元素出栈，访问出栈结点
            if(root->left != NULL && root->right==NULL){
                printf("%d ", root->data);
            }
            p=p->right;  // 向右子树走，p赋值为当前结点的右孩子
        }
    }
}

/*递归算法，题目要求非递归算法*//*
void midOrderSort(Tree root){
    if(root==NULL) return;

    midOrderSort(root->left);
    if(root->left != NULL && root->right==NULL){
        printf("%d ", root->data);
    }
    midOrderSort(root->right);
}*/
