//
// Created by 98708 on 2022/9/22.
//

/*若以先跟次序遍历一棵二叉树，请设计如下算法：
 * 输出所有节点的关键字，以及结点所在的层次；
 * */

/*算法思想：
 * */

#include<stdio.h>
#include "stdlib.h"
#include "string.h"
#include "algorithm"
#include "bits/stdc++.h"
using namespace std;

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;


void PreOrder(Tree root, int level){
    // 先序遍历二叉树
    // 参数说明， root 为一棵二叉树， level为根节点所在的层次
    if (root == NULL) return;
    printf("%d ‘s level is %d\n", root->data, level);
    PreOrder(root->left, level+1);
    PreOrder(root->right, level+1);
}

Tree Create(string pre, string mid){
    //先序遍历和中序遍历构造一棵二叉树
    // 参数说明：pre，mid,分别为二叉树的先序和中序序列
    /*思路：
     * 分别求得根节点的左子树和右子树的先序遍历序列与中序遍历序列；
     * 分别以左子树和右子树为新树进行第一步操作；
     * 直至没有子树为止*/
    if (pre.size() == 0) return NULL; /*递归终止条件*/
    Tree root = (Tree)malloc(sizeof(Node));
    root->data = pre[0] - '0';
    /*所以左子树的先序和后序遍历序列分别为  pre[1...index] mid[0...(index-1)]
     * 右子树的先序和后序遍历序列分别为    pre[(index+1)....n-1] mid[index.....n-1]*/
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