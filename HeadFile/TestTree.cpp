//
// Created by 98708 on 2023/9/6.
//

#include "../HeadFile/tree.h"

int main() {
    // 构建二叉树示例
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "前序遍历（递归）: ";
    preorderRecursive(root);
    cout << endl;

    cout << "前序遍历（非递归）: ";
    preorderIterative(root);
    cout << endl;

    cout << "中序遍历（递归）: ";
    inorderRecursive(root);
    cout << endl;

    cout << "中序遍历（非递归）: ";
    inorderIterative(root);
    cout << endl;

    cout << "后序遍历（递归）: ";
    postorderRecursive(root);
    cout << endl;

    cout << "后序遍历（非递归）: ";
    postorderIterative(root);
    cout << endl;

    cout << "层次遍历: ";
    levelOrder(root);
    cout << endl;

    return 0;
}