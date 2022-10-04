//
// Created by 98708 on 2022/9/27.
//

/*高度平衡二叉树即任意的左右子树的高度之差绝对值不超过1的二叉树。已知一棵二叉树采用二叉链表进行存储，结点
 * 结构为（left,data,right）, root指向根结点。编写算法判断该二叉树是否为平衡二叉树。*/

#include "bits/stdc++.h"
#define maxsize 100
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int high(TreeNode * root){
    if(root==nullptr) return 0;
    return max(high(root->left), high(root->right)) + 1;
}

bool isBalanced(TreeNode* root) {
    if(root == nullptr) return true;
    return isBalanced(root->left) && isBalanced(root->right) && abs(high(root->left) - high(root->right)) <= 1;
}