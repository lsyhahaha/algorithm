//
// Created by 98708 on 2022/9/25.
//

/*给定二叉树的根为root，编写算法对二叉树进行自下而上，自左而右的层次遍历*/

/*算法思路：
 * ①在树的层次遍历的基础上，每层使用一个栈使得序列从右到左，总的序列再使用一个栈，得到自下而上的序列*/

#include "bits/stdc++.h"
using namespace std;
#define N 100

typedef struct Node{
    int data;
    struct Node *left, *right;
}Node, *Tree;

void ReverseLevelOrder(Tree root, int A[]){
    // 将自下而上，自左而右的层次遍历序列保存在数组A中
    Tree stack[N], levelstack[N];
    int top = -1, leveltop = -1;
    Tree queue[N];   // 层次遍历所使用的队列
    int front = 0, rear = 0;
    queue[rear++] = root; // 根节点入队
    while(front!=rear){
        int d = rear - front;
        for(int i = 0; i < d; i++){
            Tree cur = queue[front++];// 出队
            levelstack[++leveltop] = cur;// 每一层元素入栈
            if(cur->left!=NULL) queue[rear++] = cur->left;
            if(cur->right!=NULL) queue[rear++] = cur->right;
        }

        //每一层结点入总栈
        while(leveltop!=-1){
            stack[++top] = levelstack[leveltop--];
        }
    }

    int i = 0;
    while(top!=-1){
        A[i++] = stack[top--]->data;
    }
}