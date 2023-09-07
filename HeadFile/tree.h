//
// Created by 98708 on 2023/9/6.
//

#ifndef ALGORITHM_TREE_H
#define ALGORITHM_TREE_H

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// 递归前序遍历
void preorderRecursive(TreeNode* root) {
    if (root) {
        cout << root->val << " ";
        preorderRecursive(root->left);
        preorderRecursive(root->right);
    }
}

// 非递归前序遍历
void preorderIterative(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> s;
    s.push(root);

    while (!s.empty()) {
        TreeNode* node = s.top();
        s.pop();

        cout << node->val << " ";

        if (node->right) s.push(node->right);
        if (node->left) s.push(node->left);
    }
}

// 递归中序遍历
void inorderRecursive(TreeNode* root) {
    if (root) {
        inorderRecursive(root->left);
        cout << root->val << " ";
        inorderRecursive(root->right);
    }
}

// 非递归中序遍历
void inorderIterative(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> s;
    TreeNode* curr = root;

    while (curr || !s.empty()) {
        while (curr) {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->val << " ";
        curr = curr->right;
    }
}

// 递归后序遍历
void postorderRecursive(TreeNode* root) {
    if (root) {
        postorderRecursive(root->left);
        postorderRecursive(root->right);
        cout << root->val << " ";
    }
}

// 非递归后序遍历
void postorderIterative(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        TreeNode* node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->left) s1.push(node->left);
        if (node->right) s1.push(node->right);
    }

    while (!s2.empty()) {
        cout << s2.top()->val << " ";
        s2.pop();
    }
}

// 层次遍历
void levelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        cout << node->val << " ";

        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}

#endif //ALGORITHM_TREE_H