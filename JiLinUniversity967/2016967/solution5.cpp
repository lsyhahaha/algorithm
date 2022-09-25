//
// Created by 98708 on 2022/9/24.
//

/*请设计一个算法判断二叉树T是否为一颗完全二叉树，若是返回1，否则返回0.*/

/*算法思想：
 * ① 层序遍历二叉树，当遍历到叶子结点或者只有左孩子的结点时，后面的所有结点都为叶子结点，否则不是完全二叉树*/

/*更好的算法思想是，将空结点也加入队列，判断空结点之后是否还有空结点*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

int IsComBtree(Tree root){
    Tree queue[N];
    int front=0,rear=0; // 初始化队头队尾
    queue[rear++] = root;//根节点入队
    bool flag = false; // 标记是否遇到第一个叶子结点或者只有左子树的结点
    while(front!=rear){
        int d = rear-front;
        for(int i = 0; i < d; i++){
            Tree cur = queue[front++];// 出队
            if(cur->left!=NULL) queue[rear++] = cur->left; // 左孩子存在，入队
            if(cur->right!=NULL) queue[rear++] = cur->right; // 右孩子存在，入队
            // 是否遇到第一个叶子结点或者只有左子树的结点
            if (cur->left!=NULL && cur->right==NULL) flag = true;
            if (cur->left==NULL && cur->right==NULL) flag = true;

            if(flag && (cur->left!=NULL || cur->right!=NULL)){
                return 0;
            }
        }
    }

    return 1;
}