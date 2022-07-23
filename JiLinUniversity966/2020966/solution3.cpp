//
// Created by 98708 on 2022/7/23.
//

//递归判断两个数是否对称

#include "bits/stdc++.h"
using namespace std;

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
}* Tree;


string qx = "1234243";
string zx = "3241423";

int fun(Tree pNode);

int judge(Node *a, Node *pNode1);

Tree build(string qx, string zx){// 前序中序构建二叉树
    if (qx.size() == 0) return NULL;
    Tree root = (Tree)malloc(sizeof(Node));
    root->data = qx[0]-'0';
    int pos = zx.find(qx[0]);
    root->left = build(qx.substr(1, pos), zx.substr(0,pos));
    root->right = build(qx.substr(pos+1), zx.substr(pos+1));
    return root;
}

int fun(Tree root) {
    if (root == NULL) {
        return true;
    }
    return judge(root->left, root->right);
}

int judge(Node *a, Node *b) {
    if (!a && !b) return true; // 如果都为空，则对称
    else if (!a || !b) return false; // 如果其中一个为空，则不对称
    if (a->data == b->data) {
        return judge(a->left, b->right) && judge(a->right, b->left);
    }
    return false;
}

int main(){
    Tree root = build(qx, zx); // 树的构建过程
    printf("%d", fun(root));
}
