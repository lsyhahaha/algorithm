//
// Created by 98708 on 2022/10/5.
//

/*算法题1：
 * 非递归算法写出二叉树先序序列的第k个结点的值*/

/*解题思路：使用非递归的先序遍历算法，将遍历得到的值保存在数组中即可获得第k个结点的值*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

typedef struct Node{//定义二叉树的存储结构
    int data;
    struct Node* left;
    struct Node* right;
}Node,*Tree;

/*核心代码*/
int A[100];
int index = 0;
void preord(Tree root, int k){
    // init 栈
    Tree stack[maxsize];
    int top = -1;
    // 根节点入栈
    stack[++top] = root;
    while(top!=-1){ // 栈非空，则执行循环
        // 出栈，输出遍历序列
        Tree q = stack[top--];
        int a = q->data;
        A[index++] = a;

        // 将孩子结点入栈
        if(q->right != nullptr) stack[++top] = q->right;
        if(q->left != nullptr) stack[++top] = q->left;
    }
}

Tree build(string qx, string zx){// 前序中序构建二叉树
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