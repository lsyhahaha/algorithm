//
// Created by 98708 on 2023/9/6.
//

#include "C:\Users\98708\Desktop\algorithm\HeadFile\tree.h"


#include <iostream>
#include <queue>
using namespace std;


//判断一棵树是否是完全二叉树
bool isCompleteBinaryTree(TreeNode* root) {
    if (!root) {
        return true;  // 空树被认为是完全二叉树
    }

    queue<TreeNode*> q;
    q.push(root);//入队
    bool hasNull = false;  // 是否已经遇到了空节点

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        // 如果遇到空节点，后续的节点都应该是空节点
        if (!node) {
            hasNull = true;
        } else {
            // 如果已经遇到了空节点，但当前节点不为空，说明不是完全二叉树
            if (hasNull) {
                return false;
            }

            q.push(node->left);
            q.push(node->right);
        }
    }

    return true;
}

int main() {
    // 创建一个示例完全二叉树
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    bool isComplete = isCompleteBinaryTree(root);
    cout << "是否为完全二叉树: " << (isComplete ? "是" : "否") << endl;

    // 释放树节点内存
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
