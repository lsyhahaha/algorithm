//
// Created by 98708 on 2023/9/6.
//

#include "C:\Users\98708\Desktop\algorithm\HeadFile\tree.h"


#include <iostream>
#include <queue>
using namespace std;


//�ж�һ�����Ƿ�����ȫ������
bool isCompleteBinaryTree(TreeNode* root) {
    if (!root) {
        return true;  // ��������Ϊ����ȫ������
    }

    queue<TreeNode*> q;
    q.push(root);//���
    bool hasNull = false;  // �Ƿ��Ѿ������˿սڵ�

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        // ��������սڵ㣬�����Ľڵ㶼Ӧ���ǿսڵ�
        if (!node) {
            hasNull = true;
        } else {
            // ����Ѿ������˿սڵ㣬����ǰ�ڵ㲻Ϊ�գ�˵��������ȫ������
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
    // ����һ��ʾ����ȫ������
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    bool isComplete = isCompleteBinaryTree(root);
    cout << "�Ƿ�Ϊ��ȫ������: " << (isComplete ? "��" : "��") << endl;

    // �ͷ����ڵ��ڴ�
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
