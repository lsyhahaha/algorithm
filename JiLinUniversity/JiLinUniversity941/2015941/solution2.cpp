//
// Created by 98708 on 2022/9/24.
//

/*2.统计二叉树各层中独生叶结点（既是叶结点又无兄弟结点）的数目。
 * 要求：编写函数LeafNoBrotherInEachLevel(root),其中root
 * 为指向某二叉树根结点的指针，该函数的功能是输出以root为根的二
 * 叉树各层中独生叶结点的数目。*/

/*算法思想：
 * ①层次遍历二叉树，判断当前层的每一个结点是否满足条件；
 * ②判断是否是叶节点：即没有左孩子和有孩子；
 * ③判断是否右兄弟节点：*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

void level(Tree root, int count[]){
    /*对以root为根的树，进行层次遍历，将每层（假设根节点所在层为第0层）独生叶结点保存在数组中*/
    if(root->left==NULL && root->right==NULL){ // 如果root为独生叶节点
        count[0] = 1;
        return;
    }
    Tree queue[N];
    int front = 0,rear=0,h=0;
    queue[rear++]=root; // 根节点入队
    while(front!=rear){//如果队列不为空
        int len_cur = rear-front; // 该层的结点个数
        for(int i=front; i<len_cur;i++){
            Tree cur = queue[front++];  // 出队
            if(cur->left==NULL && cur->right!=NULL && cur->right->left==NULL && cur->right->right==NULL){
                // 则该节点的右孩子为独生叶节点，下一层的数组值加1
                count[h+1]++;
            }
            if(cur->left!=NULL && cur->right==NULL && cur->left->left==NULL && cur->left->right==NULL){
                // 则该节点的右孩子为独生叶节点，下一层的数组值加1
                count[h+1]++;
            }
            if(cur->left!=NULL) queue[rear++] = cur->left;
            if(cur->right!=NULL) queue[rear++] = cur->left;
        }
        h++; //进入下一层
    }
}