#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

long long pre = LONG_MIN;
bool isValidBST(struct TreeNode* root){
    // 给你一个二叉树的根节点 root ，判断其是否是一个有效的二叉搜索树。
    /*算法思路：
     * 二叉搜索树就是对于每一个结点，它的左子树的最大值小于该结点的值，
     * 而且右子树的最小值大于该节点的值*/
    if (root == NULL) {
        return true;
    }
    // 访问左子树
    if (!isValidBST(root->left)) {
        return false;
    }
    // 访问当前节点：如果当前节点小于等于中序遍历的前一个节点，说明不满足BST，返回 false；否则继续遍历。
    if (root->val <= pre) {
        return false;
    }
    pre = root->val;
    // 访问右子树
    return isValidBST(root->right);
}