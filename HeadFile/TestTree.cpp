//
// Created by 98708 on 2023/9/6.
//

#include "../HeadFile/tree.h"

int main() {
    // ����������ʾ��
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "ǰ��������ݹ飩: ";
    preorderRecursive(root);
    cout << endl;

    cout << "ǰ��������ǵݹ飩: ";
    preorderIterative(root);
    cout << endl;

    cout << "����������ݹ飩: ";
    inorderRecursive(root);
    cout << endl;

    cout << "����������ǵݹ飩: ";
    inorderIterative(root);
    cout << endl;

    cout << "����������ݹ飩: ";
    postorderRecursive(root);
    cout << endl;

    cout << "����������ǵݹ飩: ";
    postorderIterative(root);
    cout << endl;

    cout << "��α���: ";
    levelOrder(root);
    cout << endl;

    return 0;
}