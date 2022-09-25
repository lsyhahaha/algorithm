//
// Created by 98708 on 2022/9/25.
//

/*二叉树的后序遍历序列存放在数组A中，中序遍历序列存放在数组B中，根据后序和中序序列，创建二叉树。*/

/*算法思路：
 * ①中序遍历：左根右；后序遍历，左右根
 * ②根据后序遍历可以确定根节点，然后在中序遍历序列中找到根节点，分出左右子树*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

Tree create(int A[], int B[], int length, int start1, int end1, int start2, int end2){
    if(length==0) return NULL;
    // 根节点
    Tree root;
    root->data = B[length-1];
    // 在中序序列中找到根节点的位置
    int index = start1;
    for(; index < end1; index++){
        if(B[length-1] == A[index]) break;
    }

    root->left = create(A,B,index-start1, start1, index, index+1, end2);
    root->right = create();
}